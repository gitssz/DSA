package com.gitanjali;

public class findPositionInfinite {
    public static  void main(String args[])
    {
int[] arr1={1,2,33,44,55,66,74,84,93,99,100 ,200,300,400,430,490,500};
        System.out.println(findingRange(arr1,74));
    }

    static int findingRange(int[] arr,int target){
        int start=0;
        int end=1;
        while(target>arr[end])
        {
            int newS=end+1;
            end=end + 2*(end-start+1);
            start=newS;
        }
        return binarySearch(arr,target,start,end);



    }
    static int binarySearch(int[] arr, int key,int start, int end)
    {
        while(start<=end)
        {int mid= start+ (end-start)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]<key)
            {
                start=mid+1;
            }
            else {
                end=mid-1;
            }

        }
        return -1;
    }
}
