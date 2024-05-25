#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter: ";
  cin>>n;
   int m = n, mask = 0;
   if (n == 0){
    cout<<1;
   }else{
  while(m!=0){
    mask = (mask<<1) | 1;
    m=m>>1;
  }
  int ans = (~n) & mask;
  cout<<ans;

   }

}
