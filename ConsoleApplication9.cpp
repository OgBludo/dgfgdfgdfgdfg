#include <iostream>
#include <map>
#include <list>

using namespace std;

int main()
{
	list<int> z;
	z.push_back(1);
	z.push_back(5);
	z.push_back(4);
	z.push_back(2);
	z.push_back(7);
	z.push_back(22);
	z.sort();
	auto it = z.end();
	it--;
	for (it; it != z.begin(); it--)
	{
		cout << *it;
	}
	cout << *z.begin();
}