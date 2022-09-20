#include<bits/stdc++.h>
using namespace std;

vector<int> printNonRep(int arr[], int n)
{
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        if(mp[arr[i]]==1)
        {
            v.push_back(arr[i]);
        }
    }

    return v;
}

int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5, 6, 7 };
    vector<int> v = printNonRep(arr, 10);

    for(auto x : v)
    {
        cout<<x<<" ";
    }
    return 0;
}