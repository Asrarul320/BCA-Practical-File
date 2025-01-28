-- Create the database
CREATE DATABASE library_db;

-- Use the database
USE library_db;

-- Create Books table
CREATE TABLE Books (
    book_id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(100) NOT NULL,
    author VARCHAR(50) NOT NULL,
    status VARCHAR(10) DEFAULT 'Available'
);

-- Create Transactions table
CREATE TABLE Transactions (
    transaction_id INT AUTO_INCREMENT PRIMARY KEY,
    book_id INT NOT NULL,
    user_name VARCHAR(50) NOT NULL,
    issue_date DATE NOT NULL,
    return_date DATE DEFAULT NULL,
    FOREIGN KEY (book_id) REFERENCES Books(book_id)
);

-- Insert sample data into Books table
INSERT INTO Books (title, author) VALUES
('C Programming', 'Dennis Ritchie'),
('Learn Python', 'Mark Lutz'),
('Introduction to Java', 'James Gosling'),
('Database Management Systems', 'Raghu Ramakrishnan');
