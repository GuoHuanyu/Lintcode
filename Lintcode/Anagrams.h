#include<string>
class Solution {
public:
	/**
	* @param s: The first string
	* @param b: The second string
	* @return true or false
	*/
	bool anagram(std::string s, std::string t) {
		if (!s.empty() && !t.empty())
		{
			if (s.length() == t.length())
			{
				for (auto c : s)
				{
					if (t.find(c)!=std::string::npos)
						t.erase(t.find(c), 1);
				}
				if (t.empty())
					return true;
			}
		}
		return false;
	}
};