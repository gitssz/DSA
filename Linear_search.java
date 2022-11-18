package com.gitanjali;
import java.util.Arrays;
public class Linear_search {
    public static void main(String[] args) {
       // int arr[]={2,4,1,56,8,-1,8,5};
        //System.out.println(linear(arr,-9089));
//String name="git";
  //      System.out.println(search(name,'o'));
int[][] arr= {
        {1,2,3},
        {55,9,8,33},
        {0,5,4} };
      //  System.out.println(Arrays.toString(Search(arr,5)));

        System.out.println(max(arr));
    }
    static int max(int[][] arr)
    {
        int maximum=Integer.MIN_VALUE;
        for(int row=0;row<arr.length;row++)
        {
            for(int col=0;col<arr[row].length;col++)
            {
                if(arr[row][col]>maximum)
                {
                    maximum=arr[row][col];
                }
            }
        }
        return maximum;
    }

    static int[] Search(int[][] arr, int key)
    {
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                if(arr[i][j]==key)
                {
                    return new int[] {i,j};
                }
            }
        }
        return  new int [] {-1,-1};
    }

    static  int linear(int[]arr,int key)
    {
        if(arr.length==0)
    {
        return -1;
    }
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==key)
            {
                return key;
            }
        }
        return Integer.MAX_VALUE;
    }
    static  boolean search(String str,char key)
    {
        if(str.length()==0) {
            return false;
        }
            for(int i=0;i<str.length();i++) {
                if (str.charAt(i) == key)
                {
                    return true;
            }
        }
        return  false;
    }


    }




