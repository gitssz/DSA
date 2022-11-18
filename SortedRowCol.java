package practice;

import java.util.Arrays;

public class SortedRowCol {
    public static void main(String[] args) {

int arr[][]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
};
        System.out.println("is present at " + Arrays.toString(Search(arr,7)));
    }

    public static int[] Search(int arr[][], int target) {
        int row = 0;
        int col = arr.length - 1;
        while (row < arr.length && col >= 0){  //note
            if (arr[row][col] == target) {
                return new int[]{row, col};
            }
            if (arr[row][col] > target) {
                col--;
            }
            else { //arr[row][col]<target
                row++;
            }
    }
        return new int[]{-1,-1};
}
    }

