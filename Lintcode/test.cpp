#include<iostream>
#include"AnagramsGroup.h"
int main()
{

	Solution sl;
	std::vector<std::string> s = { "ray", "cod", "abe", "ned", "arc", "jar", "owl", "pop", "paw", "sky", "yup", "fed", "jul", "woo", "ado", "why", "ben", "mys", "den", "dem", "fat", "you", "eon", "sui", "oct", "asp", "ago", "lea", "sow", "hus", "fee", "yup", "eve", "red", "flo", "ids", "tic", "pup", "hag", "ito", "zoo" };
	sl.anagrams(s);
	return 0;
}