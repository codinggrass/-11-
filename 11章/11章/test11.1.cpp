#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <sstream>
#include <list>
#include <utility>
using namespace std;

int main()
{
	map<string, int> w_count;
	string word;
	//11.1
	//while (cin >> word)
	//{
	//	//去除大小写以及尾部符号
	//	if (*word.begin() < 97)
	//		*word.begin() = *word.begin()+32;
	//	if (*(word.end() - 1) < 97 || *(word.end() - 1) > 122)
	//			word.erase(word.end()-1);
	//	++w_count[word];
	//}
	//for (auto &a : w_count)
	//	cout << a.first << " times:" << a.second << endl;
	//while (getchar() != 'q');

	//map以姓做关键字，名的Vvector作值 
	//11.2.1
	//map<string, vector<string>> name;
	//stringstream name_s;
	//string temp_name;
	//int i = 0;
	//while (getline(cin, word))
	//{
	//name_s.str(word);
	//name_s >> word;
	//name_s >> temp_name;
	//name[word].push_back(temp_name);
	//word.clear();
	//name_s.clear();//这是一个字符串流，必须清空管道
	//}	
	//for (auto &a : name)
	//{
	//	cout << a.first << ":";
	//	for (auto &b : a.second)
	//		cout << b << " ";
	//	cout << endl;

	//}
	//set<string> set_a = { "nihao","nishi","nihao" };//set的优点在于重复的值可以忽略
	//for (auto &a : set_a)
	//	cout << a << endl;
	//cout << endl;
	//vector<string> v_str;
	//cin.clear();
	//while (cin >> word)
	//{
	//	if (find(v_str.begin(), v_str.end(), word) == v_str.end())
	//		v_str.push_back(word);
	//		
	//}
	//for (auto &a : v_str)
	//	cout << a << endl;
	//cout << endl;

	//11.2.2
	//list<int> a_line = { 1,2 };
	//map<string, list<int>> wordLine;
	//wordLine["a"] = a_line;
	//vector<pair<string, int>> v_pair;
	//pair<string, int> pair_temp("s", 3);;

	//11.2.3
	///*int i = 0;
	//while (cin >> word)
	//{
	//	
	//	pair_temp.first = word;
	//	v_pair.push_back(pair_temp);
	//	cin.clear();
	//	i++;
	//}
	//int seque;
	//cin.clear();
	//int j = 0;
	//while (cin >> seque)
	//{
	//	
	//	v_pair[j].second=seque;
	//	if (j++ ==i)
	//		break;
	//	cin.clear();
	//}
	//pair_temp = { "s",1 };
	//make_pair("s", 2);*/
	
	//11.3.2
	//while (cin >> word)
	//{
	//	auto ret = w_count.insert({word, 1});
	//	if (!ret.second)
	//	{
	//		++ret.first->second;
	//	}
	//}
	//for (auto &a : w_count)
	//	cout << a.first << " :" << a.second << endl;

	map<string, vector<int>> map_s_v;
	pair<map<string,vector<int>>::iterator,bool>ret=map_s_v.insert({ "word",{1,2,3} });

	while (getchar() != 'q');
	return 0;
}