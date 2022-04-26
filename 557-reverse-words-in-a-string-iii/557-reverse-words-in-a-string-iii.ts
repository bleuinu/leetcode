function reverse(s: string): string {
    let s2: string[]= s.split('');
    const sz: number = s2.length;
    const bound: number = sz >> 1;
    for(let i=0; i<bound; ++i) {
        let c: string = s2[i];
        s2[i] = s2[sz-i-1];
        s2[sz-i-1] = c;
    }
    
    return s2.join('');
}
function reverseWords(s: string): string {
    let arr: string[] = s.split(' ');
    let ans: string[] = [];
    arr.forEach((word) => {
        ans.push(reverse(word));
    },this)
    
    return ans.join(' ');
};
