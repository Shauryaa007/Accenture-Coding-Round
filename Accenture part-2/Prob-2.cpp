// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int maxi=0;

void solve(int idx, vector<int>&arr, 
vector<int>aux)
{
    if(idx==arr.size()) // adge case
    {
        if(maxi<aux.size())maxi=aux.size();
        return;
    }
    
    if(aux.size()==0 || aux[aux.size()-1]*3==arr[idx])  // pick
    {
        aux.push_back(arr[idx]);
        solve(idx+1,arr,aux);
        aux.pop_back();
    }
    
    solve(idx+1,arr,aux); // not pick
    
}

int main() {
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int>aux;
    int idx=0;
    
    solve(idx,arr,aux);
    
    cout<<maxi;
    

    return 0;
}