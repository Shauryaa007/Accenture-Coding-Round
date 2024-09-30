class Solution {
public:
    string largestOddNumber(string num) {
        if(num.back()%2==1)return num;
        int i=num.size()-1;
        while(i>=0)
        {
            int n=num[i];
            if(n%2==1) return num.substr(0,i+1);
            i--;
        }
        return "";
    }
};