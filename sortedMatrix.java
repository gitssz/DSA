package practice;

public class sortedMatrix {
    public static void main(String[] args) {

    }

    public static int[] binarySearch(int[][] matrix , int row, int cStart, int cEnd, int target){
        while(cStart<cEnd){
            int mid = cStart+(cEnd-cStart)/2;
            if(matrix[row][mid]==target){
                return new int[]{row,mid};
            }
            else if(matrix[row][mid]>target){
                cEnd=mid-1;
            }
            else //matrix[row][col]<target
            {
               cStart=mid+1;
            }
        }
        return new int[] {-1,-1};
    }


    public static int[] sorted(int[][] matrix , int target)
    {
        int row, col;
         row = matrix.length;
        if(matrix.length==0){
           return new int[] {-1,-1};
    }
        else{
            col=matrix[0].length;
        }
        if(row==1){
            binarySearch(matrix,0,0,col,target);
        }
        int rStart=0;
        int rEnd=row-1;
        int cmid= col/2;
        while (rStart<(rEnd-1)){
            int mid=rStart+ (rEnd-rStart)/2;
            if(matrix[mid][cmid]==target){
                return new int[]{cmid,mid};
            }
            else if(matrix[mid][cmid]>target){
                rEnd=mid;
            }
            else{
                rStart=mid;
            }


        }


            return new int[] {-1,-1};
    }


}
