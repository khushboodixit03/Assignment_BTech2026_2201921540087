CREATE TABLE employees (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    salary DECIMAL(10, 2),
    department VARCHAR(50)
);

INSERT INTO employees (id, name, age, salary, department)
VALUES 
(1, 'Alice', 30, 60000.00, 'HR'),
(2, 'Bob', 25, 48000.00, 'Finance'),
(3, 'Charlie', 35, 72000.00, 'IT'),
(4, 'Diana', 28, 52000.00, 'Marketing'),
(5, 'Eve', 40, 47000.00, 'Operations');


SELECT * 
FROM employees;

SELECT name 
FROM employees
WHERE salary > 50000;
