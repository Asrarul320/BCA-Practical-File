// Program to perform string manipulation
public class StringManipulation04 {
    public static void main(String[] args) {
        String str = "Java Programming";

        // Length of the string
        System.out.println("Length: " + str.length());

        // Convert to uppercase
        System.out.println("Uppercase: " + str.toUpperCase());

        // Replace a character
        System.out.println("Replace 'a' with '@': " + str.replace('a', '@'));

        // Substring
        System.out.println("Substring (5-10): " + str.substring(5, 10));
    }
}
