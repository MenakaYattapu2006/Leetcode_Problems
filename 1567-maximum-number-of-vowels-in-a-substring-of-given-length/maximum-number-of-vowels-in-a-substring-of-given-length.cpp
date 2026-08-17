class Solution {
    bool is_vowel(char c){
        if(c == 'a' || c == 'e'|| c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int cnt = 0, max_vowel= 0;
        for(int i = 0; i < k; i++){
            if(is_vowel(s[i])) cnt++;
            max_vowel = max(cnt, max_vowel);
        }
        for(int j = k; j < s.size(); j++){
            if(is_vowel(s[j])) cnt += 1;
            if(is_vowel(s[j - k])) cnt -= 1;
            max_vowel = max(max_vowel, cnt);
        }
        return max_vowel;
    }
};