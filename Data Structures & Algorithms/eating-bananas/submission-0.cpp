class Solution {
public:

    bool canfinish(vector<int>& piles, int h, int mid){
        long long hours =0;
        for(auto pile:piles){
            hours += (pile+mid-1)/mid;
        }
        return hours <=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =*max_element(piles.begin(), piles.end());
        int result=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canfinish(piles,h,mid)){
                result = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};
