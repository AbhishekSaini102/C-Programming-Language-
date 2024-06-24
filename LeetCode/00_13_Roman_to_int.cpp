#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        // Create a map to store Roman numeral values
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        int result = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i)
        {
            // If the current numeral is smaller than the next numeral, subtract its value
            if (i < n - 1 && romanValues[s[i]] < romanValues[s[i + 1]])
            {
                // cout<<"value of i"<<i<<endl;
                cout << romanValues[s[i]] << endl;
                result -= romanValues[s[i]];
            }
            else
            {
                cout << romanValues[s[i]] << endl;
                result += romanValues[s[i]];
            }
            cout << "result:" << result << endl;
        }

        return result;
    }
};

int main()
{
    Solution sol;
    // cout << "III: " << sol.romanToInt("III") << endl;       // Output: 3
    cout << "LVIII: " << sol.romanToInt("LVIII") << endl; // Output: 58
    // cout << "MCMXCIV: " << sol.romanToInt("MCMXCIV") << endl; // Output: 1994
    return 0;
}
