#pragma once
class Abstract
{
private:
	const double PI = 3.14;
public:
	virtual int square(int a, int b) = 0;
	void print(int x);
};

