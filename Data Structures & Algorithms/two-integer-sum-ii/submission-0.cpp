class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // The basic brute force initial approach would be by using 2 loops which will give the result
        // By using the hashmap we can also do this problem
        // By using the binary search method also we cxan do it
        // And the last method is by using the two pointers :

        // here we will do by using the binary search method:
        int n = numbers.size();
        for(int i=0;i<numbers.size(); i++){
            int need = target - numbers[i];
            int left=i+1, right= n-1;
            while(left <= right){
                int mid = left + (right - left)/2;
                if(numbers[mid] == need) return {i+1, mid+1};
                else if(numbers[mid] < need) left = mid +1;
                else right = mid -1;

            }
        }
        return {};
    }
};
