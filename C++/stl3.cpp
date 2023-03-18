#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){   //try to analysse everything in terms of datatype
//sort according to second element 
//if second element is same , 
// sort accordig to first element in descending order
// { , } { , }
    if(p1.second<p2.second) return true;  //second element are already sorted  
    if(p1.second> p2.second) return false ;  //when u return false, internally they are swapped
//if second is same
    if(p1.first>p2.first) return true;
    return false;   //else (p1.first < p2.first) 
}

bool comp1(pair<int,int> p1, pair<int,int> p2){
//sort acc to first element
//if first elemnet is same,
// sort in ascending order of second
if(p1.first < p2.first) return true;
if(p1.first > p2.first) return false;
//same { , } { , }
if(p1.second<p2.second)return true;
return false;

}


void sortExp(){
int a[]={1,5,2,6,8};
    sort(a,a+4); //a-starting iterator(points to 1),a+n-> last iterator( after 8), [start,end)
    sort(a+2,a+4); //sort sub part 
    sort(a,a+4, greater<int>());    //sort in descending order
//vector = sort(v.begin(),v.end());
// sort can sort only vector and arrays .

//sort your way
pair<int,int> p[]={{30,1},{4,2},{6,91},{6,9}};
sort(p,p+4,comp1);    //comp- self comparator, which boolean function 
for( auto it:p){
    cout<<it.first<<" "<<it.second<<endl;
}
}

void Exp(){

    int num=7;
    int setBit=__builtin_popcount(num) ;       //returns no of set bits 
    cout<<setBit<<endl;
 
    long long n=935834598457;
    int cnt= __builtin_popcountll(n);  //if no is long long->ll
    cout<<cnt<<endl;

    // int s[]={1,2,3};
    string s="213";
    //dictionary permutation eg, 123-> 132->213->231->312->321 
    cout<<"next permutation: "<<endl;
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end())); //returns null/false if next permutation is not present 
    
    // prev_permutation is to find the previous lexicographically smaller value for a given array of values. 
    cout<<"prev permutation: "<<endl;
    do{
        cout<<s<<endl;
    }while(prev_permutation(s.begin(),s.end())); 

// to get max element 
int arr[]={1,6,3,8,199,34};
int maxi=*max_element(arr,arr+5);
cout<<maxi<<endl;
}


int main(){

// sortExp();

Exp();
    return 0;
}