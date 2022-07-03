function prime ()
{
    for ((i=2;i<n/2;i++))
    do
    let x=$n%$i
    if [ $x -eq 0 ]
    then
    echo it is not prime
    exit
    fi
    let i=$i+1
    done
    echo the number is prime
}
echo enter a number:
read n
prime
n=$1
for ((i=2;i<n/2;i++))
do
    if [ $((n%i)) -eq 0 ]
    then
        echo it is not prime
        exit
    fi
done
echo the number is prime
