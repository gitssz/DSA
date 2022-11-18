package practice;
import java.util.*;

public class SelectionSort{

public static void main(String[]args){

int [] array= {5,2,6,3,4,1};
selectionSortMin(array);
System.out.println(Arrays.toString(array));

    System.out.println(maxInt(array));
}
static void swap( int num1, int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}

static int maxInt(int [] arr){
    int  max=arr[0];
    for(int i=0;i<arr.length;i++){
        if(arr[i]>arr[i+1]){
            max= arr[i];
        }
    }
    return max;
}

static int minInt(int[] arr){
    int min=arr[0];
    for(int j=0;j<arr.length;j++)
    {
        if(arr[j]<arr[j-1]){
             min=arr[j];

        }
    }
    return min;
}

    static void selectionSortMax(int[] arr){
//        int maximum;
    int n=arr.length;
    for(int i=0;i<n-1;i++){
        int last = n-i-1;
        int maximum = maxInt(arr);
//        for(int j=i;j<n-1;j++)
//        {
//            if(arr[j]>arr[j+1]){
//                max=arr[j];
                swap(maximum,last);
//            }
        }
    }

    static void selectionSortMin(int[] arr){
    for(int i=0;i<arr.length-1;i++)
    {
//        int firstEle=arr[i]
//        int min=;
        for(int j=i+1;j<arr.length-i-1;j++)
        {
            if(arr[j]<arr[i] )
            {
                int minimum=arr[j];
                swap(minimum,arr[i]);
            }
        }
     }
  }



}