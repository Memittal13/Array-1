//Time O(n)
//Space O(n)
//Leetcode : yes
//Issue seen: none
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        vector<int> answer(n, 1);
        
        //one pass left to right
      
        for(int i=1; i < n; i++){
           prod = nums[i-1] * prod;
           answer[i] = prod ;
           
        }
        //right pass
        prod=1;
        for(int i=n-2; i>=0; i--){
          prod = prod * nums[i+1];
          answer[i] = prod * answer[i];
        }
        return answer;
        
    }
};
