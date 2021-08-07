#include<bits/stdc++.h>
using namespace std;

int main(){
    double balance,rem_bal;
    int amount;
    cin>>amount >> balance;
    if(amount%5==0){
        if((amount+0.5)<=balance){  //if amount is same as balance then we cannot debit(120-120-0.5 is negative)--very imp logic
            rem_bal=balance-amount-0.50;
            cout<<rem_bal;
        }
        else
            cout<<balance;
    }
    else
        cout<<balance;
    return 0;
}