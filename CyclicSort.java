package com.gitanjali;
import java.util.*;
import java.util.Arrays;

public class CyclicSort {
    public static void main(String[] args) {
        int[] a= {5,4,3,2,1,6,9,8,7,0};
        cyclicSort(a);
        System.out.println(Arrays.toString(a));
    }

      public static void cyclicSort(int [] arr){
        int i=0;
        while(i<arr.length){
                int value= arr[i];
//            int index = arr[i]-1;
            if(arr[i]==arr[value-1]){
                i++;
            }
            else{
                int temp= arr[i];
                arr[i]=arr[value-1];
                arr[value-1]=temp;
            }
        }

//        return arr;
     }


}
