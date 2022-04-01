import java.util.Scanner;

public class Fruits{
    public static void main(String[]args) {
        Scanner in = new Scanner(System.in);
        String fruit = in.next();

        switch (fruit) {
            case "Mango":
                System.out.println("King of fruits");
                break;
            
            case "Apple":
                System.out.println("Sweet red fruit");
                break;

            case "Orange":
                System.out.println("Round orange fruit");
                break;
            
            default:
                System.out.println("Enter a valid fruit");
        }
    }
}