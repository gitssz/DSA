#include <iostream>
#include<math.h>
using namespace std;

int reverseDeci(int n){
    int ans=0;
    while(n){
        int rem;
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    return ans;
}

int deciNormal(int n){      
    int ans=0;
    int i=0;
    while(n){
        int rem=n%10;
        ans=(rem*(pow(10,i)))+ans;      //digit to its normal form(one which is not reverse)
        n=n/10;
        i++;
    }

    return ans;
}


int deciToBin(int n){
//5 ->101
    int ans=0;
    while(n!=0){
        int rem=n&1;
        ans=(ans*10)+rem;               
        n=n>>1;
    }
    return ans;
}

int DeciToBin2(int n){
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;            
        ans=(bit*(pow(10,i)))+ans;
        n=n>>1;
        i++;
    }
    return ans;
}
    
int binToDec(int n){

    int ans=0;
    int i=0;
    while(n!=0){
        int bit;
        bit=n%10;
        if(bit==1){
            ans=(ans+(pow(2,i)));
        }
        n=n/10;
        i++;
    }
    return ans;

}


int main(){

cout<<reverseDeci(12345)<<endl;
cout<<deciNormal(12345)<<endl;

cout<<deciToBin(5)<<endl;
cout<<DeciToBin2(5)<<endl;
    
cout<<binToDec(1000);

    return 0;
}