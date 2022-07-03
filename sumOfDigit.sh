function sum ()
{
    r=0
    s=0
    while [ $n -ne 0 ]
    do
    r=`expr $n % 10`
    n=`expr $n / 10`
    s=`expr $s % $r`
    done
    echo sum of digits = $s
}
echo enter a number:
read n
sum $n

//using CLA

n=$1
r=0
s=0
while [ $n -ne 0 ]
do
r=`expr $n % 10`
n=`expr $n / 10`
s=`expr $s % $r`
done
echo sum of digits = $s
