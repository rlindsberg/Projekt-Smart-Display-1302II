/* Code that create the table for the messages on the database */
<?php
$link = mysqli_connect("localhost", "root", "password", "smartdisplaymessage");
 
if($link === false){
    die("ERROR: Could not connect. " . mysqli_connect_error());
}
 
$sql = "CREATE TABLE message(
 username VARCHAR(50) NOT NULL UNIQUE,
    message TEXT NOT NULL  
)";
if(mysqli_query($link, $sql)){
    echo "Table created successfully.";
} else{
    echo "ERROR: Was not able to execute $sql. " . mysqli_error($link);
}
 

mysqli_close($link);
?>
