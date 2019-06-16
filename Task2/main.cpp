#include <iostream>
#include "Reservoir.h"
using namespace std;

int main()
{
	Reservoir res("Res", lake, 7, 6, 3);
	res.ShowFullInfo();
	cout << "++res" << endl;
	(++res).ShowFullInfo();
	cout << "res++" << endl;
	Reservoir res1 = res++;
	res1.ShowFullInfo();
	res.ShowFullInfo();
	cout << "res + 10" << endl;
	(res + 10).ShowFullInfo();
	system("pause");
	return 0;
}