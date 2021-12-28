package balance;

import java.io.*;

public class Account {
    long acc, bal;
    String name;

    public void read() throws Exception {
        DataInputStream in = new DataInputStream(System.in);
        System.out.println("Enter the name :");
        name = in.readLine();
        System.out.println("Enter the account number :");
        acc = Long.parseLong(in.readLine());
        System.out.println("Enter the account balance :");
        bal = Long.parseLong(in.readLine());
    }

    public void disp() {
        System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        System.out.println("--- Account Details ---");
        System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        System.out.println("Name :" + name);
        System.out.println("Account number :" + acc);
        System.out.println("Balance :" + bal);
    }
}
