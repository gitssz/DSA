#include <iostream>
using namespace std;

//supposr arr[10] ={1,2} it has only 2 elements but occupies memory for 10 elements
//so how to get that arr len is 2 n not 10
//this is not possible , there is no inbuilt function
// u can create one function by passing the size to traverse the array
void arrayTraversal(int arr[],int len){
    cout<<"array traversal as follows:"<<endl;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main(){

    int arr[15];    //garbaage value
    cout<<arr[0]<<endl<<arr[14]<<endl;
    cout<<arr[15]<<endl;

    arr[1]={66};
    cout<<arr[1]<<endl;

    int arr2[]={1,2,3,4,5,6};
    cout<<arr2[4]<<endl;

    int arr3[5]={11,111,1111,11111,111114};
    arr[5/2]=77;        //same as arr[2]
    cout<<arr[2]<<" "<<arr3[4]<<endl;        //array indice 0 to n-1
    
    cout<<"size :"<<sizeof(arr)<<endl; //sizeof returns size in bytes
    cout<<"len :"<<sizeof(arr)/sizeof(int)<<endl;

    int a[5]={1,2};
    arrayTraversal(a,2);

    //for each cpp for array traversal
    // ig for each returns 0 if element is not present at that index
    for(int i:a){
        cout<<i<<" ";
    }

    char array[5]={'a','b','c','d','e'};
    cout<<array[1];

    return 0;
}