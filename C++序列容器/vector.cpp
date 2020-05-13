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
	//copy函数
#if 0
	vector<int> arr;
	arr.reserve(10);
	cout << "Enter ctrl+z to end" << endl;
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(arr));
	copy(begin(arr), end(arr), ostream_iterator<int>(cout));
#endif

#if 0
	vector<int> arr1;
	arr1.reserve(10);
	for (int i = 0; i < 10; i++)
		arr1.push_back(i);
	vector<int>::iterator iter;
	for (iter = arr1.begin(); iter < arr1.end(); iter++)
		cout << *iter << endl;
	cout << "================" << endl;
#endif

#if 0
	vector<string> words;
/*
	通常使用push_back()向容器中加入一个右值元素(临时对象)时，首先会调用构造函数构造这个临时对象，
	然后需要调用拷贝构造函数将这个临时对象放入容器中。原来的临时变量释放。
	这样造成的问题就是临时变量申请资源的浪费。
*/
	words.emplace_back("abcdefg");
	vector<string>::iterator iter1;
	for (iter1 = words.begin(); iter1 < words.end(); iter1++)
		cout << *iter1 << endl;
#endif

#if 0
	//emplace()
	vector<string> words{ "first", "second" };
	auto iter = words.emplace(++begin(words), 5, 'A');
	words.emplace(++iter, "$$$$$");
	vector<string>::iterator iter1;
	for (iter1 = words.begin(); iter1 < words.end(); iter1++)
		cout << *iter1 << endl;
#endif


#if 0
	/*
		在使用同样参数的情况下，调用 insert() 没有调用 emplace() 高效。
		在 insert() 调用中，构造函数调用 string("two")生成了一个对象，作为传入的第二个参数。
		在 emplace() 调用中，构造函数用第二个参数直接在容器中生成了字符串对象。
	*/
	vector<string> words{ "one", "three","eight" };
	auto iter = words.insert(++begin(words), "two");
	string more[]{ "five", "six", "seven" }; // Array elements to be inserted
	iter = words.insert(--std::end(words), begin(more), end(more));
	iter = words.insert(end(words), "ten");
	iter = words.insert(end(words) - 1, 2, "nine");
	iter = words.insert(end(words), { string {"twelve"},string {"thirteen"} });
	vector<string>::iterator iter1;
	for (iter1 = words.begin(); iter1 < words.end(); iter1++)
		cout << *iter1 <<" ";
	cout << endl;

	/*
		vector 的成员函数 insert()，需要一个标准的迭代器来指定插入点；
		它不接受一个反向迭代器——这无法通过编译。
		如果需要查找给定对象的最后一个元素，或者在它的后面插入一个新的元素，就需要用到反向迭代器。
	*/
	vector<std::string> str{ "one", "two", "one", "three" };
	auto riter = find(std::rbegin(str), std::rend(str), "one");
	str.insert(riter.base(), "five");
	for (iter1 = str.begin(); iter1 < str.end(); iter1++)
		cout << *iter1 << " ";
#endif
	vector<int> v;
	v.reserve(6);
	for (int i = 1; i <= 5; i++) { // 向vector插入1到5
		v.push_back(i);
	}
	vector<int>::reverse_iterator ri = find(v.rbegin(), v.rend(), 3);
	vector<int>::iterator i(ri.base()); // 使i和ri的base一样
	v.insert(ri.base(), 99);
	vector<int>::iterator iter;
	for (iter = v.begin(); iter < v.end(); iter++)
		cout << *iter << endl;
	cout << "============" << endl;
	ri = find(v.rbegin(), v.rend(), 99);
	v.erase((++ri).base());
	//v.erase(v.begin() + 3);
	for (iter = v.begin(); iter < v.end(); iter++)
		cout << *iter << endl;


	v.pop_back();
	for (iter = v.begin(); iter < v.end(); iter++)
		cout << *iter << endl;


	vector<int> arr;
	int k = 0;
	for (k = 0; k < 10; k++)
		arr.push_back(k);
	vector<int>::iterator iter_;
	for (iter_ = arr.begin(); iter_ < arr.end(); iter_++)
		cout << *iter_ << " " ;
	return 0;
}
