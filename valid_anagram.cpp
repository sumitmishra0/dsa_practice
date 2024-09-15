class Solution {
public:
    bool isAnagram(string s, string t) {
		int n = s.size();
		int m = t.size();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
		//// These steps which I have commneted is simply done by == operator but internally it performs this operation.
		 
		// if(n != m) return false;
		// for(int i = 0; i < n; i++){
		// 	if(s[i] != t[i]) return false;
		// }
		// return true;

        return s == t;
    }
};
