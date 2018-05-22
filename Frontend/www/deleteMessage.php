/* Code that removes the current message from the database. */
<?php


      require_once 'config2.php';    
    
      
   $sql = "TRUNCATE TABLE message";   
 $result = mysqli_query($link, $sql);
   /*Heading back to index page after excuting*/
 header("location: index.php");
      
