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
	//copy����
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
	ͨ��ʹ��push_back()�������м���һ����ֵԪ��(��ʱ����)ʱ�����Ȼ���ù��캯�����������ʱ����
	Ȼ����Ҫ���ÿ������캯���������ʱ������������С�ԭ������ʱ�����ͷš�
	������ɵ����������ʱ����������Դ���˷ѡ�
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
		��ʹ��ͬ������������£����� insert() û�е��� emplace() ��Ч��
		�� insert() �����У����캯������ string("two")������һ��������Ϊ����ĵڶ���������
		�� emplace() �����У����캯���õڶ�������ֱ�����������������ַ�������
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
		vector �ĳ�Ա���� insert()����Ҫһ����׼�ĵ�������ָ������㣻
		��������һ������������������޷�ͨ�����롣
		�����Ҫ���Ҹ�����������һ��Ԫ�أ����������ĺ������һ���µ�Ԫ�أ�����Ҫ�õ������������
	*/
	vector<std::string> str{ "one", "two", "one", "three" };
	auto riter = find(std::rbegin(str), std::rend(str), "one");
	str.insert(riter.base(), "five");
	for (iter1 = str.begin(); iter1 < str.end(); iter1++)
		cout << *iter1 << " ";
#endif
	vector<int> v;
	v.reserve(6);
	for (int i = 1; i <= 5; i++) { // ��vector����1��5
		v.push_back(i);
	}
	vector<int>::reverse_iterator ri = find(v.rbegin(), v.rend(), 3);
	vector<int>::iterator i(ri.base()); // ʹi��ri��baseһ��
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
