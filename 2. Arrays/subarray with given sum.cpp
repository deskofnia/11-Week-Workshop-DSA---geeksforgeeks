#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
    vector<int> v;
    int start=0, last=0, cs=0;

    while(start<=n && last<=n)
    {
        if(cs == s)
        {
            v.push_back(start+1);
            v.push_back(last);
            return v;
        }
    }
    if(cs > s)
    {
        cs -= arr[start];
        start++;
    }
    if(cs < s)
    {
        cs += arr[last];
        last++;
    }

    v.push_back(-1);
    return v;
}

int main()
{
    int arr[] = { 1,2,3,7,5 };

    vector<int> v = subarraySum(arr, 5, 12);

    for(auto i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}