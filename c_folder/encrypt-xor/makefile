encrypt.o: encrypt.c encrypt.h  	#The "dependencies" and the "recipe" makes the "rule"
	gcc -c encrypt.c  							

message_hider.o: message_hider.c encrypt.h
	gcc -c message_hider.c

psswdEncryptor: encrypt.o message_hider.o
	gcc encrypt.o message_hider.o -o psswdEncryptor