import java.util.Scanner;
import java.text.DecimalFormat;
public class resistance {
    
    public static void main (String[] args){
       double volts = 123456789, amperes = 45678, resistance;
       
       
        System.out.println("Enter V in Volts: " + volts);
        System.out.println("Enter I in Amperes: " + amperes);
    
        resistance = volts/amperes;
        System.out.println("--------------------------");  
        DecimalFormat df = new DecimalFormat("000000.00");
        System.out.println("Resistance = " + df.format(resistance));
}
}