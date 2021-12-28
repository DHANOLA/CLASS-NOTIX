import java.util.Scanner;

public class Squaresum {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = 0, sum = 0;
        System.out.println("\nEnter the 10 digits Respectively: ");
        for (int i = 0; i < 10; i += 1) {
            n = input.nextInt();
            sum += (n * n);
        }
        System.out.println("The total sum of square is: " + sum);
    }
}