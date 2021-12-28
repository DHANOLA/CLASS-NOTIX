import java.util.Scanner;

public class Threedigit {
    /**
     *
     */
    private static final int[] INTS = { 1, 4, 3 };

    public static void main(String[] args) {
        int[] input = INTS;
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                for (int z = 0; z < 3; z++) {
                    if (x != y && y != z && z != x) {
                        System.out.println(input[x] + "" + input[y] + "" + input[z]);
                    }
                }
            }
        }
    }
}