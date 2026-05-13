#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    int total = 0;
    for(int i = 0; i<10; i++){
        total = total + arr[i];
    }
    return total;
}

int main() {
    int size;
    cin>>size;
	int arr[size];
	
	for(int i = 0; i<10; i++){
	    cin>>arr[i];
	}
	
	int result = sum(arr,size);
	cout<<result;
	return 0;
}
