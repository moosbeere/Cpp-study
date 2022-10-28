// map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

void print(vector<int> v) {
	for (int n : v) cout << n << " ";
	cout << "\n--------------\n";
}
int main()
{
	vector<int> v1;
	vector<int> v2{ 2,-10, 4, 5 };
	vector<int> v3(3, 11);
	cout << v2.size() << endl;
	cout << v2[2] << endl;
	cout << v2.at(1) << endl;

	v2[3] = 50;
	print(v2);

	v2.push_back(15);
	print(v2);

	v2.pop_back();
	print(v2);

	vector<int>::iterator i;
	i = v2.begin();

	i++;
	cout << *i << endl;
	v2.insert(i, 45);
	print(v2);

	i = v2.begin();
	i+=2;
	v2.erase(i);
	print(v2);

	list<int> list = { 2,3,5 };
	cout << list.front() << endl;
	cout << list.back() << endl;
	for (auto i : list) {
		cout << i << " ";
	}

	cout << "\n----------\n";
	map<string, int> map = { {"Ivanov", 20}, {"Sidorov", 30}};
	cout << map["Ivanov"] << endl;
	map["Petrov"] = 30;
	cout << map.size() << endl;

	map.insert(pair<string, int>("Volodina", 30));
	for (auto i = map.begin(); i != map.end(); i++) {
		cout << i->first << "="<<i->second<<"\n";
	}
	cout << "\n----------\n";
	map.erase("Volodina");
	for (auto i = map.begin(); i != map.end(); i++) {
		cout << i->first << "=" << i->second << "\n";
	}

	/*for (vector<int>::iterator i = v2.begin(); i != v2.end(); i++) {
		cout << *i << " ";
	}*/
	
	/*for (auto i = v2.begin(); i != v2.end(); i++) {
		cout << *i << " ";
	}*/

	 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
