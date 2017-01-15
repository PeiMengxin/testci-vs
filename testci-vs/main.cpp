#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> v;

	for (size_t i = 0; i < 5; i++)
	{
		v.push_back(i);
	}

	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "done!" << endl;
}