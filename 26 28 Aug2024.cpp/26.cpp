#include <bits/stdc++.h>
using namespace std;

int max_candies(int N, vector<int>& prices, int M) {
    int free_candies = 0;
    
    // Iterate through the prices
    for (int i = 0; i < N; ++i) {
        if (prices[i] % 5 == 0) {
            // Count candies that are free
            free_candies++;
        } else {
            // Try to buy candies that are not free
            if (prices[i] <= M) {
                M -= prices[i];
                free_candies++;
            }
        }
    }
    
    return free_candies;
}

int main() {
    int N,M;
    cin>>N;
    
    vector<int>arr(N,0);
    for(int i=0;i<N;i++)cin>>arr[i];
    cin>>M;
    
    sort(arr.begin(),arr.end());
    
    cout<<max_candies(N,arr,M);

    return 0;
}
