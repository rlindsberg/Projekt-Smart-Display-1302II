/* Code for logging in to the database 
Info for SQL database is below
servername: localhost
username: root
password: password
databasename: smartdisplaymessage

*/
<?php

define('DB_SERVER', 'localhost');
define('DB_USERNAME', 'root');
define('DB_PASSWORD', 'password');
define('DB_NAME', 'smartdisplaymessage');
 

$link = mysqli_connect(DB_SERVER, DB_USERNAME, DB_PASSWORD, DB_NAME);
 
/*error handling in case coudln't log in to the database*/
if($link === false){
    die("ERROR: Could not connect. " . mysqli_connect_error());
}
?>
