class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int num = x;
        long long rev = 0;
        // rev = num % 10;
        // cout << "num : " << num << endl;
        while(num > 0){
           int rem = num % 10;
           rev = rev *10 + rem; 
        //    cout << "rev : " << rev << endl;
           num /= 10;
        }
        // cout << "rev : " << rev << endl;
        return x == rev;
    }
};
