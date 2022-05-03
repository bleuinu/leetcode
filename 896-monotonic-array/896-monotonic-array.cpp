class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() == 1) return true;
        
        const int SIZE = nums.size();
        int i = 0;
        
        while(i < SIZE-1 && nums[i] == nums[i+1]) ++i;
        
        if(i == SIZE-1) return true;
        
        bool ans = nums[i] <= nums[i+1];
        for(i=i+1; i<SIZE-1; ++i) {
            if(nums[i] == nums[i+1]) continue;
            if(nums[i] < nums[i+1] != ans) return false;
            ans = nums[i] < nums[i+1];
        }
        
        return true;
    }
};