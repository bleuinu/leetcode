This straightforward method seems faster than a single pass two pointer method..??
```ts
function sortedSquares(nums: number[]): number[] {
    nums.forEach((part, index, nums) => {
        nums[index] *= nums[index]
    });
    
    return nums.sort((a,b) => { return a-b; })
};
```
