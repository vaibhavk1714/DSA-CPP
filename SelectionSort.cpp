#include <bits/stdc++.h> 
using namespace std;

void selectionSort(vector<int>& arr, int n) {   
	int i, j, minIdx;

    for(i=0; i<n-1; i++) {
    	minIdx = i;
		for(j=i+1; j<n; j++) {
            if(arr[minIdx] > arr[j])
                minIdx = j;   
		}
        swap(arr[minIdx], arr[i]);
    }
}

