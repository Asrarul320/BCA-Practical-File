<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <title>Form Processing with JSP</title>
</head>
<body>
    <h1>Form Submission</h1>
    <form method="post" action="JSPFormProcessing.jsp">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required><br><br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required><br><br>
        <button type="submit">Submit</button>
    </form>

    <%
        // Process form data
        String name = request.getParameter("name");
        String email = request.getParameter("email");

        if (name != null && email != null) {
            out.println("<h2>Form Submitted Successfully!</h2>");
            out.println("<p>Name: " + name + "</p>");
            out.println("<p>Email: " + email + "</p>");
        }
    %>
</body>
</html>
