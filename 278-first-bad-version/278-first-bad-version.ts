/**
 * The knows API is defined in the parent class Relation.
 * isBadVersion(version: number): boolean {
 *     ...
 * };
 */

var solution = function(isBadVersion: any) {

    return function(n: number): number {
        let low: number = 1;
        let high: number = n;
        let bad: number = 1;
        
        while(low <= high) {
            let mid: number = low + ((high - low) >> 1);
            
            if(isBadVersion(mid)) {
                bad = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        
        return bad;
    };
};