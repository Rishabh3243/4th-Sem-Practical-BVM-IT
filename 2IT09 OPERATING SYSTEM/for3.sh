echo "Enter a String"
read input
reverse=""
len=${#input}
for ((i=$len-1; i -ge 0 ; i--))
do
	reverse="$reverse${input:$i:1}"
done
if [ $input == $reverse ]
then
	echo palendrome
else
	echo not palendrome
fi 
