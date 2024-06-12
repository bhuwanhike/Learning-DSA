#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <math.h>

// Decimal to Binary:

// string convtobinary(int n){
//     string res = " ";
//     while(n!=0){
//         if(n%2 == 1){
//             res+="1";
//         }
//         else{
//             res+="0";
//         }
//         n = n/2;
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }
//________________*__________________*_________________

// Binary to Decimal:

// int binarytodecimal(string n){
//     int len = n.length();
//     int a=0;
//     for(int i=len; i>0; i--){
//         if(n[i-1]=='1'){
//             a=a+pow(2,len-i);
//         }
//     } 
//     return a; 
// }

// string addBinary(string a, string b) {
//          int len1 = a.length();
//          int len2 = b.length();
//          int v = 0, k = 0;
//          string res = "";
//          if(len1>=1 && len2<=10000){
//             for(int i=len1; i>0; i--){
//                 if(a[i-1]=='1'){
//                     v = v+ pow(2,len1-i);
//                 }
//             }   
//             for(int i=len2; i>0; i--){
//                 if(b[i-1]=='1'){
//                     k=k+ pow(2, len2-i);
//                 }
//             } 
//             int g = v+k; 
            
//             if (g ==0){
//                 res+="0";
//                 }
//             while(g!=0){
//                 if(g%2 == 1){
//                     res+="1";
//                 }
//                 else{
//                     res+="0";
//                 }
//                 g = g/2;
//             }
//             reverse(res.begin(), res.end());
            

//         }
//         return res;
//     }

// Remove set bit:

// int removesetbit(int n){
//     int a = n.length();
//     for(int i = a; i>=1; i--){
//         if(n[i]=='1'){
//             n[i]='0';
//         }
//         cout<<n;
//     }

// }

int main(){  

// cout<<binarytodecimal("111");

//cout<<addBinary("0", "1");

// cout<<removesetbit("12");

//cout<<convtobinary(6);


}
