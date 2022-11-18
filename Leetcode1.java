package com.gitanjali;
import java.util.ArrayList;
import java.util.Scanner;

public class Leetcode1 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int o=input.nextInt();
     //   System.out.println(factorial(o));
//isPrime(o);
        //System.out.println(isPrime(o));
    }
static  void palindrome(int n)
{;
    /*ArrayList<Integer> array= new ArrayList<>();
    while(temp>0)
    {
        int rem=temp%10;
        temp/=10;
        array.add(rem);
    }
    //arraylist numbers->combine somehow  and checl with original number*/


}
    static void isPrime(int n)
    {
        for(int i=2;i*i<n;i++)
        {
            if(n%i==0)
            {
                System.out.println("not prime");
               // return false;
            }
            else{
                System.out.println("prime");
            }
        }

    }

static int factorial(int n)
{int fact;
    if(n==1)
    {
      return 1;
    }
     fact=n*factorial(n-1);
return fact;
}


}