class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int>mp;
        int i=0;
        while(i!=nums.size()){
            if(mp.find(nums[i])!=mp.end()){
                return true;
            }
            else{
               mp[nums[i]]=1;
            }
            i++;
        }
        return false;
    }
};