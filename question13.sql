-- 1. Retrieve employees who joined after 2020
SELECT * FROM Employees WHERE joining_date > '2020-12-31';

-- 2. Find the highest salary
SELECT MAX(salary) AS Highest_Salary FROM Employees;

-- 3. Total salary paid in each department
SELECT department, SUM(salary) AS Total_Salary FROM Employees GROUP BY department;
