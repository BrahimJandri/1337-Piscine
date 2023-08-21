#!bin/sh
id -n -G $FT_USER | tr ' ' ',' | tr -d "\n"
