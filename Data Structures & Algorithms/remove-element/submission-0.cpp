class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Removal of th elements in place:
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};