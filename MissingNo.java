package com.gitanjali;

import DSA.BinarySearch;

class MissingNo {

    public static void main(String[] args) {
        int[] arr = {3,2,5,1};
        System.out.println("missing number is " + missingNumber(arr));

    }
    public static int missingNumber(int[] nums) {


        int i = 0;
        int value = nums[i];
        int n = nums.length;
        while (i < n) {
            if (nums[i] < nums.length && nums[i] != nums[value]) {
                int temp = nums[i];
                nums[i] = nums[value];
                nums[value] = temp;
            } else {//if(nums[i]==nums[value]){
                i++;
            }
        }
        for (int j = 0; j <= nums.length; j++) {
            if (nums[j] != j) {
                return j;
            }
    }
        return n;
    }
}