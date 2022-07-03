echo enter three numbers
read a
read b
read c
if [ $a -ge $b ]
then
if [ $a -le $c ]
then
echo $a is the second highest number
elif [ $b -ge $c ]
then
echo $b is the second highest number
else
echo $c is the second highest number
fi
elif [ $b -le $c ]
then
echo $b is the second highest number
elif [ $c -ge $a ]
then
echo $c is the second highest number
else
echo $a is the second highest number
fi