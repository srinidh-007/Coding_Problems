package com.Java;

import java.util.Scanner;

public class Simple_Interest {
    //Write a program to input principle ,time,& rate from user and find Simple Interest.
    public static void main(String[] args) {
         int P,R,T,Si;
         // P = Principle of amount
         // R = Rate per annum
         // T = Time in year
        //Si = Simple Interest

        Scanner input =new Scanner(System.in);
        System.out.print("Enter Principle of amount: ");
        P = input.nextInt();
        System.out.print("Enter Time in year : ");
        R = input.nextInt();
        System.out.print("Enter Rate of annum : ");
        T = input.nextInt();

        Si = (P * R * T )/100;
        System.out.println("Simple Interest is  : " + Si);
    }
}
