
FILE:
	it is used to store the datas and values in the Record.

Declaring,Opening and Closing Files:

	1.put data type as "FILE" and then type the file_name(Suresh)
	2.open the file with key " fopen "
	3.assing the file for read or write or R/W
	4.program statement
	5.close the file with key "fclose"

Variable Declare:
	Declared as a pointer to a file.
	FILE *in_file;
	FILE *price;
	FILE *fp;

High Level I/O function: (Standard File Library Functions)
	Function Name		Operation

	 fopen()		* Open or Create a new file .
			
	fclose()		* Closes a file 
	getc()		* Character input
	getchar()		* Character input from stdin
	fgets()		* String input
	gets()		* String input from stdin
	fscanf()		* Formatted input
	scanf()		* Formatted input from stdin
	putc()		* Char output
	putchar()		* Char output to stdout
	fputs()		* String output
	puts()		* String output to stdout
	fprintf()		* Formatted output
	printf()		* Formatted outpur to stdout
	fseek()		* File positioning
	rewind()		* File positioning
	ftell()		* Position reportining

I.Creating file data type

	FILE *fp_name;
	Example:
		FILE *outfile;

II.Opening a file

	fp_name=fopen("db_name","mode");	/* mode - r,w,a */

     Here mode is reffers to,

	*  r - open the file for reading only.
	*  w - open the file writing only.
	*  a - open the file for appending  (or adding) data to it.
Example:
	outfile=fopen("price.bnd","w");
	outfile=fopen("price.bnd","a");
	infile=fopen("price.bnd","r");

III.Getting and putting the data

	fscanf -(to get the data from the file or database)
	fprintf-( to store the data in file or database)

Reading and Writing Files:

Writing Files:
	fputs(c,filename)		-Write a single char to the file.
	fputs(string,filename)		-Write a string to the file.
	fprintf(filename,"format",args)	-Write the values of the argumants to the file according to the format.

Example:
	fputs('a',outfile);
	fputs("Hello",outfile);
	fprintf(outfile,"%s %d",desc,price);
Reading a Files:
	fgetc(filename)		-Read a char from the file.
	fgets(stringname,n,filename)	-Read n-1 char from the file and store the char in the given string name.
	fscanf(filename,"format",&args)	-Read values for the listed arguments from the file,according to the format.

Example:
	fgetc(infile)			// Read the next char in the file
	fgets(message,10,infiles)	//Read the next 9 char from the file into message
	fscanf(infile,"%f",&price)	//Read a floating point numbers.


IV.Closing a file

	fclose(fp_name);






