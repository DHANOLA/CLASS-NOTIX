
import java.util.Scanner;

public class Marks {
    public static void main(String args[]) {

        int marks[] = new int[10];
        int i;
        float total = 0, avg;
        Scanner scanner = new Scanner(System.in);

        for (i = 0; i < 10; i++) {
            System.out.print("Enter Marks of Student" + (i + 1) + ":");
            marks[i] = scanner.nextInt();
            total = total + marks[i];
        }
        scanner.close();
        int temp;
        for (int k = 0; k < 10; k++) {

            for (int j = i + 1; j < 10; j++) {
                if (marks[k] > marks[j]) {
                    temp = marks[k];
                    marks[k] = marks[j];
                    marks[j] = temp;
                }
            }
        }

        for (int j = 0; j < 10; j++) {
            if (marks[j] >= 40 && marks[j] <= 50) {
                System.out.print("Student" + (j + 1) + ":\nMarks=" + marks[j] + "\nGrade = PASS\n");
            } else if (marks[j] >= 51 && marks[j] <= 75) {
                System.out.print("Student" + (j + 1) + ":\nMarks=" + marks[j] + "\nGrade = MERIT\n");
            } else {
                System.out.print("Student" + (j + 1) + ":\nMarks=" + marks[j] + "\nGrade = DISTINCTION\n");
            }
        }

    }
}