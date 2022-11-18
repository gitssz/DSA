package com.gitanjali;
import java.lang.*;
import java.util.Arrays;
public class Swap {
    public static void main(String[] args) {
        int[] arr={1,2 ,388,99,200};
       // swap(arr, 1,3);
      //  System.out.println(max(arr));
    //    System.out.println(Arrays.toString(arr));
        //System.out.println(maximumin(arr,1,5));
    reverse(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void reverse(int[] arr)
    {
        int start=0;
        int end=arr.length-1;
        while(start<end)
        {
            swap(arr,start,end);
            start++;
            end--;
        }
    }

    static int maximumin(int[] arr, int index1, int index2)
    {int max=arr[index1];
        for(int i=index1;i<index2;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }

        return max;
    }
    static int max(int[] arr)
    {int maxi=arr[0];
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }

        return maxi;
    }
    static void swap(int[] arr ,int index1, int index2)
    {
        int temp=arr[index1];
        arr[index1]=arr[index2];
        arr[index2]=temp;
    }
}
