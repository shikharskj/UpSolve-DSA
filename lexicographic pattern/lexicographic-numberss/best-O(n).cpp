//  O(n)
// NOTE=>  We don't need to generate the numbers first. 
// We can get the desired sequence while generating it..

vector<int> lexicographicalOrder(int n){
	// Write your code here.
    vector<int> ans;
    
    int i = 1;
    while(i<=n and i<10)
    {
        ans.push_back(i);
		for(int j = 0; j<=9;j++)
        {
            int num = (10*i) + j;
            if(num > n)
                break;
            ans.push_back(num);
        }
        i++;
    }
    
    return ans;
        
}