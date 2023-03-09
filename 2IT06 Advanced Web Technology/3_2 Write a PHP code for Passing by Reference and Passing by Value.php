<center>
<?php  
function increment($var){  
    $var++;  
    return $var;  
}  
echo "Passing By Value Example <br>";
$a = 9;  
$b = increment($a);  
echo "Value of A : $a <br>";  
echo "Value of B : $b";
?>


<br><br>

<?php  
function increment1(&$var){  
    $var++;  
    return $var;  
}  
echo "Passing By Reference Example <br>";
$a = 9;  
$b = increment1($a);  
echo "Value of A : $a<br>";
echo "Value of B : $b";   
?>
</center>