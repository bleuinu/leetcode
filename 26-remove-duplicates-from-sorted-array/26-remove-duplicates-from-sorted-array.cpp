class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        const int SIZE = nums.size();
        if(SIZE <= 1) return SIZE;
        
        int pos = 0;
        for(int i=0; i<SIZE-1; ++i) {
            if(nums[i] != nums[i+1]) {
                nums[pos++] = nums[i];
            }
        }
        
        if(pos != SIZE-1) nums[pos] = nums[SIZE-1];
        return pos+1;
    }
};