#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        int balance;
        
    public:
       void set_balance(int amount){
           balance = amount;
       }
       
       int get_balance(){
           return balance;
       }
};

int main() {
    
   BankAccount account;
   int num;
   cin>>num;
   
   account.set_balance(num);
   cout<<account.get_balance();
	
	return 0;

}
