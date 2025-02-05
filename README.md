PLATFORM USED --- HACKERANK , LEETCODE

DATED - 26 - JAN - 2025 

QUESTIONS LIST 

QUESTION FOR OOPS - 

Q.1 - Write a c++ program using object oriented programming design a class of teacher where attributes are as follows:
Name
Department
Employee Id
Salary

Now after declaring attributes write a method where the department is changing with the new department. 
Also use these attributes by creating two objects name "Geeta" and "Babita"


QUESTION FOR SQL - 

Question 1: Retrieve All Data from a Table
You are working with a database for a company's employee records. The database has a table named employees with the following structure:

id: An integer representing the unique ID of the employee (primary key).
name: A string representing the name of the employee.
age: An integer representing the age of the employee.
salary: A decimal value representing the salary of the employee.
department: A string representing the department in which the employee works.
Write an SQL query to:

Create the employees table with the structure described above.
Insert the following data into the employees table:
(1, 'Alice', 30, 60000.00, 'HR')
(2, 'Bob', 25, 48000.00, 'Finance')
(3, 'Charlie', 35, 72000.00, 'IT')
(4, 'Diana', 28, 52000.00, 'Marketing')
(5, 'Eve', 40, 47000.00, 'Operations')
Write a query to retrieve all columns and rows from the employees table.




27 - JAN -2025 


QUESTION - 2 -- 

Query all columns for all American cities in the CITY table with populations larger than 100000. The CountryCode for America is USA.

The CITY table is described as follows:

FIELD           TYPE

ID              NUMBER

NAME            TEXT

COUNTRY CODE    TEXT

DISTRICT        TEXT

POPULATION      NUMBER







QUESTION  2 OOPS 


A class defines a blueprint for an object. We use the same syntax to declare objects of a class as we use to declare variables of other basic types. For example:

Box box1;          // Declares variable box1 of type Box
Box box2;          // Declare variable box2 of type Box
Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the  exams given during this semester.

Create a class named  with the following specifications:

An instance variable named  to hold a student's  exam scores.
A void input() function that reads  integers and saves them to .
An int calculateTotalScore() function that returns the sum of the student's scores.
Input Format

Most of the input is handled for you by the locked code in the editor.

In the void Student::input() function, you must read  scores from stdin and save them to your  instance variable.

Constraints


Output Format

In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in ).

The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.





28 - jan - 2025


OOPS QUESTION -- PLATFORM USED -- HACKERANK


Create a base class Employee with:

Private attributes: name (string), id (int).
A constructor to initialize them.
A function display() to print details.
Create a derived class Manager that:

Inherits from Employee.
Adds a new private attribute bonus (double).
Has a constructor to initialize all attributes.
Overrides display() to include bonus details.

SQL QUESTION -- PLATFORM USED -- HACKERANK

Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN.

The CITY table is described as follows;


29 - JAN - 2025 

OOPS QUESTION --- 


You are given a Teacher class that models a teacher with attributes like name, salary, department, and ID. The class currently allows direct access to these attributes.

Task:

Modify the class to follow the principle of encapsulation by making all attributes private.
Implement getter and setter functions to access and modify these attributes safely.
In the main() function, create an object of Teacher, display its details using getter functions, and update the salary using a setter function.
Ensure that the setter function for salary does not allow negative values.


SQL QUESTION ---


Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels. Your result cannot contain duplicates.

Input Format

The STATION table is described as follows:



30 - Jan - 2025 

OOPS PROBLEM -- 


Problem Statement:
Design a class BankAccount with the following attributes and methods:

Attributes: accountNumber, accountHolder, balance
Methods:
deposit(double amount): Adds money to the balance.
withdraw(double amount): Deducts money if sufficient balance is available.
display(): Shows account details.



SQL PROBLEM -- PLATFORM USED -- HACKERANK


Write a query identifying the type of each record in the TRIANGLES table using its three side lengths. Output one of the following statements for each record in the table:

Equilateral: It's a triangle with  sides of equal length.
Isosceles: It's a triangle with  sides of equal length.
Scalene: It's a triangle with  sides of differing lengths.
Not A Triangle: The given values of A, B, and C don't form a triangle.
Input Format

The TRIANGLES table is described as follows:



31 - JAN - 2025 


OOPS PROBLEM -- 

Create a base class Vehicle with attributes brand and model. Create a derived class Car that inherits Vehicle and has an additional attribute seats. Implement a function to display details.



SQL PROBLEM -- PLATFORM USED -- HACKERANK

Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.


01 - feb - 2025

OOPS QUESTIONS -----

Design a simple banking system using OOP principles in C++. The system should have the following features:

Account Class:

Attributes: accountNumber (string) accountHolder (string) balance (double) Methods: deposit(double amount): Adds the specified amount to the balance. withdraw(double amount): Subtracts the specified amount from the balance if sufficient funds are available; otherwise, displays an error message. displayBalance(): Displays the current balance. SavingsAccount Class (inherits from Account):

Additional Attribute: interestRate (double, e.g., 0.05 for 5%) Additional Method: applyInterest(): Applies the interest to the current balance.

SQL QUESTION --

Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.

Input Format

The STATION table is described as follows:

02 - FEB - 2025

OOPS QUESTIONS --

Design a library management system using OOP principles in C++. The system should have the following features:

Book Class:

Attributes: title (string) author (string) isbn (string) isCheckedOut (bool, default is false) Methods: checkOut(): Marks the book as checked out if it's not already checked out. returnBook(): Marks the book as returned if it was checked out. Library Class:

Attribute: books (vector of Book objects) Methods: addBook(const Book& book): Adds a new book to the library. removeBook(const std::string& isbn): Removes a book from the library by its ISBN. findBookByTitle(const std::string& title): Searches for books by title and displays their details.

SQL QUESTION --

Write a query that prints a list of employee names (i.e.: the name attribute) for employees in Employee having a salary greater than per month who have been employees for less than months. Sort your result by ascending employee_id.

Input Format

The Employee table containing employee data for a company is described as follows:


3- feb - 2025 

OOPS QUESTION -- 

Create a C++ program that demonstrates inheritance. Define a base class Vehicle with attributes like brand and year. Then, create a derived class Car that adds an attribute model. Implement a method in both classes to display the details.


SQL QUESTION -- 

Question:
Write an SQL query to retrieve the names of employees and their department names from two tables: Employees and Departments. The Employees table contains id, name, and dept_id, while the Departments table contains dept_id and dept_name.



4 - feb - 2025 

OOPS QUESTION -- 

Define a class named Book with:

Private members: bookID, title, author, and isAvailable.
A constructor to initialize book details.
A function to borrow a book (sets isAvailable = false if available).
A function to return a book (sets isAvailable = true).
A function to display book details.
In main(), create multiple book objects, borrow a book, return it, and display the book details.


SQL QUESTION-- 

Create a table named Students with the following columns:

StudentID (Primary Key, Auto Increment)
Name (VARCHAR, Not Null)
Age (INTEGER)
Department (VARCHAR)
Marks (FLOAT)
Insert at least 3 sample student records into the table.

Write SQL queries to:

Retrieve all student records.
Find students who scored more than 80 marks.
Update the marks of a specific student.
Delete a student record.


5 - feb - 2025 

OOPS QUESTION --- 

Create a C++ program using Object-Oriented Programming (OOP) to model a Car Showroom System.

Requirements:
Define a class named Car with:

Private members: carID, brand, model, price.
A constructor to initialize car details.
A function to display car details.
Define a class named Showroom with:

A private array to store multiple Car objects.
Functions to add a car and display all available cars.
In main(), create multiple cars, add them to the showroom, and display all cars.


SQL QUESTION -- 

Create an SQL database for a Car Showroom Management System.

Requirements:
Create a table named Cars with the following columns:

CarID (Primary Key, Auto Increment)
Brand (VARCHAR, Not Null)
Model (VARCHAR, Not Null)
Price (FLOAT, Not Null)
Availability (BOOLEAN, Default TRUE)
Insert at least 3 sample car records into the table.

Write SQL queries to:

Retrieve all cars in the showroom.
Find all cars priced above $30,000.
Update the price of a specific car.
Mark a car as not available (when it is sold).
Delete a car from the database.
