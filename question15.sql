-- 1. Join Students and Grades to get name and marks
SELECT Students.name, Grades.subject, Grades.marks
FROM Students
JOIN Grades ON Students.student_id = Grades.student_id;

-- 2. Find the average marks per student
SELECT Students.name, AVG(Grades.marks) AS Average_Marks
FROM Students
JOIN Grades ON Students.student_id = Grades.student_id
GROUP BY Students.name;
