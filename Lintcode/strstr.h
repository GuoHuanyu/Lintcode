#include<string>
class Solution {
public:
	/**
	* Returns a index to the first occurrence of target in source,
	* or -1  if target is not part of source.
	* @param source string to be scanned.
	* @param target string containing the sequence of characters to match.
	*/
	int strStr(const char *s, const char *t) {
		if (s != NULL&&t != NULL)
		{
			int sLen = strlen(s);
			int tLen = strlen(t);

			int i = 0;
			int j = 0;
			while (i < sLen && j < tLen)
			{
				if (s[i] == t[j])
				{
					//如果当前字符匹配成功（即S[i] == P[j]），则i++，j++      
					i++;
					j++;
				}
				else
				{
					//如果失配（即S[i]! = P[j]），令i = i - (j - 1)，j = 0      
					i = i - j + 1;
					j = 0;
				}
			}
			//匹配成功，返回模式串p在文本串s中的位置，否则返回-1  
			if (j == tLen)
				return i - j;
		}
		return -1;
	}
};
