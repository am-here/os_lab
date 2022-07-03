echo -n enter the num of rows:
read r
for ((i=1;i<=r;i++))
do
for ((j=1;j<=r-i;j++))
do
echo -n " "
done
for ((k=1;k<=2*i-1;k++))
do
echo -n "*"
done
echo
done