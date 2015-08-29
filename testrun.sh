$1 &

startclock=`date +%s`

while [ 1 -gt 0 ]
do 

	nowclock=`date +%s`
	delta=$(( $nowclock - $startclock ))
	if [ $delta -gt 5 ]; then
		exit -1
	fi

done

