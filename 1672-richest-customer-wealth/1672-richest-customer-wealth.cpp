class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = -1;
        for(vector<int> account: accounts) {
            int sum = accumulate(account.begin(), account.end(), 0);
            m = max(sum, m);
        }
        return m;
    }
};