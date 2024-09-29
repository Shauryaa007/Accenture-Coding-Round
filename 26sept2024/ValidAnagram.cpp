class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int>m;

        for(int i=0;i<s.length();i++)
        m[s[i]]++;

        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])==m.end())return false;

            if(m[t[i]]==0)return false;

            m[t[i]]--;
        }

        return true;
    }
};