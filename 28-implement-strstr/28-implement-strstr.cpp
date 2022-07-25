class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        int gotttcha=haystack.find(needle);
        if(gotttcha!=string::npos)
            return gotttcha;
        return -1;
        
    }
};