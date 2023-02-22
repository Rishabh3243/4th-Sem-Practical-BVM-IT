echo "Enter the Marks :"
read r
if [ $r -ge 90 -a $r -le 100 ]
then
	echo "GRADE AA"
elif [ $r -ge 80 -a $r -lt 90 ]
then
	echo "GRADE AB"
elif [ $r -ge 70 -a $r -lt 80 ]
then
	echo "GRADE BB"
elif [ $r -ge 60 -a $r -lt 70 ]
then
	echo "GRADE BC"
elif [ $r -ge 50 -a $r -lt 60 ]
then
	echo "GRADE C"
elif [ $r -ge 40 -a $r -lt 50 ]
then
	echo "GRADE D"
elif [ $r -ge 30 -a $r -lt 40 ]
then
	echo "GRADE E"
else
	echo "FAIL"
fi
