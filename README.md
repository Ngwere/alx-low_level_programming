0x09 static and dynamic libaries

steps to create a static library

1. create source file e.g myfile.c

2. Compile the source file to generate an object file
> use the -c flag to get object myfile.0 from source file myfile.c
> command: gcc -c -Wall -Werror -Wextra myfile.c

3. create the static library.
> command: ar -rc libname.a myfile.o

4. Indexing the archived object files in the static library
>command:  ranlib libname.a

Note better: use the command

> nm libmy.a

to check the object file in your archived library
