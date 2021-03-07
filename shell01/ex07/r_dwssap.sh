cat /etc/passwd | cut -d ':' -f1 | sed '/^#/d' | sed -n 'n;p' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./'
