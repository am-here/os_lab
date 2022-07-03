choice="Y"
while [ $choice = "Y" ]
do
echo menu;
echo press 1 to copy file to specific directory
echo press 2 to remove the file
echo press 3 to move the file to the specified directory
echo press 4 to rename the file
echo enter your choice:
read ch
case $ch in
1) echo enter the filename:
read a
echo enter the directory:
read b
cp $a $b;;
2) echo enter the file to remove:
read a
rm $a;;
3) echo enter the filename:
read a
echo enter the directory:
read b
mv $a $b;;
4) echo enter the filename:
read a
echo enter a new file for it:
read b
mv $a $b;;
*) echo wrong choice;;
esac
echo do you want to continue?
read choice
done
