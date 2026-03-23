import java.util.Scanner;

public class RegistrationChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        int units;
        while (true) {
            System.out.print("Enter number of registered units: ");
            if (scanner.hasNextInt()) {
                units = scanner.nextInt();
                break;
            } else {
                System.out.println("Invalid input. Please enter a number.");
                scanner.next(); // clear invalid input
            }
        }

        String status = (units > 7) ? "Overload - Approval Required" : "Registration Accepted";

        System.out.println("\n--- Registration Summary ---");
        System.out.println("Student: " + name);
        System.out.println("Units: " + units);
        System.out.println("Status: " + status);

        scanner.close();
    }
}