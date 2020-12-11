import java.util.Scanner;
public class money {
    
    public static void main (String[] Args){
        int cents, dollars;

    System.out.println("Input the Cents: ");
    Scanner sc = new Scanner (System.in);
    cents = sc.nextInt();
dollars = cents/100;
cents = cents%100;
System.out.println("That is: " + dollars + "  Dollars" + " and " + cents+ " cents" );
    }
    
}
