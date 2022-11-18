package practice;

public class InfiniteArrayKey {
    public static void main(String[] args) {
        int[] arr={1,3,4,6,7,8,9,33,54,92,122,123,1234,1343};
        int a=ans(arr,9);
        System.out.println("ans is " + a);
    }
 static int ans(int[] arr, int target ){
        int start=0;
        int end=1;
        while(target>arr[end]){
            int newStart=end+1;
            end=end+(end-start+1)*2;
            start=newStart;
        }
return  binarySearch(arr,target,start,end);
}
public static int binarySearch(int[] arr, int key,int s, int e){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>key){
                e=mid-1;
            }
            else if(arr[mid]<key){
                s=mid+1;

            }
            else{
                return mid;
            }
        }
        return -1;
}
}
