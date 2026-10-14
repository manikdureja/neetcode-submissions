class Solution {
public:
    bool isPalindrome(string s) {
        // string result = "";
        // for(int i=0;i<s.size();i++){
        //     if(isalnum(s[i])){
        //         result += tolower(s[i]);
        //     }
        // }
        // int left = 0;
        // int right = result.size() -1;
        // while(left < right){
        //     if(result[left] != result[right]){
        //         return false;
        //     }
        //     left++;
        //     right--;
        // }
        // return true;

        // method-2 using the two pointers approach :
        int left = 0;
        int right = s.size() -1 ;
        while(left < right){
            while(left < right && !isalnum(s[left])){
                left++;
            }
            while(left < right && !isalnum(s[right])){
                right--;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};