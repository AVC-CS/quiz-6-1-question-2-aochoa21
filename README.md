[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16797904&assignment_repo_type=AssignmentRepo)

## Quiz 5: Question 4

<!-----

You have some errors, warnings, or alerts. If you are using reckless mode, turn it off to see inline alerts.
* ERRORs: 0
* WARNINGs: 1
* ALERTS: 1

Conversion time: 0.433 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β33
* Wed Oct 12 2022 23:20:57 GMT-0700 (PDT)
* Source doc: Quiz 5
* This is a partial selection. Check to make sure intra-doc links work.

WARNING:
Inline drawings not supported: look for ">>>>>  gd2md-html alert:  inline drawings..." in output.

----->


# [Question 4] File I/O operation

Question 4 requires
** two programs** 
>to write to and <br>
> read from a file “employee.txt”.

[1] The Writing Program

We will make the “Employee Record” information and want to store it in a file “employee.txt”. In this record, the following fields are used with the given data types.



* Employee ID: Integer
* Employee Name: String
* Department Name: String
* Salary: double




In this program, First, we will ask for the number of Employees and then ask for all values of fields, respectively. After getting user input, we will write it down into the file “employee.txt” including the number of employees.

Here is the example file content:


        3


        10981011  John Computer 100000 


        10981012  Johny Network 110000 


        10981013  Johnn HR 90000 

Create the program to writes the “Employee” information to a file “employee.txt”.

[2] The Reading Program

In this program, we need to read all lines for the employee information. 

After reading each line from the “employee.txt” file, print out all information that read it. After the last line, show the total amount and average of the salaries for all employees.

Here is the example of program output:


        ID 		Name 		Department	 Salary


        10981011  	John 		Computer 	100000 


        10981012  	Johny		 Network 	110000 


        10981013  	Johnn 		HR 		90000 


        					Total : 300000 Average: 100000


<!--
![A57](https://awesomescreenshot.s3.amazonaws.com/image/1352303/33343850-69d4f4e3d1af43e13b579c3df3ffbf48.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAJSCJQ2NM3XLFPVKA%2F20221012%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221012T184816Z&X-Amz-Expires=28800&X-Amz-SignedHeaders=host&X-Amz-Signature=2432826b999540a0d58803cda36050d703992349f51494e389b8f64b789f299d)
-->

