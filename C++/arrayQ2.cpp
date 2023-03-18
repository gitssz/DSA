#include <bits/stdc++.h>
using namespace std;
template <typename S>
ostream &operator<<(ostream &os, const vector<S> &vector)
{
    for (auto element : vector)
    {
        os << element << " ";
    }
    return os;
}

vector<int> sort10(vector<int> &arr)
{
    // sort(arr.begin(),arr.end());  o(nlogn)
    int i = 0; // O(n)
    vector<int> zero;
    vector<int> temp(arr);
    int count0 = 0;
    int count1 = 0;
    while (i < arr.size())
    {
        if (temp[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
        i++;
    }
    for (int i = 0; i < count0; i++)
    {
        zero.push_back(0);
    }
    for (int i = 0; i < count1; i++)
    {
        zero.push_back(1);
    }
    arr.empty();
    arr = zero;
    return arr;
}

vector<int> sort1_0(vector<int> &arr, int n) // 2 pointer approach
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}

// vector <int> sort2_1_0( vector<int> &arr)     //2 pointer approach
// {
//     int i=0;
//     int j= arr.size();

// return ;

// }

void findtriplets(vector<int> &arr, int s)        //O(n^3)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << arr[j] << arr[k] << endl;
                }
            }
        }
    }
}

vector<vector<int>> findTriplets2(vector<int> nums, int n, int sum)
{ // tle O(n^2) ,duplicate triplet
    vector<int> ans;
    unordered_set<int> ans1;
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int x;
    int i;
    int j;
    for (int k = 0; k < n - 2; k++)
    {
        x = nums[k];
        i = k + 1;
        j = n - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] + x == sum)
            {

                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                ans.push_back(x);
                i++;
                j--;
            }
            else if (nums[i] + nums[j] + x < sum)
            {
                i++;
            }
            else
            { // if (nums[i] + nums[j] +x< sum ) {
                j--;
            }
        }
    }
    result.push_back(ans);

    return result;
}

vector<vector<int>> findTriplets3(vector<int> nums, int n, int K)
{
vector<vector<int>> ans;
vector<int> res;
for(int i=0;i<n;i++){

int l=i+1;
int r=n-1;
while(l<r){

    if(nums[i]+nums[l]+nums[r]==K){
    res.push_back(nums[i]);
    res.push_back(nums[l]);
    res.push_back(nums[r]);
    l++;
    r--;
    }
else if(nums[i]+nums[l]+nums[r]<K) l++;
else r--;
}
}

ans.push_back(res);

return ans;
}

vector<vector<int>> findTriplets4(vector<int> nums, int n, int K)
{
vector<vector<int>> ans;
sort(nums.begin(),nums.end());

for(int i=0;i<nums.size();i++){
    int left=i+1;
    int right=nums.size()-1;
    int sum=nums[i]+nums[left]+nums[right];
    while(left<right){
        if(sum==K){
            vector<int> temp={nums[i],nums[left],nums[right]};
            ans.push_back(temp);

        while(left<right && nums[left]==nums[left+1]){left++;}
        while(left<right && nums[right]==nums[right-1]){right--;}
    }
    else if(sum<K) left++;
    else if(sum>K) right--;
    }
    while(nums[i+1]==nums[i]) i++;
}

    return ans;
}



int main(){
    vector<int> ar = {0, 2, 1, 1, 0, 1, 2};
    vector<int> arr={10 ,5 ,7,9,1,3 ,2};
    // sort10(arr);
    // sort1_0(arr,11);
    // sort2_1_0(ar);
    // for(auto i:ar){
    //     cout<<i<<" ";
    // }

       vector<vector<int>>result=  findTriplets3(arr,7 ,18);
    cout<<"vector result "<<endl;
    for(auto it:result){
        cout<<it<<endl;
    }


    return 0;
}