#include<bits/stdc++.h>
using namespace std;


int main(){
	int n= 3, arr[] = {-1, 2, 3}, k = 6;
	
    int longest = 0;
	for(int i = 0; i<n; i++){
		int s = 0;
		for(int j = i; j<n; j++){
			s+=arr[j];
			if(s==k){
				longest = max(longest, j-i+1);
			}
		}
	}
	cout<<longest;
}
