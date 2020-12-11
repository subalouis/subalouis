   /*   /** 
*1.	Write a program to read the current (I) in amperes and voltage (V) in volts and to compute the resistance (R) in ohms.
*Note: Resistance is given by	R = V/I Enter V in volts:
*Enter I in amperes:
*Resistance R is: 	ohms
**/
/*
import java.util.Scanner;
import java.text.DecimalFormat;

public class inputactivity {
    public static void main (String Args []){
float amperes, voltage, resistance; //declaration
Scanner scan = new Scanner (System.in); // scanner declaration
System.out.print("Enter I in amperes: ");
amperes = scan.nextInt()();
System.out.print("Enter V in Voltage: ");
voltage = scan.nextInt()();
resistance = voltage/amperes; //formula
DecimalFormat deciform = new DecimalFormat("###,###.##");//deciformat declaration
System.out.print("Resistance is " + deciform.format(resistance) + " ohms");
    }
} 
/*  Louis Andrei Suba
    BSCS 2A
    */
/*2.	Write a program that will calculate the perimeter(P) and area(A) of
 a rectangle using the input length(L) and width(W). Display the result. 
 Hint: P=(2L + 2W) and A=L x W

Enter length:  		 Enter width:  	 Area=
Perimeter=

3.	Write a program that will accept five integer values and calculate their sum and product.

Enter your first number:  	 Enter your second number:  		 Enter your third number:  	 Enter your fourth number:  		 Enter your fifth number:  	

Sum= Product=

*/
import java.util.Scanner;
public class inputactivity{

public static void main (String Args []){
    int a,b,c,d,e, sum, prod;
    Scanner scan = new Scanner(System.in);
    System.out.print("Enter your first number: "); 
    a = scan.nextInt();
    System.out.print("Enter your second number: "); 
    b = scan.nextInt();
    System.out.print("Enter your third number: "); 
    c = scan.nextInt();
    System.out.print("Enter your fourth number: "); 
    d = scan.nextInt();
    System.out.print("Enter your fifth number: "); 
    e = scan.nextInt();

    sum = a+b+c+d+e;
    prod = a*b*c*d*e;
    System.out.println("Sum= " +  sum);  
    System.out.println("Product= " +  prod);  

}
}
