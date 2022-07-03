echo enter two numbers
read a
read b
let mod1=$a%2
if [ $mod1 -eq 0 ]
then
echo $a is even
else
echo $a is odd
fi
let mod2=$b%2
if [ $mod2 -eq 0 ]
then
echo $b is even
else
echo $b is odd
fi