#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<forward_list>
#include<iterator>
#include<string>
using namespace std;
int main()
{
#if 0
	/*
	它没有成员函数 size()，因此不能用一个前向迭代器减去另一个前向迭代器，
	但是可以通过使用定义在头文件 iterator 中的 distance() 函数来得到元素的个数。
	*/
	forward_list<string> my_words{ "three", "six", "eight" };
	int count = distance(begin(my_words), end(my_words));
	cout << count << endl;

#endif

	forward_list<int> data{ 10,21,43,5,7,4 };
	auto iter = begin(data);
	advance(iter, 3);//将前向迭代器移动多个位置
	cout << *iter << endl;
	for (iter = data.begin(); iter != data.end(); iter++)
		cout << *iter << " ";

	forward_list<string> my_words{ "three", "six", "eight" };
	forward_list<string> your_words{ "seven", "four", "nine" , "ten"};
	cout << *(++begin(your_words)) << endl;
	my_words.splice_after(my_words.before_begin(), your_words, ++begin(your_words), end(your_words));
	//将your_words中 (++begin(your_words), end(your_words)) 中的元素插入my_words第一个元素的前面

	//my_words.splice_after(my_words.before_begin(), your_words, ++begin(your_words));
	//将your_words中++begin(your_words)中的后一个元素插入my_words第一个元素的前面
	forward_list<string>::iterator iter1;
	
	for (iter1 = my_words.begin(); iter1 != my_words.end(); iter1++)
	{
		cout << *iter1 << " ";
	}


	return 0;
}
