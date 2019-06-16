#include <iostream>
#include "TV.h"
#include "Remote.h"
using namespace std;

int main()
{
	TV tv1;
	TV tv2;
	cout << "Remote remote" << endl;
	Remote remote;
	tv1.Print();
	tv2.Print();
	cout << "Command: tv1.Power()" << endl;
	tv1.Power();
	tv1.Print();
	cout << "Command: tv1.IncVolume()" << endl;
	tv1.IncVolume();
	tv1.Print();
	cout << "Command: tv1.NextChannel()" << endl;
	tv1.NextChannel();
	tv1.Print();
	cout << "Command: tv1.PrevChannel()" << endl;
	tv1.PrevChannel();
	tv1.Print();
	cout << "Command: tv1.PrevChannel()" << endl;
	tv1.PrevChannel();
	tv1.Print();
	cout << "Command: tv1.PrevChannel()" << endl;
	tv1.PrevChannel();
	tv1.Print();
	cout << "Command: tv1.PrevChannel()" << endl;
	tv1.PrevChannel();
	tv1.Print();
	cout << "Command: tv1.Power()" << endl;
	tv1.Power();
	tv1.Print();
	cout << "Command: remote.power(tv1)" << endl;
	remote.power(tv1);
	tv1.Print();
	cout << "Command: remote.goToChannel(tv1, 88)" << endl;
	remote.goToChannel(tv1, 88);
	tv1.Print();
	cout << "Command: remote.power(tv2)" << endl;
	remote.power(tv2);
	tv2.Print();
	system("pause");
	return 0;
}