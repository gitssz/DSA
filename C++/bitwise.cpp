#include<iostream>
using namespace std;
int main(){

int a=2,b=3;
cout<<"AND"<<(a&b)<<endl;      //10 and 11
cout<<"OR"<<(a|b)<<endl;       
cout<<"not"<<(~a)<<endl;
cout<<"xor"<<(a^b)<<endl;

//leff shift right shift
cout<<(5<<1)<<endl;
cout<<(13<<1)<<endl;
cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl;
cout<<(19<<1)<<endl;
cout<<(19<<2)<<endl;

// pre and post increment/decrement 

int i=7;
cout<<i++<<endl;  //i=7 use->8
cout<<++i <<endl;   //8->i=9, use
cout<<i--<<endl;    //9,i=8
cout<<--i<<endl;    //i=7, use

    return 0;
}