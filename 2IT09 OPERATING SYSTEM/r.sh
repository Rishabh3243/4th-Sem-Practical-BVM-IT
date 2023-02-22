echo "Enter the the value of N"
read a
if [ `expr $a % 2` -eq 0 ]
then
	echo "Number is even"
else
	echo "Number is odd"
fi
