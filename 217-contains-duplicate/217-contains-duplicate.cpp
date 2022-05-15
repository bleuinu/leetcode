class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> arr;
        for(int x : nums) {
            if(arr.find(x) != arr.end()) return true;
            arr.insert(x);
        }
        
        return false;
    }
};