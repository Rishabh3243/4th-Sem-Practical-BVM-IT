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
case $c in
	1)echo " Ans :" `expr $a + $b`;;
	2)echo " Ans :" `expr $a - $b`;;
	3)echo " Ans :" `expr $a \* $b`;;
	4)echo " Ans :" `expr $a / $b`;;
	*)echo "Good";;
esac
