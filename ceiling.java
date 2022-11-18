package com.gitanjali;

public class ceiling {
    public static void main(String[] args)
    {
        int[] arr={1,2,3,5,7,9,11,90};
        System.out.println("ceilling " + ceililngBS(arr,997));
        System.out.println("floor " + floorBS(arr,0));
    }

    static int ceililngBS(int[] num,int key)    //smallest number greatest than key
    {
        if(key>num[num.length-1])
        {
            return -1;
        }
        int start=0;
        int end=num.length-1;
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            if(num[mid]==key){
                return mid;
            }
            else if(key<num[mid]) {
                end=mid-1;
            }
            else if(num[mid]<key)
            {
                start=mid+1;
            }

        }
        return start;
    }
    //greatest no smaller than target;
    static int floorBS(int[] arr,int key)
    {
        int start=0;
        int end=arr.length-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]<key)
            {
                start=mid+1;
            }
            else if(arr[mid]>key)
            {
                end=mid-1;
            }
        }
        return end;
    }

}
