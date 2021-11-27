0x17 C - Simple Shell

In this project we will create our own UNIX command interpreter.

Allowed functions and system calls:

	`access` (man 2 access)
	`chdir` (man 2 chdir)
	`close` (man 2 close)
	`closedir` (man 3 closedir)
	`execve` (man 2 execve)
	`exit` (man 3 exit)
	`_exit` (man 2 _exit)
	`fflush` (man 3 fflush)
	`fork` (man 2 fork)
	`free` (man 3 free)
	`getcwd` (man 3 getcwd)
	`getline` (man 3 getline)
	`getpid` (man 2 getpid)
	`isatty` (man 3 isatty)
	`kill` (man 2 kill)
	`malloc` (man 3 malloc)
	`open` (man 2 open)
	`opendir` (man 3 opendir)
	`perror` (man 3 perror)
	`read` (man 2 read)
	`readdir` (man 3 readdir)
	`signal` (man 2 signal)
	`stat` (__xstat) (man 2 stat)
	`lstat` (__lxstat) (man 2 lstat)
	`fstat` (__fxstat) (man 2 fstat)
	`strtok` (man 3 strtok)
	`wait` (man 2 wait)
	`waitpid` (man 2 waitpid)
	`wait3` (man 2 wait3)
	`wait4` (man 2 wait4)
	`write` (man 2 write)

The Shell will be compiled with the following flags:

	`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`


The Shell must also work in interactive, and non-interactive mode.


Tasks:

0. README, man, and AUTHORS.

	Write a `README`.

	Write a man for your shell.

	You should have an `AUTHORS` file at the root of your repository, 
	listing all individuals having contributed content to the repository.


1. Betty would be proud.

	Write a beautiful code that passes the Betty checks.


2. Simple shell 0.1

	Write a UNIX command line interpreter.
	 - Usage: `simple_shell`

	Your shell should:

	 - Display a prompt and wait for the user to type a command. 
	   A command line always ends with a new line.
	 
	 - The prompt is displayed again each time a command has been executed.
	 
	 - The command lines are simple, no semicolons, no pipes, no redirections
	   or any other advanced features.
	 
	 - The command lines are made only of one word. No arguments will be 
	   passed to programs.
	 
	 - If an executable cannot be found, print an error message and display 
	   the prompt again.
	 
	 - Handle errors.
	 
	 - You have to handle the “end of file” condition `(Ctrl+D)`

	You don't have to:

	 - Use the `PATH`.

	 - Implement built-ins.

	 - Handle special characters: ", ', `, \, *, &, #

	 - Be able to move the cursor.

	 - Handle commands with arguments.


3. Simple shell 0.2

	Simple shell 0.1+:

	 - Handle command lines with arguments.


4. Simple shell 0.3

	Simple shell 0.2+:

	 - Handle the `PATH`.

	 - `fork` must not be called of the command does not exist.


5. Simple shell 0.4

	Simple shell 0.3+:

	 - Implement the `exit` built-in that exits the shell.

	 - Usage: `exit`

	 - You don't have to handle any argument to the built-in exit.


6. Simple shell 1.0

	Simple shell 0.4+:

	 - Implement the `env` built-in that prints the current environment.


7. What happens when you type `ls -l *.c` in the shell

	Write a blog post describing step by step what happens when you type 
	`ls -l *.c` and hit `Enter` in a shell. Try to explain every step you 
	know of, going in as much details as you can, give examples and draw diagrams when 
	needed. You should merge your previous knowledge of the shell with the 
	specifics of how it works under the hoods (including syscalls).

	 - Have at least one picture, at the top of the blog post.

	 - Publish your blog post on Medium or LinkedIn. 
		(Not required for Holberton Tulsa students.)

	 - Share your blog post at least on LinkedIn.
		(Not required for Holberton Tulsa students.)

	 - Only one blog post per team.

	 - The blog post must be done and published before the first deadline.
		(it will be part of the manual review)

	 - Please, remember that these blogs must be written in English to 
	   further your technical ability in a variety of settings

	URL: (URL to be added at a later date)
