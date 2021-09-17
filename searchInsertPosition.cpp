#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int low = 0, high = nums.size(), mid;

	while(low < high) {
		mid = (low+high) / 2;
		if(nums[mid] < target) 
			low = mid+1;
		else
			high = mid;
	}
	return low;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0;i<n;i++) {
		cin >> nums[i];
	}
	int target;
	cin >> target;
	
	cout << searchInsert(nums, target);
	return 0;
}