class Solution {
public:
    unordered_set<int>m;
    bool isHappy(int n) {
        cout<<n<<endl;
        if(n==1)return true;

        if(m.find(n)!=m.end()) return false;
        m.insert(n);
        int newNum=0;

        while(n>0)
        {
            int x=n%10;
            newNum+=(x*x);
            n/=10;
        }

        return isHappy(newNum);

        
    }
};