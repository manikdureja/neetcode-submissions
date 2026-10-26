class Solution {
public:
    void reverseString(vector<char>& s) {
        // The basic way to reverse the 
        // reverse(s.begin(),s.end());
        // Using two pointers:
        int left=0;
        int right=s.size()-1;
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }

    }
};