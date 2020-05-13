#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
#if 0
	deque<int> arr;
	int i = 0;
	for (i = 0; i < 10; i++)
		arr.push_back(i);
	deque<int>::iterator iter;
	for (iter = arr.begin(); iter < arr.end(); iter++)
		cout << *iter << " " << endl;
	//for (i = 0; i < 10; i++)
		//cout << arr.at(i) << " " << endl;
#endif


	deque<string> str{ "one","two", "three" };
	auto init_list = { string{"seven"}, string{"eight"}, string{"nine"}, string{"ten"} };
	/*
		这里不能直接把字符放入初始化列表。
		如果这么做，init_list 的类型会被推导为 initializer_list<const char*>，
		然而 assign() 需要的是一个 initializer_list<string> 类型的实参
	*/
	//auto init_list = { "seven", "eight" };//err
	str.assign(init_list);
	deque<string>::iterator iter;
	for (iter = str.begin(); iter < str.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	deque<string> str1 = { string{"seven"}, string{"eight"}, string{"nine"}, string{"ten"} };
	deque<string>::iterator iter1;
	str.assign(begin(str1) + 1, end(str1) - 1);
	for (iter1 = str.begin(); iter1 < str.end(); iter1++)
		cout << *iter1 << " ";

	return 0;
}
