#include<iostream>
using namespace std;

int power(int a , int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}

int powerOf2(int n){
    int count=0;            //time limit exceed
    while(n){
        int bit=n&1;
        if(bit==1){
            count++;
        }
            n=n>>1;
        }
    if(count==1){
        return true;
    }
    return false;
}


bool isEven(int a){
    if(a&1==1){         //odd no & 1= odd, 101 &1=>101=>odd
        return false;  //0
    }
        return true;        //even: 100 & 1=>100 =>even & 1=>even
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int nCr(int n, int r){
//ncr=n!/r!*(n-r)!
//     int n_fact= factorial(n);
//     int r_fact=factorial(r);
//     int n_r_fact= factorial(n-r);
// return n_fact/(r_fact*n_r_fact);
int numerator=factorial(n);
int denominator=factorial(r)*factorial(n-r);
return numerator/denominator;
}

int AP(int n){
    int ans;
    for(int i=1;i<=n;i++){
        ans=3*i+7;
    }
return ans;
}

    int countBits(int a){
        int count=0;
        while(a!=0){
            int bit=a&1;
            if(bit==1){count++;}
                a=a>>1;
        }
        return count;
    }

int noOfSetBits(int a, int b){
// a=2,b=3 setbits=3
return countBits(a)+countBits(b);

}



int main(){
// cout<<power(2,3)<<endl;
// cout<<factorial(8);
// cout<<nCr(8,0)<<endl;
// cout<<nCr(10,2)<<endl;
// cout<<noOfSetBits(7,3);


cout<<powerOf2(8);
    return 0;
}