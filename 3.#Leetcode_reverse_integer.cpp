#include<iostream>
using namespace std;
#include<math.h>

int main(){
    // Reverse Integer
    int x;
    cout<<"input: ";
        cin>>x;
         int digit, ans = 0;
        while(x!=0){
            digit = x%10;
            ans = (ans*10) + digit;
            x = x/10;
        }
        if ((ans)>=INT_MAX/10 || (ans)<=INT_MIN/10){
            cout<<0;
        }
        else{
            cout<<ans;
        }
}