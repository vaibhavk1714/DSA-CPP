#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& arr, int n, int key) {
	int s = 0, e = n;
	int mid = s + (e-s)/2;

	while (s<=e) {
		if(arr[mid] == key)
			return mid;
		else if(arr[mid] > key)
			e = mid - 1;
		else
			s = mid + 1;
		mid = s + (e-s)/2;
	}
	return -1;
}

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	int key;
	cin >> key;

	cout << BinarySearch(arr, n, key) << endl;
	return 0;
}
