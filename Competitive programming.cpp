#include<iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec = {0, 1, 2, 3, 4};
	for (const auto &value : vec)
		cout << value << ' ';

	cout << '\n';
	int array[]= {1, 2, 3, 4, 5};
	for (const auto &value: array)
		cout << value << " ";
	return 0;
}
