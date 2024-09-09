#include<bits/stdc++.h>
using namespace std;

string solve(int n, int arr[])
{
    string s="";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)s+="even";
        else s+="odd";
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(n,arr);
    return 0;
}