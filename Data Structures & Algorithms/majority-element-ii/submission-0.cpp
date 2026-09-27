class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = (nums.size())/3;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second > n){
                result.push_back(x.first);
            }
        }

        return result;
    }
};