#include <bits/stdc++.h>
using namespace std;


int main() {
    int num1, num2;
    int *temp1, *temp2;
    
    cin>>num1>>num2;
    temp1 = &num1;
    temp2 = &num2;
    int add = *temp1 + *temp2;
    cout<<add;
	return 0;
}

