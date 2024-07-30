// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int maxi=0;

void solve(int idx, vector<int>&arr, 
vector<int>aux, int k)
{
    if(idx==arr.size()) //edge case
    {
        if(maxi<aux.size())maxi=aux.size();
        return;
    }
    
    if(aux.size()==0 || (arr[idx]-aux[aux.size()-1])%k==0) // pick
    {
        aux.push_back(arr[idx]);
        solve(idx+1,arr,aux,k);// pick
        aux.pop_back();
    }
    
    solve(idx+1,arr,aux,k); // not pick
}

int main() {
    int n,k;
    cin>>n>>k;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int>aux;
    int idx=0;
    
    solve(idx,arr,aux,k);
    
    cout<<maxi;
    

    return 0;
}