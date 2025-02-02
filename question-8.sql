FROM Employee
WHERE salary > [specified_salary]
  AND months < [specified_months]
ORDER BY employee_id ASC;
