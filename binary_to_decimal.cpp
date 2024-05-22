#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    //Binary to decimal:
    int n;
    cout<<"enter: ";
    cin>>n;
    int r, i=0, ans = 0;
    while(n!=0){
        r = n/10;
        if((n%10)==1){
            ans += pow(2, i);
        }
        n = r;
        i++; 
    }
    cout<<ans<<endl;
 }