echo how many elements do you want to enter
read n
for ((i=1;i<=n;i++))
do
    read arr[i]
done
function bubble_sorting ()
{
    echo Bubble Sorting
    for ((i=1;i<=n;i++))
    do
        for((j=1;j<=n-i;j++))
        do
            if [ ${arr[j]} -gt ${arr[j+1]} ]
            then
                temp=${arr[j]}
                arr[j]=${arr[j+1]}
                arr[j+1]=$temp
            fi
        done
    done
}
function insertion_sorting ()
{
    echo Insertion Sorting
    for ((i=2;i<=n;i++))
    do
        temp=${arr[i]}
        let j=$i-1
        while [ $temp -lt ${arr[j]} ]
        do
            arr[j+1]=${arr[j]}
            let j=$j-1
        done
    arr[j+1]=$temp
    done
}
echo enter your choice 1.Bubble 2.Insertion
read ch
case $ch in
1) bubble_sorting;;
2) insertion_sorting;;
esac
echo the sorted array is
for ((i=1;i<=n;i++))
do
echo ${arr[i]}
done