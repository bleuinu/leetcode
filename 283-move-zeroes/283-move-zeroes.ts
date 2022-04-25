/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    let pos: number = 0;
    if(nums.includes(0)) {
        nums.forEach((part, idx, nums) => {
            if(nums[idx] != 0) {
                let t: number = nums[pos];
                nums[pos] = nums[idx];
                nums[idx] = t;
                ++pos;
            }
        });
    }
};