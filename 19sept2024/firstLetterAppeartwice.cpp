class Solution {
public:
    char repeatedCharacter(string s) {
        
        vector<int>freq(26,0);

        for(int i=0;i<s.length();i++)
        {
            if(freq[s[i]-97]==1)
            return s[i];

            else{

                freq[s[i]-97]++;
            }
        }

        return s[0];
        
    }
};