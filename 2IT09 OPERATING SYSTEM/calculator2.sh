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
switch $c
in
	case 1
		echo " Ans :" `expr $a + $b`
	case 2
		echo " Ans :" `expr $a - $b`
	case 3
		echo " Ans :" `expr $a \* $b`
	case 4
		echo " Ans :" `expr $a / $b`
	case *
		echo "Good"
end
