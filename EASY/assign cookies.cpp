class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());

        int i=0,j=0,ans=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                ans++;
                i++;
                j++;
            }
            else j++;
            
        }
        return ans;
    }
};
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int findnumber(vector<int>& g, vector<int>& s) {
//     sort(s.begin(), s.end());
//     sort(g.begin(), g.end());

//     int i = 0, j = 0, ans = 0;
//     while (i < g.size() && j < s.size()) {
//         if (s[j] >= g[i]) {
//             ans++;
//             i++;
//             j++;
//         } else {
//             j++;
//         }
//     }
//     return ans;
// }

// int main() {

//     vector<int> g = {1, 2, 3};
//     vector<int> s = {1, 1};

//     int result = findnumber(g, s);
//     cout << "Maximum number : " << result << endl;

//     return 0;
// }
