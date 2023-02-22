echo "Enter the value of A :"
read a
echo "Enter the value of B :"
read b
echo "Enter the operation you need to perform "
echo "1.Addition"
echo "2.Substraction"
echo "3.Multiplication"
echo "4.Division"
read c
if [ $c -eq 1 ]
then
	echo " Ans :" `expr $a + $b`
elif [ $c -eq 2 ]
then
	echo " Ans :" `expr $a - $b`
elif [ $c -eq 3 ]
then
	echo " Ans :" `expr $a \* $b`
else
	echo " Ans :" `expr $a / $b`
fi
