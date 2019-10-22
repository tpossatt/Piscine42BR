cat /etc/passwd | sed -n 'n;p' | awk '/\_/{print $1}' | cut -d ':' -f 1 | rev | sort -r | sed -n -e $FT_LINE1,${FT_LINE2}p | sed 's/$/,/' | tr -d '\n' | sed 's/.$//' | sed 's/$/./' | tr -d '\n'
