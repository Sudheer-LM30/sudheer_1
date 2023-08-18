#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
	forward_list<int> flist = { 10, 20, 30, 40, 50 };

	flist.push_front(60);

	cout<< "The forward list after push_front operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	flist.emplace_front(70);

	cout << "The forward list after emplace_front "
			"operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	flist.pop_front();

	cout << "The forward list after pop_front operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	return 0;
}
