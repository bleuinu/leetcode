function twoSum(nums: number[], target: number): number[] {
    let mymap: Map<number, number> = new Map();
    
    
    for(let i: number = 0; i<nums.length; ++i) {
        if(mymap.get(target-nums[i]) != undefined) {
            return [i, mymap.get(target-nums[i])];
        }
        mymap.set(nums[i], i);
    }
};
