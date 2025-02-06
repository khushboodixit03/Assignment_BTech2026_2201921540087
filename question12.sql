-- Step 1: Create the database
CREATE DATABASE BankDB;
USE BankDB;

-- Step 2: Create the Accounts table
CREATE TABLE Accounts (
    AccountID INT AUTO_INCREMENT PRIMARY KEY,
    AccountHolder VARCHAR(100) NOT NULL,
    Balance FLOAT NOT NULL,
    AccountType VARCHAR(10) CHECK (AccountType IN ('Savings', 'Current')),
    InterestRate FLOAT DEFAULT 0.0
);

-- Step 3: Insert sample records
INSERT INTO Accounts (AccountHolder, Balance, AccountType, InterestRate) VALUES
('John Doe', 5000, 'Savings', 5.0),
('Jane Smith', 8000, 'Current', 0.0),
('Robert Brown', 12000, 'Savings', 4.5);

-- Step 4: Retrieve all account details
SELECT * FROM Accounts;

-- Step 5: Find all accounts with balance greater than $5000
SELECT * FROM Accounts WHERE Balance > 5000;

-- Step 6: Update balance after a deposit (e.g., deposit $1000 to John's account)
UPDATE Accounts SET Balance = Balance + 1000 WHERE AccountHolder = 'John Doe';

-- Step 7: Apply interest to Savings Accounts
UPDATE Accounts 
SET Balance = Balance + (Balance * (InterestRate / 100))
WHERE AccountType = 'Savings';

-- Step 8: Delete an account from the database (e.g., remove Jane's account)
DELETE FROM Accounts WHERE AccountHolder = 'Jane Smith';
