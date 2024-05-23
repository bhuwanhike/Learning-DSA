#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    // Decimal to binary:
    int n;
    cout<<"enter: ";
    cin>>n;
    int r, i=0, p, ans = 0;
    while(n!=0){
        r = n&1;
        n = n>>1;
        p = (r*pow(10,i)) + ans;
        ans = p;
        i++;
        
    }
    cout<<p;f
 }