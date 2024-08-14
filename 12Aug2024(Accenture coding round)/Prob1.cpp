// Count Magical numbers

#include <iostream>
#include <string>

using namespace std;

int solve(int n) 
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        int zero=0;
        
        while(num)
        {
            if(num%2==0)zero++;
            num=num/2;
        }
        if(zero%2==1)count++;
    }
    
    return count;
    
}

// Driver program
int main() {
    int n;
    cin>>n;
    cout<<solve(n);
    
    return 0;
}
