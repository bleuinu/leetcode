function reverseWords(s: string): string {
    let begin: number = 0;
    let end: number = 0;
    let sa: string[] = s.split('');
    while(true) {
        if(sa[end] === undefined || sa[end] === ' ') {
            if(end != begin) {
                let i:number = begin;
                let j:number = end-1;
                while(i<j) {
                    let c: string = sa[i];
                    sa[i] = sa[j];
                    sa[j] = c;
                    ++i;
                    --j;
                }
            }
            begin = end + 1;
        }
        
        if(sa[end] === undefined) break;
        ++end;
    }
    
    return sa.join('');
};
