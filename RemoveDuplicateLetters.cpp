class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool> letters(26);
        vector<size_t> counter(26, 0);
        
        for (int i = 0; i < s.length(); i++)
            counter[s[i] - 'a']++;
           
		string result;
		
        for (int i = 0; i < s.length(); i++)
        {
            counter[s[i] - 'a']--;
            
            if (letters[s[i] - 'a'] == 0)
            {
                 while (0 < result.length() && s[i] < result[result.length() - 1] && 0 < counter[result[result.length() - 1] - 'a'])
                 {
                      letters[result[result.length() - 1] - 'a'] = false;
                      result.pop_back();
                 }
                
				 letters[s[i] - 'a'] = true;
                 result += s[i];
            }
       }
       return result;
    }
};
