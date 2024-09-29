class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int no_st=0;
        int one_st=0-prices[0];

        cout<<no_st<<" "<<one_st<<endl;

        for(int i=1;i<prices.size();i++)
        {
            no_st=max(no_st,(one_st+prices[i]));
            one_st=max(one_st,(no_st-prices[i]));
            cout<<no_st<<" "<<one_st<<endl;

        }
        return no_st;
        
    }
};