#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int x,y;  
    x=(*a)+(*b);
    if((*a)>=(*b))
        y=(*a)-(*b);
    else
        y=(*b)-(*a);
    *a=x;
    *b=y;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}