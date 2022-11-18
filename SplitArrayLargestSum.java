package practice;

public class SplitArrayLargestSum {
    public static void main(String[] args) {

        // [7,2,5,10,8]
int [] a={7,2,5,10,8};
        System.out.println("split array largest sum " + LargestSum(a,2) );

    }
    public static int LargestSum(int[] arr,int m){
     int start=0;
     int end=0;
     for(int i=0;i<arr.length-1;i++) {
         start = Math.max(start, arr[i]);
         end+=arr[i];
     }

     while(start<end){
         int mid=start+(end-start)/2;
         int ans=0;
         int pieces=1;
         for(int i=0;i<arr.length-1;i++){
             if(ans + arr[i]>mid) //[7,2,5,10,8]
             {
                 ans=arr[i];
                 pieces++;
             }
             else{
                start+=arr[i];
             }
         }

         if(pieces<m){
             end=mid;
         }
         else//pieces>m
         {
             start=mid+1;
         }

     }
return start;

    }
}
