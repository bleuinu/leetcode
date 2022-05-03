class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int store = 0;
        for(int i=0; i<nums.size()-1; ++i) {
            int c = nums[i] - nums[i+1];
            c = (c < 0) ? -1 : (c > 0) ? 1 : 0;
            if(c != 0) {
                if(c != store && store != 0) return false;
                store = c;
            }
        }
        
        return true;
    }
};