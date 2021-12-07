import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the no. of terms: ");

        int n = in.nextInt();
        int prev = 0;
        int i = 1;
        int count = 2;

        System.out.println("Fibonacci series is: ");

        while(count<=n){
            int temp = i;
            i = i+prev;
            prev = temp;
            count++;
        }
        
        System.out.println(i);
    }
}
