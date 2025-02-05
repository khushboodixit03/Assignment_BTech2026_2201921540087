-- Step 1: Create the database
CREATE DATABASE CarShowroomDB;
USE CarShowroomDB;

-- Step 2: Create the Cars table
CREATE TABLE Cars (
    CarID INT AUTO_INCREMENT PRIMARY KEY,
    Brand VARCHAR(50) NOT NULL,
    Model VARCHAR(50) NOT NULL,
    Price FLOAT NOT NULL,
    Availability BOOLEAN DEFAULT TRUE
);

-- Step 3: Insert sample records
INSERT INTO Cars (Brand, Model, Price) VALUES
('Toyota', 'Corolla', 25000),
('Honda', 'Civic', 27000),
('Ford', 'Mustang', 55000);

-- Step 4: Retrieve all cars in the showroom
SELECT * FROM Cars;

-- Step 5: Find all cars priced above $30,000
SELECT * FROM Cars WHERE Price > 30000;

-- Step 6: Update the price of a specific car (e.g., update Mustang price to $52,000)
UPDATE Cars SET Price = 52000 WHERE Model = 'Mustang';

-- Step 7: Mark a car as not available (e.g., if Civic is sold)
UPDATE Cars SET Availability = FALSE WHERE Model = 'Civic';

-- Step 8: Delete a car from the database (e.g., remove Toyota Corolla)
DELETE FROM Cars WHERE Model = 'Corolla';
