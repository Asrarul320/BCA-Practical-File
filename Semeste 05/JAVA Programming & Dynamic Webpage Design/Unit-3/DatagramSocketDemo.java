import java.net.*;
import java.io.*;

public class DatagramSocketDemo {
    public static void main(String[] args) {
        try {
            DatagramSocket socket = new DatagramSocket();
            InetAddress serverAddress = InetAddress.getByName("localhost");

            String message = "Hello from client!";
            DatagramPacket packet = new DatagramPacket(message.getBytes(), message.length(), serverAddress, 9876);
            socket.send(packet);
            System.out.println("Message sent to server: " + message);

            // Receiving response from server
            byte[] buffer = new byte[1024];
            DatagramPacket responsePacket = new DatagramPacket(buffer, buffer.length);
            socket.receive(responsePacket);
            String response = new String(responsePacket.getData(), 0, responsePacket.getLength());
            System.out.println("Received response from server: " + response);

            socket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
