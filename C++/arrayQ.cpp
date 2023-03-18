// unique, duplicate, 2 arr intersec, pair sum, triplet sum,  sort 0s n 1s
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAdj(int arr[], int len)
{
    // if(len%2==0){
    //     for(int i=0;i<len;i=i+2)
    //     {
    //         swap(arr[i],arr[i+1]);
    //     }
    // }
    // else{
    //      for(int i=0;i<len-1;i=i+2)
    //     {
    //         swap(arr[i],arr[i+1]);
    //     }
    // }
    for (int i = 0; i < len; i = i + 2)
    {
        if (i + 1 < len)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int unique(int arr[], int len)
{
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

bool noOccurrences(vector<int> &arr)
{
    int i = 0;
    vector<int> ans;
    sort(arr.begin(), arr.end());
    while (i < arr.size())
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        ans.push_back(count);
        i = i + count;
    }
    sort(ans.begin(), ans.end());
    for (int j = 0; j < ans.size(); j++)
    {
        if (ans[j] == ans[j + 1])
        {
            return false;
        }
    }
    return true;
}

int duplicate(int arr[], int len)
{
    int i = 0;
    while (i < len)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j + 1])
            {
                return arr[i];
            }
        }
        i++;
    }
    return -1;
}
// wrong
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    int i = 0;
    while (i < nums.size())
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                if (abs(i - j) <= k)
                {
                    return true;
                }
            }
        }
        i++;
    }
    return false;
}

void intersectionArr(int arr[], int l1, int arr2[], int l2)
{
    /*/ for(int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            if(arr[i]==arr2[j]){
                return arr[i];
            }
        }
    }
    return -1;    */
    int i = 0, j = 0; // 2 pointer approach
    vector<int> v;
    while (i < l1 && j < l2)
    {
        if (arr[i] == arr2[j])
        {
            v.push_back(arr[i]);
            i++;
            j++;
        }
        else if (arr[i] > arr2[j])
        {
            j++;
        }
        else // if(arr[i]<arr[j])
        {
            i++;
        }
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first < p2.first)
        return true;
    if (p1.first > p2.first)
        return false;
    // same
    if (p1.second < p2.second)
        return true;
    return false;
}

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}


int main()
{
    int arr[] = {2, 3, 4, 5, 7};
    int brr[] = {1, 4, 8};
    // int arr[] = {1,2,4,5,2,6,7,8};
    // int brr[]={6,7,8,9};
    // swapAdj(arr,5);
    // swapAdj(brr,4);

    // int a[]={2,1,3,3,9,2,1};
    // cout<<"unique: "<<unique(a,7)<<endl;

    int n = sizeof(arr) / sizeof(int);
    vector<int> v1(arr, arr + n);
    // cout << noOccurrences(v1);

    // cout<<duplicate(arr,8)<<endl;
    // cout<<containsNearbyDuplicate(v1,4);

    // intersectionArr(arr, 5, brr, 3);
    // cout<<pairSum();

    // tripletSum(v1,14);
    int c[] = {1, 0, 0, 1, 1, 0, 1, 0, 1};
    sort(c, c + 10);
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}