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
					//�����ǰ�ַ�ƥ��ɹ�����S[i] == P[j]������i++��j++      
					i++;
					j++;
				}
				else
				{
					//���ʧ�䣨��S[i]! = P[j]������i = i - (j - 1)��j = 0      
					i = i - j + 1;
					j = 0;
				}
			}
			//ƥ��ɹ�������ģʽ��p���ı���s�е�λ�ã����򷵻�-1  
			if (j == tLen)
				return i - j;
		}
		return -1;
	}
};
