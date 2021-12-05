import java.util.Scanner;

public class Largest {
    public static void name() {
        Scanner in = new Scanner(System.in);
        System.out.println("Please enter three numbers to check: ");

        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        int max = Math.max(c, Math.max(a, b));
        System.out.println("The max number is " + max);
    }
}
