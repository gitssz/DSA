#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;                                // brute force
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                ans.push_back(nums[i]);
            }
        }
    }
    return ans;
}

vector<int> findDuplicates2(vector<int> &nums)
{ 
int s;
    vector<int> ans;
   sort(nums.begin(),nums.end());
   for(int i=0;i<nums.size();i++){
    if(nums[i]==nums[i+1]){
        ans.push_back(nums[i]);
    }
   }
    return ans;
}

vector<int> findDuplicates3(vector<int> &nums)         //map
{
    vector<int> ans;
    int count=0;
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++)   freq[nums[i]]++;

    for(auto it:freq) if(it.second==2) ans.push_back(it.first);

return ans;
}

 vector<int> findDuplicates4(vector<int>& nums) {
    vector<int> temp(nums);
    vector<int> ans;
    for(int i=0;i<temp.size();i++)
        {
        // int index=abs(temp[i]-1);        prob-> -2-1=>index = -3
        if (temp[abs(temp[i])-1]<0) ans.push_back(nums[abs(temp[i])-1]);
        else temp[abs(temp[i])-1]= (-temp[abs(temp[i])-1]);
    }
return ans;
    }


int main(){

    vector<int> arr = {10,2,5,10,9,1,1,4,3,7};          //4 doesnt work
    vector<int> ans = findDuplicates4(arr);
    cout << "duplicte result " << endl;
    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}