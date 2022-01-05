class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(s1+s2==s2+s1)
        {
            int a=gcd(n,m);
            return s1.substr(0,a);
        }
        return "";
    }
};
