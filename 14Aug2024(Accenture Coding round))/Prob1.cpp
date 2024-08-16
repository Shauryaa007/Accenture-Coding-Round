// MaxFav songs

#include <iostream>

// Driver program
int main() {
    string s;
    cin>>s;
    int k;
    cin>>k;
    
    int n=s.length();
    
    int count=0;
    int maxi=0;
    int i=0,j=-1;
    
    while(j<k-1) // calculating for first window of k size
    {
        if(s[++j]=='a')count++;
    }
    maxi=count;
    
    while(j<n-1) 
    {
        if(s[i++]=='a')count--;
        if(s[++j]=='a')count++;
        maxi=max(maxi,count);
    }
    
    cout<<maxi;
    return 0;
}

