#include <iostream>
#include "strutil.h"

using namespace std;

int main() {
	char str1[400], str2[400];
	cout << "first" << '\n';
	cin >> str1;
	cout << "second" << '\n';
	cin >> str2;
	cout << strConteins(str1, str2);
	return 0;
}
