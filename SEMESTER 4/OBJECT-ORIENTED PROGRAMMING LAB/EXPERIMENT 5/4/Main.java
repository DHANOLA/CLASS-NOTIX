import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) {
        String name;
        int age;
        System.out.println("-----ENTER EMPLOYEE DETAILS-----");
        System.out.println("Enter Name and Age:");
        Scanner in = new Scanner(System.in);

        try {
            if (!(in.nextLine().matches("[a-zA-Z]+"))) {
                throw new IOException();
            }

            age = in.nextInt();
            if (age > 50) {
                System.out.println("Age greater than 50 Exception");
                throw new Exception();
            }

            Main x = new Main();
            System.out.println("-----Object Created-----");
        }

        catch (Exception e) {
            System.out.println("Exception");
        }
    }
}
