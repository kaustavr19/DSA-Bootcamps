import java.util.Scanner;

public class LargestofThree {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Please enter three numbers to check: ");

        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        int max=0;

        if(a>b){
            max=a;
        }
        else{
            max=b;
        }
        if(c>max){
            max=c;
        }

        System.out.println("The max number is " + max);
    }
}
