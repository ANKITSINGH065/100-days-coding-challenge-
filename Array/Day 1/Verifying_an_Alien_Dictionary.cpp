class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {

        map<char, int> mp;

        for (int i = 0; i < order.size(); i++)
        {
            mp[order[i]] = i;
        }

        for (int i = 0; i < words.size(); i++)
        {

            string w1 = words[i];
            string w2 = words[i + 1];

            int size = min(w1.size(), w2.size());

            for (int j = 0; j < size; j++)
            {

                if (mp[w1[j]] < mp[w2[j]])
                {

                    break;
                }
                if (mp[w1[j]] > mp[w2[j]])
                {
                    return false;
                    break;
                }
                if (j == size - 1 && w1.size() > w2.size())
                {

                    return false;
                }
            }
        }

        return true;
    }
};