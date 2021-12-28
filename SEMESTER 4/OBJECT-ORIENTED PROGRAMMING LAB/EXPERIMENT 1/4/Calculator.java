import java.util.Scanner;

public class Calculator {

    public static void main(String[] args) {

        float a, b, res;
        char choice, ch;
        Scanner S = new Scanner(System.in);

        do {
            // prepare menu for the user to see multiple operations.
            System.out.println("Main Menu: ");
            System.out.println(" 1 Addition");
            System.out.println(" 2 Subtraction");
            System.out.println(" 3 Division");
            System.out.println(" 4 Multiplication");
            System.out.println(" 5 Exit");

            // enter the choice
            System.out.print("Enter your choice: ");

            choice = S.next().charAt(0);

            switch (choice) {
                case '1':
                    System.out.print("Enter two numbers: ");
                    a = S.nextFloat();
                    b = S.nextFloat();
                    res = a + b;
                    System.out.println("Result: " + res);
                    break;

                case '2':
                    System.out.print("Enter two numbers: ");
                    a = S.nextFloat();
                    b = S.nextFloat();
                    res = a - b;
                    System.out.println("Result: " + res);
                    break;

                case '3':
                    System.out.println("Enter two numbers: ");
                    a = S.nextFloat();
                    b = S.nextFloat();
                    res = a / b;
                    System.out.println("Result: " + res);
                    break;

                case '4':
                    System.out.print("Enter two numbers: ");
                    a = S.nextFloat();
                    b = S.nextFloat();
                    res = a * b;
                    System.out.println("Result : " + res);
                    break;

                case '5':
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid Choice");
                    break;
            }
        } while (choice != 5);

    }
}
