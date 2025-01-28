import java.sql.*;
import java.util.LinkedList;
import java.util.Queue;

public class JDBCConnectionPooling {
    private static final String URL = "jdbc:mysql://localhost:3306/mydb";
    private static final String USER = "root";
    private static final String PASSWORD = "password";
    private static Queue<Connection> connectionPool = new LinkedList<>();

    public static void main(String[] args) {
        try {
            // Create a connection pool
            initializeConnectionPool(5);

            // Get a connection from the pool
            Connection connection = getConnectionFromPool();

            if (connection != null) {
                // Execute query
                Statement statement = connection.createStatement();
                ResultSet resultSet = statement.executeQuery("SELECT * FROM employees");

                // Print result
                while (resultSet.next()) {
                    System.out.println("ID: " + resultSet.getInt("id") + ", Name: " + resultSet.getString("name"));
                }

                // Return the connection back to the pool
                returnConnectionToPool(connection);
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Initialize connection pool with a given number of connections
    private static void initializeConnectionPool(int poolSize) {
        try {
            for (int i = 0; i < poolSize; i++) {
                Connection connection = DriverManager.getConnection(URL, USER, PASSWORD);
                connectionPool.add(connection);
            }
            System.out.println("Connection pool initialized with " + poolSize + " connections.");
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Get a connection from the pool
    private static Connection getConnectionFromPool() {
        if (connectionPool.isEmpty()) {
            System.out.println("No available connections in the pool.");
            return null;
        }
        return connectionPool.poll();
    }

    // Return the connection back to the pool
    private static void returnConnectionToPool(Connection connection) {
        connectionPool.offer(connection);
        System.out.println("Connection returned to the pool.");
    }
}
