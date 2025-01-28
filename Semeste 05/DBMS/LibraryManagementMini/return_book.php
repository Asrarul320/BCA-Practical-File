<?php include 'db_config.php'; ?>

<!DOCTYPE html>
<html>
<head>
    <title>Return Book</title>
</head>
<body>
    <h1>Return a Book</h1>
    <form method="POST">
        <label>Book ID:</label>
        <input type="number" name="book_id" required><br>
        <button type="submit" name="submit">Return Book</button>
    </form>

    <?php
    if (isset($_POST['submit'])) {
        $book_id = $_POST['book_id'];
        $return_date = date('Y-m-d');

        $sql = "UPDATE Transactions SET return_date = '$return_date' WHERE book_id = '$book_id' AND return_date IS NULL";
        $update_status = "UPDATE Books SET status = 'Available' WHERE book_id = '$book_id'";

        if (mysqli_query($conn, $sql) && mysqli_query($conn, $update_status)) {
            echo "Book returned successfully!";
        } else {
            echo "Error: " . mysqli_error($conn);
        }
    }
    ?>
</body>
</html>
