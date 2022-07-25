class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Find;
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(Find.find(val)!=Find.end()){
                answer.push_back(i);
                answer.push_back(Find[val]);
                break;
            }else{
                Find.insert(make_pair(nums[i],i));
            }
}
        return answer;
        }
        
    };
