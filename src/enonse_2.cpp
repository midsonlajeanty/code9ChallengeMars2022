#include <iostream>

using namespace std;

int main(){

    int val;

	cout << "Antre yon Vale : ";
	cin >> val;

	cout << ((val % 4 != 0) ? "OK" : "NOK") << endl;

    return 0;
}