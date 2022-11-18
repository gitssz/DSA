package practice;
import java.util.*;
import java.lang.String;

public class BubbleSort {
    public static void main(String args[])
    {
        int[] ar={1,2,3,4,5,6,7,8};
//        int[] ar= {4,9,7,8,2,5,3,0,1};
//        System.out.println(( bubbleSort(ar)))
        bubbleSort(ar);
        System.out.println(Arrays.toString(ar));

    }
 static void bubbleSort(int[] arr) {
        boolean swapped=false;
    for (int i = 0; i < arr.length; i++) {
        for (int j = 0; j < arr.length-i-1 ; j++) {
//            int temp = 0;
            if (arr[j] > arr[j+1]) {

               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               swapped=true;
            }

        }
        if(!swapped){
            break;
        }

    }
//    return arr;

}
}
