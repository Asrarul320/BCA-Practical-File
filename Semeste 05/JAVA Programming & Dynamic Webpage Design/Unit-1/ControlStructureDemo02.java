// Program to demonstrate control structures (if-else, switch, loops)
import java.util.Scanner;

public class ControlStructureDemo02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Using if-else
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        if (num > 0) {
            System.out.println("The number is positive.");
        } else if (num < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }

        // Using switch
        System.out.print("\nEnter a choice (1-3): ");
        int choice = sc.nextInt();
        switch (choice) {
            case 1 -> System.out.println("You selected One");
            case 2 -> System.out.println("You selected Two");
            case 3 -> System.out.println("You selected Three");
            default -> System.out.println("Invalid choice");
        }

        sc.close();
    }
}
