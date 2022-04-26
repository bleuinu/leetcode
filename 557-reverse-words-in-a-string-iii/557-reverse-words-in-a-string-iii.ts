function reverseWords(s: string): string {
    let b = 0;
    let e = 0;
    let sa = s.split('');
    while(true) {
        if(sa[e] === undefined || sa[e] === ' ') {
            if(e != b) {
                let i = b;
                let j = e-1;
                while(i<j) {
                    let c = sa[i];
                    sa[i++] = sa[j];
                    sa[j--] = c;
                }
            }
            b = e + 1;
        }
        
        if(sa[e] === undefined) break;
        ++e;
    }
    
    return sa.join('');
};
