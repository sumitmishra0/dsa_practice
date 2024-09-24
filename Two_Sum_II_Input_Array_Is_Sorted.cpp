class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> results = {};
		results.push_back(-1);
		results.push_back(-1);
		int n = numbers.size();

		int i = 0;
		int j = n-1;

		while(i <= j){
			int sum = numbers[i] + numbers[j];
			if(sum == target){
				results[0] = i+1; // 1 based indexing
				results[1] = j+1; // 1 based indexing
				break;
			} else if(sum < target){
				i++;
			} else {
				j--;
			}
		}

		return results;
    }
};
