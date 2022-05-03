# @param {Integer[]} nums
# @return {Integer}
def remove_duplicates(nums)
    l = 1
    1.upto(nums.size-1) do |r|
        if nums[r] != nums[r-1]
            nums[l] = nums[r]
            l += 1
        end
    end
    
    return l
end