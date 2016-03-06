#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<sstream>
class Solution {
public:
	/**
	* @param strs: A list of strings
	* @return: A list of strings
	*/
	std::vector<std::string> anagrams(std::vector<std::string> &strs) {

		std::map<std::string, std::vector<std::string>>string_map;
		std::map<std::string, std::vector<std::string>>::iterator stringmap_it;
		std::vector<std::string> anastr;
		for (auto s : strs)
		{
			std::vector<std::string> strvectorinit;
			strvectorinit.push_back(s);
			stringmap_it = string_map.find(generalLabel(s));
			if (stringmap_it != string_map.end()){
				stringmap_it->second.push_back(s);
			}
			else
				string_map.insert(std::make_pair(generalLabel(s), strvectorinit));
		}
		stringmap_it = string_map.begin();
		while (stringmap_it != string_map.end()){
			if (stringmap_it->second.size() > 1){
				for (auto s : stringmap_it->second)
					anastr.push_back(s);
			}
			stringmap_it++;
		}
		return anastr;
	}
	std::string generalLabel(std::string str) {
		int hash[26] = {0};
		for (int i = 0; i < str.length(); ++i) {
			int index = (int)(str.at(i) - 'a');
			hash[index]++;
		}
		std::stringstream  ss;
		ss.clear();
		for (int i = 0; i < 26; ++i) {
			if (hash[i] == 0) continue;
			char c = (char)('a' + i);
			ss<<c;
			ss<<hash[i];
		}
		str = ss.str();
		return str;
	}
};
