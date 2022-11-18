package com.gitanjali;

public class Binary_search {
    public static void main(String[] args)
    {
int arr1[]={59,20,14,9,8,7,5};
System.out.println(orderAgnostic(arr1,8));
     }
static int  orderAgnostic(int[] arr, int key)
{
    int start=0;
    int end=arr.length-1;
    boolean isAscend= (arr[start]<arr[end]);
    while(start<=end)
    {
        int mid=start + (end-start)/2;
      if(arr[mid]==key)
      {
          return mid;
      }

      if(isAscend)
      {
          if(arr[mid]>key)
          {
              end=mid-1;
          }
          else
          {
              start=mid+1;
          }
      }
      else      //descending
      {
          if(arr[mid]>key)
          {
              start=mid+1;
          }
          else {
              end=mid-1;
          }
      }
    }
return -1;
}
}
