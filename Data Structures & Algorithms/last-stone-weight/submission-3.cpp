class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      int ans=0;
      sort(stones.begin(),stones.end());
      while(stones.size()>1){
        int val1=stones.back();
        stones.pop_back();
        int val2=stones.back();
        stones.pop_back();
        if(abs(val2-val1)!=0){
          stones.push_back(abs(val2-val1));
          sort(stones.begin(),stones.end());
        }
      }
      if(stones.size()!=0){
        ans=stones[0];
      }
      
      return ans;
    }
};
