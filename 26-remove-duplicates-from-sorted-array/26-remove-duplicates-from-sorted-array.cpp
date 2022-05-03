class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        const int SIZE = nums.size();
        
        for(int r=1; r<SIZE; ++r) {
            if(nums[r] != nums[r-1]) {
                nums[l] = nums[r];
                ++l;
            }
        }
        
        return l;
    }
};