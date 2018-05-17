/* Code for fetching and displaying the current message of the database, also includes a timed auto refresh of the page. */
<?php
session_start();
require_once 'config2.php';   
 
   
?>
 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Active Message</title>
    <link rel="stylesheet" type="text/css" href="reset.css">
    <link rel="stylesheet" type="text/css" href="styles.css">
    <style type="text/css">
      
        .wrapper{ width: 350px; padding: 20px;  border-radius: 5px; }
    </style>
</head>
<body>
 
<?php
$url=$_SERVER['REQUEST_URI'];
header("Refresh: 10; URL=$url");
$sql = "SELECT * FROM message";
    
$result = $link->query($sql);
   
while ($row = $result->fetch_assoc()){
     
  echo "<p id = big>";
        
echo $row['message']."<br>";
echo "</p>";
 
}

   ?>
</body>
</html>
