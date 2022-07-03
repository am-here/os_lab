fact=1
echo enter the num
read a
for ((i=1;i<$a+1;i++))
do
let fact=fact*i
done
echo the factorial of $a is $fact
fact=1
i=1
while [ $i -le $a ]
do
let fact=fact*i
let i=i+1
done
echo the factorial of $a is $fact