Files:
------
	It is nothing but a collection of related information or records.
The scanf(),printf() will always expect keyboard, monitor devices. The are
the console I/O oriented functions.

Reasons for using Files:
------------------------
* It is difficult to give large volume of data as the input at a run time.
* Whenever a program terminates or switched off the systems all input and
output datas are erased.

I/O Functions:
	1) Low level I/O functions - UNIX
	2) High level I/O functions - C Library files.

Basic Operations on files:
---------------------------
1) Naming a file.
2) Opening a file.
3) Closing a file.
4) Reading data from a file.
5) Writing data to a file.
6) Error handling functions.

1) Naming a file:
	It is used to specify the name of the given file.

	Eg: "raj.txt"
   The name should be always enclosed within double quotes.
2) Opening  a file:

General form:
	FILE *fp;
	fp=fopen("filename","mode");

Where FILE is a defined datatype.
*fp is a file pointer.
	It is used to communicate between the system and the program.

fopen is a keyword which is used to opening a new/existing files which is
assigned the file pointer fp.

Mode:- The mode ondicates the file to be opened.

"r"	- Open a file for reading only.
"w"	- Open a file for writing only.
"a"	- To append data to a file.
"r+"	- Both read & write.
"w+"	- Both read & write.

3) Closing a file:
	After completion of all operations on file we must close the file.

	fclose(file pointer);

4) Reading/Writing data to/from a file:

Input statement:- c=getc()
	It is used to read a single character from the user at a time.

Syntax:
var_name=getc();
	or
var_name=getchar();

Output statement:- putc();
	It is used to write a character to a file.
Syntax:
putc(var_name,file pointer);


