function searchInsert(nums: number[], target: number): number {
    let low: number = 0;
    let high: number = nums.length - 1;
    let mid: number = 0;
    
    while(low <= high) {
        mid = low + ((high - low) >> 1);

        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return mid + (+!!(target > nums[mid]));
};