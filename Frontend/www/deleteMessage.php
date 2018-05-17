<?php


      require_once 'config2.php';    
    
      
   $sql = "TRUNCATE TABLE message";   
 $result = mysqli_query($link, $sql);
   
 header("location: index.php");
      