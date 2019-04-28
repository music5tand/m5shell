# m5shell
A repository for a midterm project, implementing own shell.

## Prerequisites
Linux/Unix environment.

## Installation
    git clone https://github.com/music5tand/m5shell.git
    make
    ./m5shell
Compile all the source codes using Makefile and execute ./m5shell.

## Function
1. built-in commands

  - <b>cd</b>
    - change a current working directory.
    - usage :
        - cd .. (move to upper direcory)
        - cd /  (move to home)
        
  - <b>ls</b>
    - list all the files in given the directory.
    - usage :
        - ls ( list all the files in the current working directory.)
        - ls <directory name> ( list all the files in the <directory name>. )
    
  - <b>let me out</b>
    - you can exit the shell.
2. programs that can be executed by exec family functions.

## Issues need to be fixed.
- <b> NOTICE </b> : This program has no exception process for "Command Not Found".
                    If you type the command does not exist, it will be ...................... :(

## NOTICE

## License
- MIT
