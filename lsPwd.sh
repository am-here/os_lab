choice="Y"
while [ $choice = "Y" ]
do
echo menu;
echo press 1 to see the content of the current folder
echo press 2 to show the present working directory
echo press 3 to show the calendar
echo press 4 to exit
echo enter your choice:
read ch
case $ch in
1) ls;;
2) pwd;;
3) cal;;
4) exit;;
*) echo wrong choice;;
esac
echo do you want to continue?
read choice
done
