#include<bits/stdc++.h>
using namespace std;

void stackExplain(){        //lifo
// time complx = O(1)
stack<int> s;
s.push(2);      //2
s.push(1);      //1,2
s.push(7);      //7,1,2
s.pop();        //1,2
s.emplace(9);    //9,1,2

cout<<s.top()<<endl;
cout<<s.size()<<endl;
cout<<s.empty()<<endl;  //false
stack<int> s1,s2;
s1.push(1);
s2.push(2);
s1.swap(s2);
}

void queueExplain(){
//time complx= constant
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
cout<<"back "<<q.back()<<endl;
q.back() +=10;      //3+10
cout<<q.back()<<endl;
cout<<"front"<<q.front()<<endl;
// for(auto it: ){
//     cout<<it<<" ";
// }
q.pop();
cout<<"after pop "<<q.front()<<endl;
cout<<q.back()<<endl;
}

void priorityQueueExp(){       //max heap
//interanl representation=tree
//highest int,float,double, char at top, highest string(lexicographically) at top
//push,pop = log(n), top=O(1)
priority_queue<int> pq;
pq.push(3);
pq.push(10);
pq.push(6);
pq.emplace(80);
cout<<"top: "<<pq.top()<<endl;
pq.pop();
cout<<"top: "<<pq.top()<<endl;

//min element at top
priority_queue<int ,vector<int>, greater<int>>p;
pq.push(3);
pq.push(1);
pq.push(60);
cout<<"top: "<<p.top()<<endl;

}

void setExp(){
// sorted , unique ,log(n)->insert,delete,update
//red black tree->so elements are sorted
    set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(8);
    s.insert(3);
    s.emplace(5);

    auto it=s.find(3);     //find returns an iterator which points to 3
    //if element is not present it will always return set.end(), ie right after last element 
    s.erase(3);     //either del via element or theu iterator or erase(start,end)
    s.erase(5); //delets 5 and maintains the sorted order
    int count=s.count(1) ;   // if 1 is in set it will give 1 else 0 occurrence

    auto itera= s.lower_bound(5);  //lower bound return iterator,if present return 1st occurrence,else points to immediate next no.s position
    auto up=s.upper_bound(7);
    cout<<"value at up "<<*up<<endl;
    cout<<"address of up "<<&up<<endl;
    // cout<<"iterator-a "<<(up-s.begin())<<endl;
    cout<<"set: "<<endl;
    for(auto it:s){
        cout<<it<<endl;
    }
}

void multisetExp(){
//sorted , multiple occurrence of element(not unique)
multiset<int> ms;
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(2);
ms.insert(3);
ms.insert(3);
ms.insert(3);

ms.erase(1);    //erases all 1s
ms.erase(ms.find(2));   //erases 1 occurence of 2
// ms.erase(ms.find(1), ms.find(1)+2);
for(auto it:ms){
    cout<<it<<endl;
}
}

void unorderedSet(){
//unique, doesnt store in sorted order, can have any order
//better complx than set in most cases,except some when collisions occur 
// best case:O(1), worst case: O(n)
//except lower bound and upper bound all other function work(same as set)
unordered_set<int> us;
}

void mapExp(){
// key value pair,key n val can be of any data type ,O(logn)->everrything
// unique keys in sorted order, sorted order of keys
//  If the same key is emplaced more than once, the map stores the first element only as 
//  the map is a container which does not store multiple keys of the same value. 
map<int,int> m;
map<int,pair<int,int>> m1;
map<pair<int,int>,int> m2;

m[1]=2;
m.emplace(3,1);
m.insert({2,4});
m.insert({1,9});
m[5]=10;

for(auto it:m){
    cout<<it.first<<" "<<it.second<<endl;
}
cout<<m[1]<<endl;    //gives value
cout<<m[4]<<endl; //doesnt exist then gives 0

auto i=m.find(3);  //gives iterator to {3,1}
cout<<"map.find(3) "<<(i)->second<<endl;   
auto it=m.find(4);  //points at m.end(), i.e after the map
cout<<"map.find(4) "<<(it)->second<<endl;   
cout<<&(it)<<" "<<(it)->first<<endl;

auto iter= m.lower_bound(3);
cout<<iter->second<<endl;
auto ite = m.upper_bound(7);
cout<<ite->second<<endl;
}

void multisetMap(){
    // same as map except,can store duplicate keys and sorted order   
}

void unorderedMap(){
// stores unique keys and not sorted
//same as set without order
// best case constant time, worst case O(n)
}

int main(){

// stackExplain();
// queueExplain();
// setExp();
// multisetExp();
mapExp();
    return 0;
}