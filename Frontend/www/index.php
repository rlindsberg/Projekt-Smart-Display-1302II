/* Code for the homepage that checks if a user is logged in and fetches the current message from the database and enables a user that is logged in to send in a form with a new message. */
<?php
session_start();
require_once 'config2.php';    
   
 if(!isset($_SESSION['username']) || empty($_SESSION['username'])){
  $_SESSION['loggedin'] = false;
}
else {
     $_SESSION['loggedin'] = true;
     $name = $_SESSION['username']; 
}
?>
 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>SmartDisplay</title>
    <link rel="stylesheet" type="text/css" href="reset.css">
    <link rel="stylesheet" type="text/css" href="styles.css">
    <style type="text/css">
      
        .wrapper{ width: 350px; padding: 20px;  border-radius: 5px; }
    </style>
</head>
<body>
<ul>
  <li><a href=index.php>Home</a></li>
  <li style="float:right"> <a href=register.php>Register</a></li>
  <?php if($_SESSION['loggedin'] == false) {
  echo '<li style="float:right"><a href=login.php>Log in</a></li>'; 
  }
  else {
    echo '<li style="float:right"><a href=logout.php>Log out</a></li>';
  } ?>
</ul>
  <h1>SmartDisplay</h1>
        <p id=special>Because saving trees matters!</p>
        <span> </span>
<p> Active message</p>
   
<?php
   
   /*PHP code for displaying the message and the author*/
$sql = "SELECT * FROM message";
    
$result = $link->query($sql);
   
while ($row = $result->fetch_assoc()){
 
  echo "<div>";    
       
 echo "<p>";
      
  echo "User: ";    
        
echo $row['username']."<br>";  
        
echo "</p>";
        
echo $row['message']."<br>";

echo "</div>";
 
}
?>
         <?php if($_SESSION['loggedin'] == false) {
  echo '<h2 id=center> Log in to edit the current message! </h2>'; 
  }
  else {
     echo '<h2 id=center> Welcome '; echo $name; echo '</h2>';
 echo '<li><a href=deleteMessage.php><p id=right>Delete current message</p></a></li> ';
 echo '<span> </span>';
echo
        "<form  method = 'POST' action = 'setComment.php'>
        
<p> Write your message here: </p>  <textarea rows = '10' cols = '30' name = 'message'></textarea><br/>   
       
<input type= 'hidden' name = 'username' value='$name'>
 <button type = 'submit' name = 'messageSubmit'> Post </button>
        </form>";
    
  } ?>
   
</body>
</html>
