choice="Y"
while [ $choice = "Y" ]
do
echo menu:
echo press 1 to add
echo press 2 to subtract
echo press 3 to multiply
echo press 4 to divide
echo enter your choice
read ch
echo enter two num:
read a  
read b
case $ch in
1) let c=a+b
echo $c;;
2) let c=a-b
echo $c;;
3) let c=a*b
echo $c;;
4) let c=a/b
echo $c;;
*) echo wrong choice;;
esac
echo do you want to continue?
read choice
done