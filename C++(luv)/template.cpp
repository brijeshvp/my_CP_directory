// program template
#include<bits/stdc++.h>
using namespace std;

int main(){

    return 0;
}


//working with test cases template
// poor technique(for loop)
int t;
cin>>t;
for (int test = 0; test < t; ++test)
{
    
}

//working with test cases template
// good technique
int t;
cin>>t;
while(t--){
    // Advantage: here we donot need to use extra variable test(like that in case of for loop)
}

// break and continue(jump statements)->have no impact of if-else,switch statements.Only has impact of loops.

// break-> to come out of the last(inner most) loop
// continue-> to skip the current iteration of the last(inner most) loop. It will directly go to updation in for loop and condition in while loop.

// for loop syntax
for(initialization(optional); condition(mandatory); operation(optional)){

}
for(int i=1; i<=10; ++i){
    // Advantage of for loop is that iterator variable i defined in for loop braces, cannot be used outside for loop bcoz scope of i is only this for loop. This is advantage bcoz you can define another variable of same name i, outside the for loop and use it(as this i's scope will be over).In while loop since iterator variable i, is to be defined outside the while loop that variable is wasted for iterator and you cannot define another variable of same name again outside the while loop.
}