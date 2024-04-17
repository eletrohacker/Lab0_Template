default:
	gcc -Wall -o prog main.c input.c bmi.c -lm
debug:
	gcc -Wall -o prog -g main.c input.c bmi.c -lm
clean:
	rm -f prog
