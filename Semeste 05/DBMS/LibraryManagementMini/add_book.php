<?php include 'db_config.php'; ?>

<!DOCTYPE html>
<html>
<head>
    <title>Add Book</title>
</head>
<body>
    <h1>Add a New Book</h1>
    <form method="POST">
        <label>Book Title:</label>
        <input type="text" name="title" required><br>
        <label>Author:</label>
        <input type="text" name="author" required><br>
        <button type="submit" name="submit">Add Book</button>
    </form>

    <?php
    if (isset($_POST['submit'])) {
        $title = $_POST['title'];
        $author = $_POST['author'];

        $sql = "INSERT INTO Books (title, author) VALUES ('$title', '$author')";
        if (mysqli_query($conn, $sql)) {
            echo "Book added successfully!";
        } else {
            echo "Error: " . mysqli_error($conn);
        }
    }
    ?>
</body>
</html>
