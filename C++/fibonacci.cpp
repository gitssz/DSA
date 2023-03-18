#include<iostream>
using namespace std;

int fib(int j){
    int a=0;
    int b=1;
    int ans;
    for(int i=1;i<=j;i++){
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}

//0,1,1,2,3,5,8,13,21.......

int main(){

//without function
 /*int a=0;
    int b=1;
    int ans;
    cout<<a<<" "<<b;
    for(int i=1;i<=10;i++){
        ans=a+b;
        cout<<ans<<" ";
        a=b;        //b is the next number which is assigned to a
        b=ans;      
    }
*/

int i=3;
cout<<i<<endl;

for(;i<8;i++){
    cout<<"hi "<<i<<endl;
}



// cout<<fib(3);

return 0;
}