#include <iostream>
#include <math.h>
using namespace std;

int main(){
int power, i=0, n;
    int ans = 0;
    cout<<"enter: ";
    cin>>n;
   
while(i<=30){
    power = pow(2,i);
    if(power == n){
        cout<<true;
        break;}
         i++;
    }if(power!=n & n!=0){
        cout<<false;
    }else if(n==0){
        cout<<"Can't be determined";
    }
}

