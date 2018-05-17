/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "../Inc/main.h"
#include "../Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"
#include "../Inc/spi.h"
#include "../Inc/gpio.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */
/**
* @brief  Put cursor onto the desired row
* @param  uint8_t rowNr
* @note   ..
* @retval None
**/
void selectRow(uint8_t rowNr){
  uint8_t rowAddress = 0x80 + rowNr * 0x20;
  printf("Selecting row with addr %x\n", rowAddress);
  uint8_t displayBuffer[3];
  displayBuffer[0] = 0x1f;
  displayBuffer[1] = rowAddress & 0x0f;
  displayBuffer[2] = (rowAddress >> 4) & 0x0f;
  HAL_SPI_Transmit(&hspi1, displayBuffer, 3, 1000);
}

/**
* @brief  Send command to display controller
* @param  uint8_t commandToBeSent[]
* @note   ..
* @retval None
**/
void sendCommandToSPI(uint8_t commandToBeSent[]){
  for (int i = 0; i < 3; i++) {
    HAL_SPI_Transmit(&hspi1, &commandToBeSent[i], 1, 500);
  }
}

/**
* @brief  Sends an ASCII code to display
* @param  uint8_t asciiData
* @note   ..
* @retval None
**/
void sendDataToDisplay(uint8_t asciiData) {  // Send one character to display
  uint8_t displayBuffer[3];
  displayBuffer[0] = 0x5f;
  displayBuffer[1] = asciiData & 0x0f;
  displayBuffer[2] = (asciiData >> 4) & 0x0f;
  HAL_SPI_Transmit(&hspi1, displayBuffer, 3, 500);
  // sendCommandToSPI(displayBuffer); //doesn't work..
}


/**
* @brief  Sends a string to display
* @param  char charBuffer[]
* @note   ..
* @retval None
**/
void sendCharToDisplay(char charBuffer[]) {  // Send one character to display
  uint8_t displayBuffer[3];
  displayBuffer[0] = 0x5f;
  for (size_t i = 0; i < 10; i++) {
    displayBuffer[1] = charBuffer[i] & 0x0f;
    displayBuffer[2] = charBuffer[i] >> 4 & 0x0f;
    HAL_SPI_Transmit(&hspi1, displayBuffer, 3, 500);
  }
}


/**
* @brief  Init display
* @param  None
* @note   ..
* @retval None
**/
void initDisplay(void){
  //Set CS to 0, Reset spi1_NSS
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET); // PA4: CS
//  HAL_Delay(100);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);  // PA12: RST
//  HAL_Delay(100);

  //Initialization commands
  uint8_t functionSet[3] = {0x1f, 0x0a, 0x03};
  HAL_Delay(10);
  sendCommandToSPI(functionSet);
  uint8_t extendedFunctionSet[3] = {0x1f, 0x09, 0x0};
  sendCommandToSPI(extendedFunctionSet);
  uint8_t entryModeSet[3] = {0x1f, 0x06, 0x0};
  sendCommandToSPI(entryModeSet);
  uint8_t biasSetting[3] = {0x1f,0x0e,0x01};
  sendCommandToSPI(biasSetting);
  uint8_t functionSet2[3] = {0x1f,0x09,0x03};
  sendCommandToSPI(functionSet2);
  uint8_t internalOSC[3] = {0x1f,0x0b,0x01};
  sendCommandToSPI(internalOSC);
  uint8_t followerControl[3] = {0x1f,0x0e,0x06};
  sendCommandToSPI(followerControl);
  uint8_t powerControl[3] = {0x1f,0x06,0x05};
  sendCommandToSPI(powerControl);
  uint8_t contrastSet[3] = {0x1f,0x0a,0x07};
  sendCommandToSPI(contrastSet);
  uint8_t functionSet3[3] = {0x1f,0x08,0x03};
  sendCommandToSPI(functionSet3);
  uint8_t displayOn[3] = {0x1f,0x0f,0x00};
  sendCommandToSPI(displayOn);
  uint8_t clearDisplay[3] = {0x1f,0x01,0x0};
  sendCommandToSPI(clearDisplay);

}

void displaySend(uint8_t data) {  // Send one character to display
  uint8_t displaySend[3];
  displaySend[0] = 0x5f;
  displaySend[1] = data & 0x0f;
  displaySend[2] = (data >> 4) & 0x0f;
  HAL_SPI_Transmit(&hspi1,displaySend,3,1000);
}

/**
* @brief  Sends config data to display to decide which row to print to
* @param  row: which row to be printed to
* @retval None
*/
void activeRow(uint8_t row) {  // put cursor on desired row
  uint8_t data;
  if (row == 1) { data = 0x80; }
  else if (row == 2) { data = 0xa0; }
  else if (row == 3) { data = 0xc0; }
  else if (row == 4) { data = 0xe0; }
  uint8_t displaySend[3];
  displaySend[0] = 0x1f;
  displaySend[1] = data & 0x0f;
  displaySend[2] = (data >> 4) & 0x0f;
  HAL_SPI_Transmit(&hspi1,displaySend,3,1000);
}

void displayInit(void) {  // Init display
//  HAL_Delay(100);
  // HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET); // PA4: CS
//  HAL_Delay(100);



 HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_8);  // PA12: RST
 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);
 HAL_Delay(100);


  uint8_t displayInit [12][3] ={
    {0x1f,0x0a,0x03},{0x1f,0x09,0x00},{0x1f,0x06,0x00},
    {0x1f,0x0e,0x01},{0x1f,0x09,0x03},{0x1f,0x0b,0x01},
    {0x1f,0x0e,0x06},{0x1f,0x06,0x05},{0x1f,0x0a,0x07},
    {0x1f,0x08,0x03},{0x1f,0x0f,0x00},{0x1f,0x01,0x00}};
  int i,j;
  for (i=0; i<12; i++) {
    for (j=0; j<3; j++) {
      HAL_SPI_Transmit(&hspi1,&displayInit[i][j],1,100);
       HAL_Delay(100);
    }
  }
  // Print welcome message to screen to appear before first therm/humi printout
  char row1Init[10];
  sprintf(row1Init, "----------");
  activeRow(1); // row1 = time
  for (i=0; i<10; i++) {
    displaySend(row1Init[i]);
     HAL_Delay(100);
  }
  char row2Init[10];
  sprintf(row2Init, "----------");
  activeRow(2); // row1 = time
  for (i=0; i<10; i++) {
    displaySend(row2Init[i]);
  }
  char row3Init[10];
  sprintf(row3Init, "----------");
  activeRow(3); // row1 = time
  for (i=0; i<10; i++) {
    displaySend(row3Init[i]);
  }
  char row4Init[10];
  sprintf(row4Init, "----------");
  activeRow(4); // row1 = time
  for (i=0; i<10; i++) {
    displaySend(row4Init[i]);
  }
}


/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();

  /* USER CODE BEGIN 2 */
displayInit();

    HAL_Delay(50);
  char buffer[10];
        sprintf(buffer, "Temp:C");
        selectRow(1);
        printf("Printing temp to display..\n");
sendCharToDisplay(buffer);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
  displayInit();

    // HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
    // HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
  }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Initializes the CPU, AHB and APB busses clocks
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL16;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
  ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */

/**
  * @}
*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
