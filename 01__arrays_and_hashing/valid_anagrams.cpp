class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> char_counter_s, char_counter_t;
        for (int i=0; i < size(s); i++){
            char ch = s[i];
            if (char_counter_s.count(ch)) {
                char_counter_s[ch] += 1;
            } else {
                char_counter_s[ch] = 1;
            }
        }

        for (int i=0; i < size(t); i++){
            char ch = t[i];
            if (char_counter_t.count(ch)) {
                char_counter_t[ch] += 1;
            } else {
                char_counter_t[ch] = 1;
            }
        }

        cout << "char_counter_s" << endl;
        for (auto& [key , val] : char_counter_s) {
            cout << "\t" << key << ":" << val << endl;
        }

        cout << "char_counter_t" << endl;
        for (auto& [key, val] : char_counter_t) {
            cout << "\t" << key << ":" << val << endl;
        }

        return char_counter_t == char_counter_s;
    }
};
