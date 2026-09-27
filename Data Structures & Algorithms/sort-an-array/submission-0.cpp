class Solution {
public:
    vector<int> input;
    void merge_sort(int low, int high){
        if(low >= high) return;
        int mid = (low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1, high);
        merge(low, mid, high);
    }
    void merge(int low, int mid, int high){
        vector<int> temp;
        int left = low, right = mid+1;
        while(left <= mid && right <= high){
            if(input[left] <= input[right]){
                temp.push_back(input[left++]);
            }
            else{
                temp.push_back(input[right++]);
            }
        }
        while(left<=mid) temp.push_back(input[left++]);
        while(right<=high) temp.push_back(input[right++]);

        for(int i=0;i<temp.size();i++){
            input[i+low] = temp[i];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        // merge sort is the fastest way to solve this questions:
        input = nums;
        merge_sort(0, input.size()-1);
        return input;
    }
};