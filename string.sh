echo enter the string
read str
n=${#str}
echo the length of string is $n
echo $str>f1
cap=`grep -o '[A-Z]' f1|wc -l`
echo  the numbe rof upper case is $cap
cap1=`grep -o '[a-z]' f1|wc -l`
echo  the numbe of lower case is $cap1
cap2=`grep -o '[0-9]' f1|wc -l`
echo the numbers of digit is $cap2
cap3=`grep -o ' ' f1|wc -l`
echo the number of space is $cap3
c=`expr $cap + $cap1 + $cap2 + $cap3`
cap4=`expr $n - $c`
echo The special character are :$cap4
# substring
# ns=${str:1:3}
# echo $ns