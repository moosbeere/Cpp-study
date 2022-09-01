#include <iostream>
using std::cout;
namespace Static {
	void stat(int a) {
		static int x = 0;
		cout << (x + a) << " ";
		x = x + a;
	}
}
