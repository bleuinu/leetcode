/**
 Do not return anything, modify nums in-place instead.
 */
function rotate(nums: number[], k: number): void {
    let n: number = nums.length - 1;
    for(let i:number =0; i<k; ++i) {
        nums.unshift(nums.pop());
    }
};