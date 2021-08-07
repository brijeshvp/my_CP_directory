#include<bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b){
        max=a;
        if(max>c){
            if(max>d)
                return max;
            else
                return d;
        }
        else{
            max=c;
            if(max>d)
                return max;
            else
                return d;
        }
    }
    else{
        max=b;
        if(max>c){
            if(max>d)
                return max;
            else 
                return d;
        }
        else{
            max=c;
            if(max>d)
                return max;
            else
                return d;
        }
    }
}
int main(){
    int a,b,c,d,max;
    cin>>a>>b>>c>>d;
    max=max_of_four(a,b,c,d);
    cout<<max;
    return 0;
}