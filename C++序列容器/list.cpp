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

	list<string> names{ "Jane", "Jim", "Jules", "Janet" };
	names.push_front("Ian"); // Add string ("Ian") to the front of the list
	names.push_back("Kitty"); // Append string ("Kitty") to the end of the list
	names.emplace_back("Jhon");
	list<string>::iterator i;
	//"Ian" "Jane", "Jim", "Jules", "Janet" "Kitty" "Jhon"
	i = find(names.begin(), names.end(), "Jim");
	names.insert(i, "Ketty");
	names.remove("Ketty");
	list<string>::iterator iter;
	for (iter = names.begin(); iter != names.end(); iter++)
		cout << *iter << " ";
#endif

#if 0
	list<int> arr;
	for (int i = 10; i >= 1; i--)
		arr.push_back(i);
	arr.sort();
	/*
	只有随机迭代器支持<操作，但是所有的五种迭代器都支持!=操作
	*/
	list<int>::iterator iter;
	for (iter = begin(arr); iter != end(arr); iter++)
		cout << *iter << " ";
#endif

#if 0
	//merge()
	list<int> arr1 = {-1,3,5,7,9};
	list<int> arr2 = { 0,2,4,6,8 };
	arr1.merge(arr2);
	list<int>::iterator iter;
	for (iter = begin(arr1); iter != end(arr1); iter++)
		cout << *iter << " ";

#endif
	//splice()
	list<int> arr1 = { -1,3,5,7,9 };
	list<int> arr2 = { 0,2,4,6,8 };
	//arr2.splice(arr2.begin(), arr1, arr1.begin(), arr1.end());//将arr1插在arr2的前面
	arr2.splice(begin(arr2), arr1);
	list<int>::iterator iter;
	for (iter = begin(arr2); iter != end(arr2); iter++)
		cout << *iter << " ";

	return 0;
}
