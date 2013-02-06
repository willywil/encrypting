#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
	
	char data[100];
	char encrypted[100];
	char pass[20];

	cout << "Gimme some data: ";
	cin >> data;

	cout << "Password: ";
	cin >> pass;

	char *e = encrypted;
	char *pwd = pass;
	for(char *p = data; *p; p++) {
		*e++ = *p ^ *pwd++;
		if (!*pwd) pwd = pass;
	}

	cout << "encrypted: " << encrypted << endl;

	e = encrypted;
	pwd = pass;
	for(e=encrypted; *e; e++) {
		*e = *e ^ *pwd++;
		if (!*pwd) pwd = pass;
	}
	
	cout << "\n\ndecrypted: " << encrypted << endl;

	cout << "\n\n";
	system("pause");
}
