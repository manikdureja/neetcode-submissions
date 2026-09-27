class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // majority element is when we sort the arrays the majority one will appear at the center of the arrays anyhow;
        // 2nd one is that we can use the hashmap and get the element which has the highest votes;
        // 3rd approach is like we can use the moore voting algorithm;
        int count = 0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                el = nums[i];
                count++;
            }
            else if(el == nums[i]) count++;
            else{
                count--;
            }
        }
        return el;
    }
};