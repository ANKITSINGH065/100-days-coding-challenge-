class Solution
{
public:
    void add_element(map<char, int> &mp, string temp, int x)
    {

        for (int i = 0; i < temp.size(); i++)
        {

            mp[temp[i]] = x;
        }
    }
    vector<string> findWords(vector<string> &words)
    {

        map<char, int> mp;
        string temp1 = "qwertyuiopQWERTYUIOP";
        string temp2 = "asdfghjklASDFGHJKL";
        string temp3 = "zxcvbnmZXCVBNM";

        add_element(mp, temp1, 0);
        add_element(mp, temp2, 1);
        add_element(mp, temp3, 2);

        vector<string> ans;

        for (string &word : words)
        {

            bool flag = true;

            for (int i = 1; i < word.size(); i++)
            {

                if (mp[word[i]] != mp[word[0]])
                {

                    flag = false;

                    break;
                }
            }

            if (flag)
            {

                ans.push_back(word);
            }
        }

        return ans;
    }
};