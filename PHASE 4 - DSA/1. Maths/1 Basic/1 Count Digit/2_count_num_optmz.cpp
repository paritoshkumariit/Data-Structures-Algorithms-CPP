#include <bits/stdc++.h>
using namespace std;

int count_digit(int num){
    int count= (int) log10(num)+1;
    
    return count;
}

int main() {
    int num, digit;
    cin>>num;
	digit = count_digit(num);
	cout<<digit<<endl;
	return 0;

}
