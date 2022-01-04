class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& list) {
        unordered_map<string, vector<string>> A;
        for(auto i:list)
        {
            string a=i;
            sort(a.begin(), a.end());
            A[a].push_back(i);
        }
        vector<vector<string> > ans;
        for(auto i:A)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
