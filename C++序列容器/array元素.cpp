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
	array<int, 10> arr{ 1,2,3,4,5,6,7,8,9,10 };
	cout << arr.at(5) << endl;
	array<int ,10>::iterator iter;
	for (iter = arr.begin(); iter < arr.end(); iter++)
		cout << *iter << endl;
	cout << "=============" << endl;
	array<int, 10>::reverse_iterator iter1;
	for (iter1 = arr.rbegin(); iter1 < arr.rend(); iter1++)
		cout << *iter1 << endl;
	array<double, 4> these{ 1.0, 2.0, 3.0, 4.0 };
	array<double, 4> those{ 1.0, 2.0, 3.0, 4.0 };
	array<double, 4> them{ 1.0, 3.0, 3.0, 2.0 };
	if (these == those) cout << "these and those are equal." << endl;
	if (those != them) cout << "those and them are not equal." << endl;
	if (those < them) cout << "those are less than them." << endl;
	if (them > those) cout << "them are greater than those." << endl;
	return 0;
}
