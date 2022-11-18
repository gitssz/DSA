package com.gitanjali;

import java.util.Scanner;

public class FirstProgram {
    public static void main(String[] args)
{Scanner input=new Scanner(System.in);
    System.out.println("enter a number");
    int number = input.nextInt();
    int ans=0;
   while(number>0)
   {
       int rem =number%10;
       number/=10;
       ans=(ans*10)+rem;
   }
    System.out.println("reverse of number is " + ans);
}

}