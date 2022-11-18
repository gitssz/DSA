package practice;

public class Palindrome {
    public static void main(String[] args) {

int no=1221;

boolean ans=isPalindrome(no);
        System.out.println(ans);
    }

   public static boolean isPalindrome(int x){
       int originalNum=x;
       int remainder , reverseNum=0;
       if(x<=0){
           return false;
       }
       while(x!=0){
           remainder=x%10;
           reverseNum=reverseNum*10 + remainder;
           x/=10;
       }
       if(originalNum==reverseNum){
           return true;
       }
//       else{
       return false;

   }

}
