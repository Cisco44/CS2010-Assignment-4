Author: Francisco Da Costa
Student ID: 5026516

Assignment 4: Dictionary utilizing a class interface.

To Build:
	$ make

To Run:
	$ ./DicProg << <"textfile.txt">

Purpose:

The main function is designed to create a dictionary by reading a file.
It's mazimum storage capacity is defined by the user during runtime. 
It will store read words into the dictionary, as strings,
and count the number of appearences of stored words. 
When the program encounters a null string it will assume the file has been terminated,
and will write the dictionary to the terminal, along with each words respective count.
