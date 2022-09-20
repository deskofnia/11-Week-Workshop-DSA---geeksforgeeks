#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n)
{
    unordered_map<int, int> mp;
    int maxiDist = 0;

    for(int i=0; i<n; i++)
    {
        if(mp.find(arr[i]) == mp.end())
            mp[arr[i]] = i;
        else
            maxiDist = max(maxiDist, i-mp[arr[i]]);
    }

    return maxiDist;
}

int main()
{
    int arr[] = {1,1,2,2,2,1};
    cout<<maxDistance(arr, 6);
    return 0;
}