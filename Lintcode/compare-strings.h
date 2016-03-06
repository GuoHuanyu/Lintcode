#include<string>
class Solution {
public:
	/**
	* @param A: A string includes Upper Case letters
	* @param B: A string includes Upper Case letter
	* @return:  if string A contains all of the characters in B return true
	*           else return false
	*/
	bool compareStrings(std::string A, std::string B) {
		if (!A.empty())
		{
			for (auto c : B)
			{
				if (isupper(c))
				{
					if (A.find(c) != std::string::npos)
						A.erase(A.find(c), 1);
					else
					{
						return false;
					}
				}
			}
			return true;
		}
		if (B.empty())
			return true;
		return false;
	}
};
