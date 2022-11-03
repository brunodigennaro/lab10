# Bruno DiGennaro 
# CPSC 1110 001; Fall 2022
# October 30, 2022
# Binary to decimal and decimal to binary conversion using two functions

main: main.c btod.c dtob.c btod.h dtob.h
	gcc -Wall -o main main.c dtob.c btod.c btod.h dtob.h -lm
run: main
	./main
clean:
	rm main