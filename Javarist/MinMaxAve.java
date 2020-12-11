package com.company;
import java.io.*;
import java.lang.Math.*;
public class MinMaxAve {
    public static void main(String args[]) throws IOException{

        int a,b,c,x,y;
        double ave;
        InputStreamReader inp = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(inp);

        // Inputs
        System.out.print("Student Grade No. 1: ");
        a = Integer.parseInt(br.readLine());
        System.out.print("Student Grade No. 2: ");
        b = Integer.parseInt(br.readLine());
        System.out.print("Student Grade No. 3: ");
        c = Integer.parseInt(br.readLine());

        // Formula
        x = Math.max(Math.max(a,b), c);
        y = Math.min(Math.min(a,b), c);
        ave = (a + b + c) / 3;

        // Outputs
        System.out.print("The average of " + a + ", "+ b +", " + "and " + c + " is: ");
        System.out.printf("%.2f", ave);
        System.out.println();
        System.out.println("The maximum of " + a + ", "+ b +", " + "and " + c + " is: " + x);
        System.out.println("The minimum of " + a + ", "+ b +", " + "and " + c + " is: " + y);
    }
}
