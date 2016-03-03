#include<iostream>
#include"Anagrams.h"
int main()
{

	std::string s = "abcd";
	std::string t = "aabd";
	Solution sl;
	sl.anagram(s, t);
	return 0;
}