/*
You are given a string s consisting only lowercase alphabets and an integer k. Your task is to find the length of the longest substring that contains exactly k distinct characters.

Note : If no such substring exists, return -1. 

Examples:

Input: s = "aabacbebebe", k = 3
Output: 7
Explanation: The longest substring with exactly 3 distinct characters is "cbebebe", which includes 'c', 'b', and 'e'.
Input: s = "aaaa", k = 2
Output: -1
Explanation: There's no substring with 2 distinct characters.
Input: s = "aabaaab", k = 2
Output: 7
Explanation: The entire string "aabaaab" has exactly 2 unique characters 'a' and 'b', making it the longest valid substring.
Constraints:
1 ≤ s.size() ≤ 105
1 ≤ k ≤ 26
*/
#include <iostream>
#include <string>
using namespace std;

int longestKSubstr(string &s, int k) {
        // code here
        int n=s.size();
        int res=-1;
        unordered_map<char, int> f;
        int high,low=0;
        for(high=0;high<n;high++){
            f[s[high]]++;
            while(f.size()>k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                    low++;
                
            }
                if(f.size()==k){
                    int len=high-low+1;
                    res=max(res,len);
                    
                }
                
            }
            return res;
        }
int main() {
    string s;
    int k;

    cin >> s;
    cin >> k;

    Solution obj;
    cout << obj.longestKSubstr(s, k) << endl;

    return 0;
}
