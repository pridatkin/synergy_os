#!/usr/bin/bash
[ -d ./attachments ] || mkdir ./attachments
for ((i=0; i < 20; i++))
do
	#curl https://picsum.photos/800/400 -L > ./attachments/file$i #DONT WORK
	wget -O ./attachments/file$i https://source.unsplash.com/800x400  
done
