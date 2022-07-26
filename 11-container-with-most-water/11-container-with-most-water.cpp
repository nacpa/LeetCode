class Solution {
public:
    int maxArea(vector<int>& h) {
        int strt=0;
        int end=h.size()-1;
        int maxArea=0;
        int area;
        while(strt<end){
            area=min(h[strt],h[end])*(end-strt);
            if(maxArea<area) maxArea=area;
            if(min(h[strt],h[end])==h[strt]) strt++;
            else end--;
        }
        return maxArea;
    }
};