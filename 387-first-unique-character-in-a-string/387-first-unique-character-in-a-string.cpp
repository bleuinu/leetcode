class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mymap;
        for(int i=0; i<s.size(); ++i) {
            mymap[s[i]] += 1;
        }
        
        for(int i=0; i<s.size(); ++i) {
            if(mymap[s[i]] == 1) return i;
        }
        
        return -1;
    }
};