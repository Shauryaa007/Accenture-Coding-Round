class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int N = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        unordered_map<int,int>val;
        for (int i: nums) {
            val[i] += i;
        }
        int pick=val[1];
        int notpick=0;
        for (int i = 2; i <= mx; ++i) 
        {
            int newPick= notpick+val[i];
            int newNotpick=max(pick,notpick);
            notpick=newNotpick;
            pick=newPick;    
        }
        return max(pick,notpick);
    }
};