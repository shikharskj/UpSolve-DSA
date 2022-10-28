//My Brute force approach ////////////////////////////////////////////////////////////
// O(N^2)
#include <bits/stdc++.h>
using namespace std;

int getInitialDigit(int x) {
    while (x > 9) {
        x = x / 10;
    }
    return x;
}
vector<int> lexicographicalOrder(int n){
	// Write your code here.
    vector<int> arr;
    int x = 1;
    while(x <= n) {
        arr.push_back(x);
        x++;
    }
    vector<int> result;
//  3, 4, 5, 6, 7, 8, 9]
    
    for(int i = 0; i < n; i++) {
        result.push_back(arr[i]);
        for(int j=i+1; j<=n; j++) {
            if(arr[i] == getInitialDigit(arr[j])) {
                result.push_back(arr[j]);
                arr[j]=0;
                // j--;
            }
        }
    }
    vector<int> resultF;
    int z = 0;
    while(result[z] !=0) {
        resultF.push_back(result[z]);
        z++;
    }
    return resultF;
}
int main () {
    int n = 15;
    vector<int> orderedArray = lexicographicalOrder(n) ;
    for (int i = 0; i < n; i++)
		cout << orderedArray[i] << " ";
}