//Binary Search Algorithm (O(log n)) base 2
 
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int key) {
	int low = 0, high = n-1, mid;
	while(low < high) {
		mid = (low+high) / 2;

		if(a[mid] < key)
			low = mid+1;

		else
			high = mid;
	}

	if(a[low] == key) return low;
	else if(a[high] == key) return high;
	else return -1;
}

int main(){

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int key;
	cin >> key;
	cout << binarySearch(a,n,key);
}