class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> S;
        S.insert(1);
        long long ans;
        while(n--)
        {
            auto it=S.begin();
            ans=*it;
            S.erase(it);
            S.insert(ans*2);
            S.insert(ans*3);
            S.insert(ans*5);
        }
        return ans;
    }
};
