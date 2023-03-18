// 1009 or 476 leetcode
#include <iostream>
#include <math.h>
#include<bitset>
using namespace std;

// 5->101->010->2
int complement(int n)
{
    int ans = 0;
    int temp = n;
    int mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (n != 0)
    {
        n = n >> 1;
        mask = ((mask << 1) | 1);
    }
    return (~temp) & mask;
}
// method 2
// let x=complement of no. given
// we kn, x+n=111... eg 5+2=7(111,all 1s)
// if we subtract given no from 1111..... we get its complement
// eg 7-5=2, 15-7=8 and so on...
// but how would u get that 7/15 or that mask(containing 1's)
// if u right shift(>>) the given number until it becomes 0 n then 
// to get mask left shift n OR it with 1 (as many times u >>, in above step)

int complement2(int n){
    int ans;
    int temp=n;
    int mask=0;
    while(temp!=0){
        temp=temp>>1;
        mask=mask<<1|1;
    }
return mask-n;
}

//method 3
int complement3(int n){
    int x=1;
    while(n>x){
        x=(x*2)+1;
    }
    // cout<<x;
    return x-n;
}


int main()
    {
    cout <<complement(5)<<endl;
    cout<<complement2(5)<<endl;
    cout<<complement3(5)<<endl;

    // compl->keyword for compliment operator (dont use as a function nam)
    int val=4; //int is signed by default in cpp
    int c= compl val;
    cout<<"val: "<<val<<", c: "<<c<<endl;
    //using bitset
    bitset<4> v(1100);
    bitset<4> com = compl v;
    cout<<"v: "<<v<<", com: "<<com<<endl;

  
return 0;
}
