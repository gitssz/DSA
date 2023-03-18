#include<bits/stdc++.h>
using namespace std;


void prac(){
    int arr[] ={1,2,3,1,2,1,3,2,1,2};
    map<int,int> m;
    // m.insert({1,2});
    // m.insert({1,4});

    for(int i=0;i<9;i++){
    m[arr[i]]++;        //arr[0]->m[1]++ => {1,1},arr[3]=1,m[1]++ => {1,2}
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

bool uniqueOccurrences(vector<int> &arr){
    int n=arr.size();
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
//{{1,2},{2,1},{3,1}}
  unordered_set<int> s;
    for(auto it: m){
        if(s.count(it.second)){
            return false;
        }
        s.insert(it.second);
    }
        return true;
}



int main(){

vector<int> a;
a = {1,2,2,2,1,1,3};
cout<<uniqueOccurrences(a);


    return 0;
}