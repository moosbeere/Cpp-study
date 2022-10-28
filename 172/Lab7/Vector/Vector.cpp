// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

void print(vector<int> vec) {
	for (int n : vec) {
		cout << n << " ";
	}
	cout << "\n------------\n";
}
int main()
{
	vector<int> v1;
	vector<int> v2 = { 1,4,76,-10 };
	vector<int> v3(3, 11);

	cout << v2.size() << endl;
	cout << v2[2] << endl;
	cout << v2.at(3) << endl;

	v2[3] = 50;
	print(v2);

	v1.push_back(20);
	print(v1);

	v3.pop_back();
	print(v3);

	vector<int>::iterator i = v2.begin();
	cout << *i << endl;

	auto index = v2.begin();
	index++;
	v2.insert(index, 33);
	print(v2);

	index = v2.begin();
	index += 3;
	v2.erase(index);
	print(v2);

	list<int> list = { 1,2,3 };
	cout << list.front() << endl;
	cout << list.back() << endl;
	for (auto n : list) cout << n << " ";

	cout << "\n-----------------\n";

	map<string, int> map = { {"Ivanov", 30}, {"Petrov", 40} };
	cout<<map["Ivanov"]<<endl;
	map["Ivanov"] = 50;
	cout << map["Ivanov"] << endl;

	map.insert(pair<string, int>("Smirnov", 22));
	cout << map.size();
	cout << "\n-----------------\n";
	for (auto i = map.begin(); i != map.end(); i++) {
		cout << i->first << " = " << i->second << endl;
	}
	cout << "\n-----------------\n";
	map.erase("Ivanov");
	for (auto i = map.begin(); i != map.end(); i++) {
		cout << i->first << " = " << i->second << endl;
	}




	/*for (vector<int>::iterator i = v2.begin(); i != v2.end(); i++) {
		cout << *i << " ";
	}

	for (auto i = v2.begin(); i != v2.end(); i++) {
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
