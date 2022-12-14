#!/bin/sh

vol="$(pactl list sinks | grep '^[[:space:]]Volume:' | head -n 1 | tail -n 1 | sed -e 's,.* \([0-9][0-9]*\)%.*,\1,')"


#case 1 in
#	$((vol >= 70)) ) icon="墳 " ;;
#	$((vol >= 30)) ) icon="奔 " ;;
#	$((vol >=  1)) ) icon="奄 " ;;
#	* ) echo "婢 " && exit ;;
#esac


echo $vol%
#echo "$icon$vol%"
