<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial</title>
</head>
<body>
    <center>
    <form action="<?php $_PHP_SELF ?>" method="post">
        <h1> Factorial</h1><br>
        <label for="num">Enter the Number you want Factorial :</label>
        <input type="number" id="num1" name="num" required>
        <input type="submit" name="S1" value="Submit">
    </form>
    </center>
    <br>
</body>
</html>
<?php
echo "<center>";
if(isset($_POST["S1"]))
{
    function f($x)
    {
        if ($x==0)
        {
            $x=1;
        }
        else
        {
            $x=$x*f($x-1);
        }
        return $x;
    }
$c=$_POST["num"];
$b=1;
if ($c==0 )
    {echo " $b <br>";}
if ($c>0)
    {
        $b=f($c);
    }
echo "Factorial $c is $b";
echo "</center>";
}
?>