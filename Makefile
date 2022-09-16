all: main.o funcoesFornecidas.o command1.o command2.o command3.o open_close.o print_msg.o
	gcc -o trabalho main.o funcoesFornecidas.o command1.o command2.o command3.o open_close.o print_msg.o

run:
	./trabalho

main.o: main.c
	gcc -o main.o -c main.c

funcoesFornecidas.o: funcoesFornecidas.c
	gcc -o funcoesFornecidas.o -c funcoesFornecidas.c

command1.o: command1.c
	gcc -o command1.o -c command1.c

command2.o: command2.c
	gcc -o command2.o -c command2.c

command3.o: command3.c
	gcc -o command3.o -c command3.c

open_close.o: open_close.c
	gcc -o open_close.o -c open_close.c

print_msg.o: print_msg.c
	gcc -o print_msg.o -c print_msg.c

clear:
	rm *.o
	rm trabalho
	rm *.zip