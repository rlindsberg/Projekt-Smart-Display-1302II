<?php
  
if (isset($_POST['messageSubmit']))
    {
 
        require_once 'config2.php';    
         
$message = $_POST['message'];
         
$username = $_POST['username'];
        
$sql1 = "TRUNCATE TABLE message";
$sql = "INSERT INTO message (username, message) VALUES ('$username', '$message' )";
   
$result1 = mysqli_query($link, $sql1);
$result = mysqli_query($link, $sql);
    
header("location: index.php");
       
}
