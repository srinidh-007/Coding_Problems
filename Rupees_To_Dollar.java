package com.Java;

import java.util.Scanner;

public class Rupees_To_Dollar {
    //Input currency in rupees & output in dollar
    public static void main(String[] args) {
        float rupees ,dollar;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the currency in rupees  : ");
        rupees = input.nextFloat();

        dollar = rupees/65;
        System.out.println("The Conversion of rupess in dollar is : " + dollar + " $");
    }

}
