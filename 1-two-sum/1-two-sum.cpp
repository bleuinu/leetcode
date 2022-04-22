class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> answer;
        for(int i=0; i<nums.size(); ++i) {
            if(m.find(nums[i]) != m.end()) {
                answer.push_back(i);
                answer.push_back(m[nums[i]]);
                return answer;
            }
            m[target-nums[i]] = i;
        }
        
        return answer;
    }
};