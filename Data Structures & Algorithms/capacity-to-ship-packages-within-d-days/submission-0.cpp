class Solution {
public:
    bool canShip(vector<int>& weights, int days, int cap) {
        int need = 1, cur = 0;
        for (int w : weights) {
            if (cur + w > cap) {
                need++;
                cur = 0;
            }
            cur += w;
        }
        return need <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(),weights.end());
        int hi = accumulate(weights.begin(),weights.end(), 0);
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (canShip(weights, days, mid)) hi = mid;
            else lo = mid + 1;
        }
        return lo;
    }
};