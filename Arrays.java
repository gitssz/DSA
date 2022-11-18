package com.gitanjali;

import java.util.ArrayList;
import java.util.Scanner;

public class Arrays {
    public static void main(String[] args)
    {
        /*`
        Scanner input= new Scanner(System.in);
        int[] arr =new int[4];
        for(int i=0;i<arr.length;i++)
        {
           arr[i]= input.nextInt();

        }
        for(int i=0;i<arr.length;i++)
        {
        System.out.print(arr[i]);
    }

    `*/
   /* Scanner input=new Scanner(System.in);
        int[][] arr1 = new int[3][4];
        System.out.println(arr1.length); //no of rows
        for (int i = 0; i < arr1.length; i++) {
            for (int col = 0; col < 4; i++) {
                arr1[i][col] = input.nextInt();
            }
        }
        */
        Scanner input =new Scanner(System.in);
      /*  int[] arr  =new int[3];
        for(int row=0;row<3;row++)
        {
            arr[row]=input.nextInt();
        }
        for(int i=0;i<3;i++)
        {
            System.out.print(arr[i]+ " ");
        }
      */
     /*   int[][] arr1=new int[3][2];
    for(int row=0;row< arr1.length;row++)
    {
        for(int col=0;col<arr1[row].length;col++)
        {
          arr1[row][col]=  input.nextInt();
        }
    }
    //output
        for(int row=0;row< arr1.length;row++)
        {
            System.out.println(Arrays.toString(arr1[row]));
        }
*/
      /*  int arr[][]={
                {1,2,3,4},
                {11,222}
                {1111},
                {3,222,4556556,4444}};
        for(int i=0;i<arr.length;i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j]+ " ");
            w}
            System.out.println();
        }
*/
        /*ArrayList<ArrayList<Integer>> lists = new ArrayList<>();

        for(int i=0;i<3;i++)
        {
            lists.add(new ArrayList<>());

        }
        for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++) {
            lists.get(i).add(input.nextInt());
        }
        }
        System.out.println(lists);*/

        ArrayList<ArrayList<Integer>> list= new ArrayList<>();

        for(int i=0;i<4;i++)
        {
            list.add(new ArrayList<>());
        }
        for (int row=0;row<4;row++)
        {
            for(int col=0;col<4;col++)
            {
                list.get(row).add(input.nextInt());
            }
        }
        System.out.println(list);
    }


//    public static boolean toString(int[] cyclicSort) {
//    }
}
