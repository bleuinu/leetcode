/**
 Do not return anything, modify s in-place instead.
 */
 function reverseString(s: string[]): void {
    const sz: number = s.length;
    const bound: number = sz >> 1;
    for(let i=0; i<bound; ++i) {
        let c: string = s[i];
        s[i] = s[sz-i-1];
        s[sz-i-1] = c;
    }
};