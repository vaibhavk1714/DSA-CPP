#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int n, int k) {
	for(int i=0;i<n;i++) {
    	if (arr[i] == key) {
      		return i; 
    	}
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

	cout << linearSearch(arr, n, key) << endl;
	return 0;
}
