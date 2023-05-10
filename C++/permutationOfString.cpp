#include <bits/stdc++.h>
using namespace std;
//checking permuatation using sliding window
bool checkCount(vector<int> a,vector<int> b){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {  
vector<int> count(26,0);
if(s1.length()>s2.length()) return false;
    for(char ch:s1){count[ch-'a']++;}
    int windowSize=s1.size();
    int start=0;
    int end=0;
    vector<int> count2(26,0);
    while(end<s2.size()){   
        count2[s2[end]-'a']++;
        if(end-start+1 == windowSize){
            if(checkCount(count,count2)) return true;
            }     
        if(end-start+1 < windowSize){
            end++;
        }
        else{
            count2[s2[start]-'a']--;
            start++;
            end++;
        }
}
return false;
}
 bool checkInclusion2(string s1, string s2) {
        int sizeofs1=s1.size();
        int sizeofs2=s2.size();
        
        if(sizeofs1>sizeofs2)  return false;
        
        vector<int>check1(26,0);   //Creating vector for store the  frequency of s1
        vector<int>check2(26,0);     //Creating vector for store the  frequency of s2
        
        for(int i=0;i<sizeofs1;i++){
            check1[s1[i] - 'a']++;   //Store the frequncy of s1
            check2[s2[i] - 'a']++;  //Store the frequncy of s2
        }
         if(check1==check2){   // If these vectors are equal then we need to return true
            return true;
        }
        
        for(int i=sizeofs1;i<sizeofs2;i++){
            check2[s2[i-sizeofs1] - 'a']--;     //Remove the [i-sizeofs1]th element from check2
            check2[s2[i] - 'a']++;                 //Adding the current element in check2
            if(check1==check2) return true;   //If these vectors are equal then we need to return true
        }
        return false;
    }






int main(){
    string s1="ab";
    string s2="eidbiooo";
    if(checkInclusion2(s1,s2)) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }



    return 0;
}
