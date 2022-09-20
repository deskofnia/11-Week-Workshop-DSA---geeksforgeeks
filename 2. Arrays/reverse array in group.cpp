#include<bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<long long>&arr, int n, int k)       // n - size,    k - window size
{
    for(long long i=0; i<n; i+=k)
    {
        if(i+k < n)
        {
            reverse(arr.begin()+i, arr.begin()+(i+k));
        }
        else
        {
            reverse(arr.begin()+i, arr.end());
        }
    }
}

int main()
{
    vector<long long> v = { 1,2,3,4,5 };

    reverseInGroups(v, 5, 3);

    for(auto i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}