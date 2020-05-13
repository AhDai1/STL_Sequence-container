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
	��û�г�Ա���� size()����˲�����һ��ǰ���������ȥ��һ��ǰ���������
	���ǿ���ͨ��ʹ�ö�����ͷ�ļ� iterator �е� distance() �������õ�Ԫ�صĸ�����
	*/
	forward_list<string> my_words{ "three", "six", "eight" };
	int count = distance(begin(my_words), end(my_words));
	cout << count << endl;

#endif

	forward_list<int> data{ 10,21,43,5,7,4 };
	auto iter = begin(data);
	advance(iter, 3);//��ǰ��������ƶ����λ��
	cout << *iter << endl;
	for (iter = data.begin(); iter != data.end(); iter++)
		cout << *iter << " ";

	forward_list<string> my_words{ "three", "six", "eight" };
	forward_list<string> your_words{ "seven", "four", "nine" , "ten"};
	cout << *(++begin(your_words)) << endl;
	my_words.splice_after(my_words.before_begin(), your_words, ++begin(your_words), end(your_words));
	//��your_words�� (++begin(your_words), end(your_words)) �е�Ԫ�ز���my_words��һ��Ԫ�ص�ǰ��

	//my_words.splice_after(my_words.before_begin(), your_words, ++begin(your_words));
	//��your_words��++begin(your_words)�еĺ�һ��Ԫ�ز���my_words��һ��Ԫ�ص�ǰ��
	forward_list<string>::iterator iter1;
	
	for (iter1 = my_words.begin(); iter1 != my_words.end(); iter1++)
	{
		cout << *iter1 << " ";
	}


	return 0;
}
