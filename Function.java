package com.gitanjali;

import java.util.Scanner;

public class Function {
    public static void main(String[] args )
    {
        Scanner input=new Scanner(System.in);
        System.out.print("enter 3 numbers ");
        int n1=input.nextInt();
        int n2=input.nextInt();
        int n3=input.nextInt();
int maximum = max(n1,n2,n3);
System.out.println(maximum);
    }
    static int max(int a, int b, int c)
    {
        if(a>b)
        {
            if(a>c)
            {
                return a;
            }
            else //c>a
            {
                return c;
            }
        }
        else //b>a
        {
            if(b>c)
            {
                return b;
            }
            else //c>b
            {
                return c;
            }
        }

    }

}
