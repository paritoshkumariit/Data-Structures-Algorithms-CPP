#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    //upper part
    for(int i = 0; i<n;i++){
        for(int j  = 0; j < n-i-1; j++){
            cout<<" ";
        }
        
        for(int j = 0; j < 2 * i + 1; j++){
            cout<<"*";
        }
        
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    //cout<<endl;
    
    //lower part
    for(int i = 0; i<n;i++){
        //space
        for(int j  = 0; j < i; j++){
            cout<<" ";
        }
        //star
        for(int j = 0; j < 2*n - (2 * i + 1); j++){
            cout<<"*";
        }
        //space
        for(int j = 0; j < i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
	int n;
	cin>>n;
	pattern(n);
	return 0;

}


/*
     *   
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *

*/