## Editor               : MUSIC5TAND
## LATEST MODIFIED DATE : 2019-04-28


CC = gcc
CFLAGS = -Wall

SRC0 = main
SRC1 = display_prompt
SRC2 = get_command
SRC3 = exec_command
SRC4 = quit_exit_shell
SRC5 = my_cd
SRC6 = my_ls

all : m5shell

m5shell : $(SRC0).o $(SRC1).o $(SRC2).o $(SRC3).o $(SRC4).o $(SRC5).o $(SRC6).o
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o m5shell
