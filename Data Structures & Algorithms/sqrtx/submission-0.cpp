class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int low=1;
        int high=x/2;
        int result=0;
        while(low<=high){
            int mid=low + (high-low)/2;
            if((long long)mid*mid == x){
                return mid;
            }
            else if((long long) mid*mid <x){
                result= mid;
                low = mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return result;
    }
};