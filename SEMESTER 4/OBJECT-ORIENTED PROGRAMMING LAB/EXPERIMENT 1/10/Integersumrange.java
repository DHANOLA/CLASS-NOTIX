public class Integersumrange {
    public static void main(String args[]) {
        int sum = 0;
        System.out.println("\nSum of all integers greater than 40 and less than 250 that are divisible by 5 are: ");

        for (int i = 40; i <= 250; i++) {
            if (i % 5 == 0) {
                sum += i;
            }
        }

        System.out.print(sum);
    }
}
