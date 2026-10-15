class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // the generakl approach that comes to the mind of the people is :
        int slow =0, count =1;
        for(int fast=1;fast<nums.size();fast++){
            if(nums[slow] == nums[fast]){
                if(count < 2){
                    count++;
                    slow++;
                    nums[slow] = nums[fast];
                }
            }
            else{
                slow++;
                nums[slow] = nums[fast]; 
                count = 1;
            }
        }
        return slow+1;
    }
};