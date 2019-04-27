CC = gcc
CFLAGS = -Wall

SRC1 = main
SRC2 = display_prompt
SRC3 = manage_command
SRC4 = my_cd
SRC5 = my_mkdir
SRC6 = my_ls

all : m5shell

m5shell : $(SRC1).o $(SRC2).o $(SRC3).o $(SRC4).o $(SRC5).o $(SRC6).o
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o m5shell
