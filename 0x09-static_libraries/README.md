0x09. C - Static Libraries
This repository contains the solutions to the "0x09. C - Static Libraries" project as part of the low-level programming and algorithm track at Holberton School.

Table of Contents
Description
Requirements
Usage
Compilation
Files
Author
Description
In this project, we learn about static libraries in C programming. We create our own static libraries and use them to compile programs. Static libraries are collections of object files that are linked with a program at compile time. This project explores the creation, usage, and compilation of static libraries.

Requirements
Ubuntu 14.04 LTS
GCC (GNU Compiler Collection) 4.8.4
GNU Make 3.81
Holberton's Betty coding style
Usage
Clone the repository to your local machine:

bash
Copy code
git clone https://github.com/yourusername/0x09-static_libraries.git
Navigate to the project directory:

bash
Copy code
cd 0x09-static_libraries
Compile the static library and test programs using the provided Makefile.

Compilation
To compile the static library, run:

bash
Copy code
make all
This will generate the static library file libholberton.a and compile any test programs.

To clean up the generated files, run:

bash
Copy code
make clean
Files
libholberton.a: The static library containing various functions.
holberton.h: The header file with function prototypes.
create_static_lib.sh: A Bash script to create a static library from all .c files in the current directory.
Author
Tony Lewis MANZI
