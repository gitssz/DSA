package com.gitanjali;

public class EvenDigits {
    public static void main(String[] args) {
        int[] arr1={11,222,34,5,6,939,3384};
        System.out.println(evenDigits(arr1));

    }
    static int evenDigits(int[] arr)
    {int count=0;
        for(int i=0;i<arr.length;i++)
        {
            if(isEven(arr[i]))
            {
                count++;
            }
        }
        return count;
    }

   static boolean isEven(int n)
   {
       int noCount=0;
       while(n>0)
       {
           noCount++;
           n/=10;
       }
       if(noCount%2==0)
       {
           return  true;
       }
       return  false;
   }

}
