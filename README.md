
# <a> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width=3% heigth=3% ></img></a>  Stacks, Queues - LIFO, FIFO

## Monty lenguage
- Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files

- Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```
- Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```



## Learning Objectives
- What do **LIFO** and **FIFO** mean
- What is a **stack**, and when to use it
- What is a **queue**, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use **global variables**
## Requirements
- Allowed editors: `vi, vim, emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- The **prototypes** of all your functions and the prototype of the function _putchar should be included in your header file called `monty.h`



## Compilation
- Your code will be compiled this way:

`$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`
## Files and Functions
### monty.h
- header file
### main.c
- contains de main function
### get_funct.c
- get correct function

### monty_functions.c
- **_push**, pushes an element to the stack
- **_pall**, prints all the values on the stack
- **_pint**, prints the value at the tio of the stack
- **_pop**, removes the top element of the stack
- **_nop**, doesn´t do anything

### monty_functions2.c
- **_swap**, swaps the top two elements of the stack
- **_add**, adds the top two elements of the stack

### aux_functions.c
- **_free**, free stack
- **_isdigit**, checks if string has a letter in it

## test
- contains files to test

# Authors
- Sol Puente [@solp22](https://github.com/solp22/solp22)
- Micaela Picco [@micaelapicco](https://www.github.com/micaelapicco)
