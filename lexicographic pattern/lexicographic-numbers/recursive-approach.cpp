#include<bits/stdc++.h> 
using namespace std;
void solve(int no,int n,vector<int> &ans) {
    if(no>n) return;    
    
    ans.push_back(no);    
    for(int j=0;j<=9;j++){        
        solve(no*10+j,n,ans);    
    } 
} 

vector<int> lexicographicalOrder(int n){    
    vector<int> ans;    
    for(int i=1;i<=9;i++) {
        solve(i,n,ans); 
    }   
    
    return ans; 
}  

int main() {
    int n = 15;
    vector<int> orderedArray = lexicographicalOrder(n);

    for (int i = 0; i < n; i++)
		cout << orderedArray[i] << " ";
}