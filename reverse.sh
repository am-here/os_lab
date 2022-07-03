function rev ()
{
    s=0
    while [ $n -ne 0 ]
    do
    let r=$n%10
    let n=$n/10
    let s=$s*10+$r
    done
    echo reverse of number = $s
}
echo enter a number:
read n
rev $n


n=$1
s=0
while [ $n -ne 0 ]
do
    let r=$n%10
    let n=$n/10
    let s=$s*10+$r
done
echo reverse of number = $s
