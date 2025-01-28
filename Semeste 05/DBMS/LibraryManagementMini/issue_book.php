<?php include 'db_config.php'; ?>

<!DOCTYPE html>
<html>
<head>
    <title>Issue Book</title>
</head>
<body>
    <h1>Issue a Book</h1>
    <form method="POST">
        <label>Book ID:</label>
        <input type="number" name="book_id" required><br>
        <label>User Name:</label>
        <input type="text" name="user_name" required><br>
        <button type="submit" name="submit">Issue Book</button>
    </form>

    <?php
    if (isset($_POST['submit'])) {
        $book_id = $_POST['book_id'];
        $user_name = $_POST['user_name'];
        $issue_date = date('Y-m-d');

        $sql = "INSERT INTO Transactions (book_id, user_name, issue_date) VALUES ('$book_id', '$user_name', '$issue_date')";
        $update_status = "UPDATE Books SET status = 'Issued' WHERE book_id = '$book_id'";

        if (mysqli_query($conn, $sql) && mysqli_query($conn, $update_status)) {
            echo "Book issued successfully!";
        } else {
            echo "Error: " . mysqli_error($conn);
        }
    }
    ?>
</body>
</html>
