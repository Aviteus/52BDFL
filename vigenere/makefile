   main: main.o codeur.o decodeur.o
	gcc -o main main.o codeur.o decodeur.o

main.o: main.c
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic

codeur.o: codeur.c codeur.h
	gcc -o codeur.o -c codeur.c -W -Wall -ansi -pedantic

decodeur.o: decodeur.c decodeur.h
	gcc -o decodeur.o -c decodeur.c -W -Wall -ansi -pedantic
clean:
	rm main main.o codeur.o decodeur.o
