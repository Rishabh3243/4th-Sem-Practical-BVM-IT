<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Swap two numbers</title>
</head>
<style>
    form{
        align-items: center;
    }
</style>
<body>
    <center>
    <form action="<?php $_PHP_SELF ?>" method="post">
    <table>
        <tr><td colspan="2"><h1> Swap 2 numbers </h1></td></tr>
        <tr>
        <td><label for="start">Number 1 :</label></td>
        <td><input type="number" id="num1" name="num" required></td>
        </tr>
        <tr>
        <td><label for="end">Number 2 :</label></td>
        <td><input type="number" id="num2" name="num2" required></td>
        </tr>
        <tr>
        <td colspan="2"><input type="submit" name="S1" value="Submit"></td>
        </tr>
    </table>
    </form>
    </center>
    <br>
</body>
</html>
<?php
if(isset($_POST["S1"]))
{
$a=$_POST["num"];
$b=$_POST["num2"];
echo "<center><br>Swap 2 Number : <br><br> Before swaping : <br>";
echo ("A = $a B = $b");
echo "<br>After Swaping : <br>";
$temp=$a;
$a=$b;
$b=$temp;
echo ("A = $a B = $b");
echo "</center>";
}
?>