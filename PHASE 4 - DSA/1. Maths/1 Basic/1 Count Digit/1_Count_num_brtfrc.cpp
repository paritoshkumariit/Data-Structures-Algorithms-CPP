//Count digits in a number

// Problem Statement: Given an integer N, return the number of digits in N.

#include <bits/stdc++.h>
using namespace std;

int count_digit(int num){
    int count=0;
    
    while(num!=0){
        count++;
        num/=10;
    }
    
    return count;
}

int main() {
    int num, digit;
    cin>>num;
	digit = count_digit(num);
	cout<<digit<<endl;
	return 0;

}
