/* Code that create the table for the messages on the database 
Info for SQL database is below
servername: localhost
username: root
password: password
databasename: smartdisplaymessage
*/
<?php
$link = mysqli_connect("localhost", "root", "password", "smartdisplaymessage");

 /* error handling in case of fail to connect to database*/
if($link === false){
    die("ERROR: 404 not found . " . mysqli_connect_error());
}
 /*Create the database for messages which consists of two columns, author and message*/
$sql = "CREATE TABLE message(
 username VARCHAR(50) NOT NULL UNIQUE,
    message TEXT NOT NULL  
)";

/*Error handling and confirm creating the database*/
if(mysqli_query($link, $sql)){
    echo "Table created successfully.";
} else{
    echo "ERROR: Was not able to execute. " . mysqli_error($link);
}
 

mysqli_close($link);
?>
