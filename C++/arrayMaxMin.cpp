#include <iostream>
using namespace std;

// void swap(int &a, int &b){

//     int temp=a;
//     a=b;
//     b=temp;

// }

int max(int arr[],int len){
    int max= -1;
    for(int i=0;i<len;i++){
        if(arr[i]>max){         //maxi =max(maxi,arr[i])
            max=arr[i];
        }
    }
    return max;
}

int min(int arr[],int len){
    int min= 9999;
    for(int i=0;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int linearS(int arr[],int len, int key){
    for(int i=0;i<len;i++){
         if(key==arr[i]){
            return i;
          }
       }
    return -1;
}

void reverseArr(int arr[], int len){
    for(int i=len-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void reverseArray(int arr[], int len){  //using swap

    // for(int i=0;i<len/2;i++){
    //     swap(arr[i],arr[len-i-1]);
    // }
    int s=0,e=len-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<len;i++){
        cout<<arr[i];
    }
    cout<<endl;

}


int main(){

    int a[5]={1,4,2,-6,9};
    cout<<"max: "<<max(a,5)<<endl;
    cout<<"min: "<<min(a,5)<<endl;
    //inbuilt max , min
    cout<<max(a[1],a[3])<<endl;
    cout<<min(a[0],a[4])<<endl;
        
    int arr[4];
    cout<<arr[0]<<endl;
    
    cout<<"at index: "<<linearS(a,5,9)<<endl;
    
    int c=2,b=4;
    cout<<endl<<c<<"before "<<b<<endl;
    swap(c,b) ;
    cout<<c<<" after"<<b<<endl;
    
    reverseArr(a,5);
    cout<<"reverse array"<<endl;
    reverseArray(a,5);

    int brr[]={1,2,3,4};
    cout<<endl<<"reverse array"<<endl;
    reverseArray(brr,4);
    reverseArr(brr,4);





    return 0;

}