#include<bits/stdc++.h>
using namespace std;


int main(){
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

 