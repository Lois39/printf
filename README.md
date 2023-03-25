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
