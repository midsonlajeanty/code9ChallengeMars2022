#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){

    string ip;
	int result = 0;

	cout << "Antre adres ip w la : ";
	getline(cin, ip);

	for(unsigned int i =0; i < ip.length(); i++){
		if(isdigit(ip[i]))
			result += ip[i] - 48;
	}

	result *= ip[0] - 48;

	cout << "Pot ki louvri a se : " << result << endl;

    return 0;
}