import java.io.*;
import java.net.*;

public class TCPSocketChat {
    public static void main(String[] args) {
        try {
            // Client
            Socket clientSocket = new Socket("localhost", 1234);
            DataOutputStream out = new DataOutputStream(clientSocket.getOutputStream());
            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));

            // Sending message to server
            out.writeBytes("Hello Server\n");

            // Receiving response from server
            String serverMessage = in.readLine();
            System.out.println("Server says: " + serverMessage);

            clientSocket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
