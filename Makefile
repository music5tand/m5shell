CC = gcc
CFLAGS = -Wall

SRC1 = main
SRC2 = display_prompt
SRC3 = get_command
SRC4 = parse_command

all : m5shell

m5shell : $(SRC1).o $(SRC2).o $(SRC3).o $(SRC4).o
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o m5shell
