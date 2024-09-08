
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);

        reverse(nums.begin()+(k),nums.end());
    }

int main()
{
	int n,k;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    cin>>k;

    rotate(nums,k);
    return 0;
}
