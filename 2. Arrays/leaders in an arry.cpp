#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    vector<int> v;
    long long max = a[n-1];

    for(long long i = n-1; i>=0; i--)
    {
        if(a[i]>=max)
        {
            max = a[i];
            v.push_back(max);
        }
    }
    reverse(v.begin(), v.end());

    return v; 
}

int main()
{
    int arr[] = { 16, 17, 4, 3, 5, 2 };
    vector<int> vt = leaders(arr, 6);

    for( auto x : vt)
    {
        cout<<x<<" ";
    }
    return 0;
}