package practice;

public class RotateCount {
    public static void main(String[] args) {
int [] ar={0,1,2,3};

        System.out.println(RotateCounting(ar) + " times rotated.") ;
//int p= PivotCount(ar)+1;
//        System.out.println("rotate count: " + p);
    }
public static int RotateCounting(int []arr){
        int p=PivotCount(arr);
        return p+1;
}


    public static int PivotCount(int[] arr){
        int start=0;
        int end=arr.length-1;
        while(start<=end) {
            int mid = start + (end - start) / 2;
            if ( mid<end && arr[mid] > arr[mid + 1]) {
                return mid;
            } else if (start<mid && arr[mid] < arr[mid - 1]) {
                return mid - 1;
            } else if (arr[start] <= arr[mid]) {
                start = mid + 1;
            } else if (arr[start] > arr[mid]) {
                end = mid - 1;
            }
        }
            return -1;
    }

    }

