package recursion;

public class BinarySearch {

public static void main(String args[]) {

	int arr[] = {1,4,5,6,8,99,111,211,244,989};
	System.out.println("the ans :"+
	bs(arr,211,0,arr.length-1));
}

public static int bs(int[] arr, int target, int start, int end) {
	
	if(start>end) {
		return -1;
	}
	
	int mid=(end+start)/2;
	
	if(arr[mid]==target) {
		return mid;
	}
	 if(arr[mid]>target) {
		return bs(arr,target,start,mid-1);
	}
		return bs(arr,target,mid+1,end);
	
	
}

}



