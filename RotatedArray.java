package practice;

public class RotatedArray {
    public static void main(String[] args) {
int[] nums={3,4,5,6,0,1,2};
int ans=  RotatedArray(nums,4);
        System.out.println(ans + " is ans.");
    }
//    w/o duplicate
    public static int RotatedArray(int[] nums,int target)
    {
        int Pivot=pivot(nums);
                if(Pivot==-1){
                    return binarySearch(nums,target,0,nums.length-1);
                }
                else if(target>nums[0]){
                    binarySearch(nums,target,0,Pivot-1);
                }
        return binarySearch(nums,target,Pivot+1,nums.length-1);
    }

    public static int binarySearch(int[] arr, int target, int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;

    }
    public static int pivot(int[] arr){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
             if(arr[mid]>arr[mid+1]){
                 return mid;
             }
             else if(arr[mid]>arr[mid-1]){
                 return mid-1;
             }
             else if (arr[start]<=arr[mid]){
                 start=mid+1;
                 //                 end=mid-1;
             }
             else {
                 end=mid-1;
             }
        }
        return -1;
    }
//with duplicate
public static int duplicate(int[] arr){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=start+ (end-start)/2;
            if(arr[mid]<arr[mid+1]){
                return mid+1;
            }
            else if(arr[mid]>arr[mid]){
                return mid;
            }
            else if(arr[mid]==arr[start] && arr[end]==arr[mid]){
                if(start >0 && arr[start]>arr[start+1])
                {
                    return start;
                }
                start++;
                if(end<=arr.length-1 &&  arr[end]<arr[end-1])
                {
                    return end-1;
                }
                    end--;
            }
            //lhs is sorted so pivot should be right
           // else if( arr[start])
        }
        return -1;
}


}
