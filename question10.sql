-- Step 1: Create the database
CREATE DATABASE StudentDB;
USE StudentDB;

-- Step 2: Create the Students table
CREATE TABLE Students (
    StudentID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Age INT,
    Department VARCHAR(50),
    Marks FLOAT
);

-- Step 3: Insert sample records
INSERT INTO Students (Name, Age, Department, Marks) VALUES
('Alice Johnson', 20, 'Computer Science', 85.5),
('Bob Smith', 22, 'Mathematics', 78.0),
('Charlie Brown', 21, 'Physics', 90.0);

-- Step 4: Retrieve all student records
SELECT * FROM Students;

-- Step 5: Find students who scored more than 80 marks
SELECT * FROM Students WHERE Marks > 80;

-- Step 6: Update marks of a specific student (e.g., change Bob's marks to 82)
UPDATE Students SET Marks = 82 WHERE Name = 'Bob Smith';

-- Step 7: Delete a student record (e.g., remove Charlie)
DELETE FROM Students WHERE Name = 'Charlie Brown';
