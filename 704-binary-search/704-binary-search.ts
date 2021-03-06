function search(nums: number[], target: number): number {
	let low: number = 0;
	let high: number = nums.length-1;
	
	while(low <= high) {
		let mid: number = low + ((high - low) >> 1);
		if(nums[mid] == target) return mid;
		else if(nums[mid] >= target) high = mid - 1;
		else low = mid + 1;
	}

	return -1;
};