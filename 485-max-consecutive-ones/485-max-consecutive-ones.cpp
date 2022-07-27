class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int start=0;
        int max=0;
        for(int a :nums){
            if(a==0)
                start=0;
            else{
                start++;
                 if(start>max){
                    max=start;
                    }
            }
         }
        return max;
        
    }
};