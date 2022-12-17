package recursion;

public class Easy {

	public static void main(String args[]) {
		
		int num=sum(9982);
		
		System.out.println(num);	

	}
	
	public static void printnum(int n) {
		if(n==0) {
			return ;
		}
		printnum(n-1);
		System.out.println(n);	

	}

	static int fact(int n) {
	if(n==0 || n==1) {
		return 1;
	}
	return n*fact(n-1);
}
	//sum of digits
	static int sum(int n) {
		
		if(n/10==0) {
			return n;
		}
		return n%10 + sum(n/10);
		
		
	}
	
	
}
