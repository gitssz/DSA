#include <bits/stdc++.h>
using namespace std;

void pairExp()
{
    pair<int, int> p = {1, 3};
    cout << p.first << p.second << endl;
    // to store 3 elements, nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << p1.second.first << p1.second.second << endl;
    // array of pair
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << endl;
    cout << arr[1].second << endl;
}
//==================================================================================================
void vectorExplain()
{   //interanl representation=singly linked list
    // u can always increase size of vector even its len is defined
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    // vector pair
    vector<pair<int, int>> v2;
    v2.push_back({1, 2});
    v2.emplace_back(3, 4);
    // vector initialization
    vector<int> v4(5);
    vector<int> v3(5, 100); // 100,100,100,100,100
    v4.push_back(1);
    vector<int> v7(v3);
    // int arr[]={1,2,3,4,5,1};
    // vector<int> v1(arr,arr+n); vector with arr , n being len

//----------------------------------TO ACCESS ELEMENTS---------------------------------
//-------iterators(object that points to the memory inside container,(like a pointer))------------
    vector<int>::iterator i = v.begin(); // begin points to the memory location, its not the 1st element
    cout << "value at iterator i " << *(i) << endl;
    i++;
    cout << *(i) << endl;
    cout << v[1] << " " << v.at(1) << endl; // at is never used

// end pints to memory location that is right after the last element(not the last element memory)
    vector<int>::iterator it = v3.end();
    cout<<*(it)<<endl;
    cout<<v3.back()<<endl;  //points to last element

//to access entire vector 
for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*(it)<<endl;
}
//auto -automatically assigns the datatype according to data
for(auto it =v.begin();it!=v.end();it++){
    cout<<*(it)<<endl;
}
//for each, auto - to iterate on datatype(not an iterator) if vecotr is int, iterate on int
for(auto it:v){
    cout<<it<<endl;
}
//--------------------------INSERT-------------------------------
vector<int> v5(2,10);       //{10,10}
v5.insert(v5.begin(),5);  //{5,10,10}
v5.insert(v5.begin()+1,7);  //{5,7,10,10}
v5.insert(v5.begin()+1,3,8); //{5,8,8,8,7,10,10}, to insert 3 occurrences of 8 at begin+1 
vector<int> copyVector(2,50);
v5.insert(v5.begin(),copyVector.begin(),copyVector.end());       //{50,50,5,8,8,8,7,10,10}

//----------------------------deletion in vector--------------
v.erase(v.begin()+1);       //2nd element
v.erase(v.begin(),v.begin()+3);  //{1,2,3,4,5}=> it will del from index 1(2) till index 2 ie one less than the end provided
//u have to give the next address in end => [1,3)
v.clear(); //erases entire vector,empty vector{}

cout<<"how many elements in vector: "<<v5.size();
v5.pop_back();  //pops last element
v5.swap(v);    //swaps the 2 vector
v.empty();   //returns true if no element is present in vector, even if 1 element is present,returns false
}
//===========================================================================================================

void listExplain(){
//same like vector + provides front operations,bidirectional linear list, insertion deletion anywhere
//interanl representation=doubly linked list
list<int> l;
l.push_back(5);
l.push_front(4);        //insert in vector is costly, pushfront is cheap in terms of time complx in list
l.emplace_back(10);
l.emplace_front(70);
for(auto it:l){
    cout<<it<<" ";
}
}

void Deque(){
//double ended queue allows insesrion and deletion at both end, direct access to any element
// operations similar to vector n list 
}

int main()
{
    // pairExp();
    listExplain();

    return 0;
}