# @param {Integer[]} nums
# @return {Boolean}
def is_monotonic(nums)
    store = 0
    ((nums.size)-1).times do |i|
        c = nums[i] - nums[i+1];
        c = (c < 0) ? -1 : (c > 0) ? 1 : 0;
        
        if c != 0
            if c != store and store != 0
                return false
            end
            store = c
        end
    end
    
    return true
end