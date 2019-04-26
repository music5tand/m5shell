CC = gcc
CFLAGS = -Wall

SRC1 = main
SRC2 = display_prompt

all : m5shell

m5shell : $(SRC1).o $(SRC2).o
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o m5shell
