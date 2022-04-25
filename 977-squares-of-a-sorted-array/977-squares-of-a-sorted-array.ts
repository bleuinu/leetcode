function sortedSquares(nums: number[]): number[] {
    let n: number = nums.length
    let start: number = 0;
    let end: number = n-1;
    
    let res: Array<number> = new Array(n);
    let pos: number = n-1;

    while(start <= end) {
        if(Math.abs(nums[start]) < Math.abs(nums[end])) {
            res[pos--] = nums[end] * nums[end];
            --end;
        } else {
            res[pos--] = nums[start] * nums[start];
            ++start;
        }
    }

    return res;
};