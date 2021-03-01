In this assignment you will write a C program which produces auto-complete suggestions, similar to what Bash does when beginning to type a command and pressing .

Your program will read all of the file names in a user-provided directory and store them in a data structure made up of an (at least) 26-element array of linked lists.

You will need to implement a linked list in C. You will have one linked list for each letter of the alphabet, within which you will store the filenames which begin with

that letter in alphabetical order. After reading the filenames into the array of linked lists, the user will be given a “> ” prompt, at which they will enter the beginning

of a filename they are interested in. When the user presses enter, all filenames which match that prefix will be printed (again, alphabetically). The program will continue

to prompt for beginnings of filenames until an empty string is entered.

You may use any built-in C library functions in your program, but you must implement the linked list yourself. You may

not use code found on the internet.
If you are using Windows, be sure your project also works on the CS Linux machines (e.g., pi.cs.oswego.edu). Windows automatically sorts its filenames, but Unix-based

systems do not.