class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // This question is actually for the linkedlist so we will end up by doing this problem using the floyds algorithm:
        int slow=nums[0], fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
