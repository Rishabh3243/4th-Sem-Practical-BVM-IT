<!DOCTYPE html>
<html>
<body>
<center>

<form method="get" action="<?php echo $_SERVER['PHP_SELF'];?>">
<h1> GET method </h1><br>

  Name: <input type="text" name="fname">
  <input type="submit">
</form>
</center>
<?php
echo "<center>";
if ($_SERVER["REQUEST_METHOD"] == "GET") {
    $n = htmlspecialchars($_REQUEST['fname']);
    if (empty($n)) {
        echo "<br>Name is empty";
    } else {
        echo "<br>Your Name is : ".$n;
    }
}
echo "</center>";
?>

</body>
</html>