#include<bits/stdc++.h>
using namespace std;


int main(){

	// Brute force

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

	// Better approach for positives, negatives and zeroes

	int n= 4, arr[] = {2, 0, 0, 3}, k = 3;
	
    int max_len = 0;
    int sum = 0;
    map<int, int> subarr;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        if(sum == k){
            max_len = max(max_len, i+1);
        }

    	int rem = sum-k;
        if(subarr.find(rem)!=subarr.end()){
            max_len = max(max_len, i-subarr[rem]);
        }
        if(subarr.find(sum)==subarr.end()){
            subarr[sum] = i;
        }  	
    }
    cout<<max_len;

    // Optimal solution for positives and zeroes
    int longestSubarrayWithSumK(vector<int> a, long long k) {
    
    int n = a.size();
    int ptr = 0;
    long long sum = 0;
    int len = 0;
    for(int i = 0; i<n; i++){
        sum+=a[i];
        while(sum>k){
            sum-=a[ptr];
            ptr++;

        }

        if(sum==k){
            len = max(len, i+1-ptr);
        }
        
    }
    return len;
    }
}
