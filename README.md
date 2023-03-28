# ALX Group project - writing a printf function

This is a solution repository on writing our own printf(alias: \_printf) from scratch using C language. This is part of the [ALX Software Engineering](https://www.alxafrica.com/software-engineering/) curriculum.

## Table of contents

- [Overview](#overview)
  - [The requirements](#the-requirements)
    - [Authorized functions and macros](#authorized-functions-and-macros)
      - [Functions and descriptions](#functions-and-descriptions)
        - [Compilation](#compilation)
	- [Our process](#our-process)
	  - [Built with](#built-with)
	    - [What we learned](#what-we-learned)
	      - [Continued development](#continued-development)
	        - [Useful resources](#useful-resources)
		- [Authors](#authors)
		- [Acknowledgments](#acknowledgments)

## Overview

### The requirements

The general requirements for the project tasks were:

- All files were compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files ended with a new line
- A `README.md` file, at the root of the folder of the project was created
- Code used the Betty style
- Global variables were not used
- No more than 5 functions per file
- The prototypes of all functions were included in the header file called `main.h`
- All header files were 'include guarded'

### Authorized functions and macros

The authorized functions and macros:

- `write (man 2 write)`
- `malloc (man 3 malloc)`
- `free (man 3 free)`
- `va_start (man 3 va_start)`
- `va_end (man 3 va_end)`
- `va_copy (man 3 va_copy)`
- `va_arg (man 3 va_arg)`

### Functions and descriptions

The several functions used to making the printf(alias: \_printf) function in its entirety and their descriptions are thus:

| Function   | Description                                       |
| ---------- | ------------------------------------------------- |
| get_malloc | Allocates a desired amount of memory              |
| \_printf   | Prints to the stdout a formatted char\*, int, etc |

(we will edit this path also as the tasks continues)

### Compilation

The code(s) was compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Our process

### Built with

The printf(alias: \_printf) function, was built in C language

### What we learned

What we both learned in the course of the tasks goes here, we will keep updating as time goes by ❤

### Continued development

What we hope to do after completing this tasks, eg, writing our own custom malloc function, our own custom for loop, etc...

### Useful resources

[Code Blocks](https://docs.readme.com/rdmd) - The rdmd docs from this site helped us to write a well structured readme for this project, alongside proper formatting of inline codes and code blocks

[Stack Overflow](https://stackoverflow.com/) - This aided us to help find questions and appropraite answers to bugs we faced while doing the task. (we can come add more to this later)

[GitHub Docs](https://docs.github.com/en/get-started/) - GitHub Docs was used to create nicely formatted tables for writing functions and their descriptions.

(we can add more resources we might use to update the readme)

## Authors

This project was done with love by:

- Lois Lois
- Peter Odo

## Acknowledgments

We will put the Acknowledgments here, thank alx for the opportunity and prolly add some one or two persons that helped ease the completion of the task.
Group Project:                                                                      
                                                                                    
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm
 a Spur for life                                                                    
Write a function that produces output according to a format.                        
                                                                                    
                                                                                    
1. Education is when you read the fine print. Experience is what you get if you don'
t                                                                                   
Handle the following conversion specifiers:

2. With a face like mine, I do better in print                                      
Handle the following custom conversion specifiers:                                  
                                                                                    
3. What one has not experienced, one will never understand in print                 
Handle the following conversion specifiers:                                         
                                                                                    
4. Nothing in fine print is ever good news                                          
Use a local buffer of 1024 chars in order to call write as little as possible.      
                                                                                    
5. My weakness is wearing too much leopard print                                    
Handle the following custom conversion specifier:                                   
                                                                                    
6. How is the world ruled and led to war? Diplomats lie to journalists and believe t
hese lies when they see them in print                                               
Handle the following conversion specifier: p.                                       
                                                                                    
7. The big print gives and the small print takes away                               
Handle the following flag characters for non-custom conversion specifiers:          
                                                                                    
8. Sarcasm is lost in print                                                         
Handle the following length modifiers for non-custom conversion specifiers:         
                                                                                    
l                                                                                   
h                                                                                   
Conversion specifiers to handle: d, i, u, o, x, X                                   
                                                                                    
9. Print some money and give it to us for the rain forests                          
Handle the field width for non-custom conversion specifiers.                        
