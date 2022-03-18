#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int m, n;

	cout << "Antre enteval lan (x, y) : ";
	cin >> m >> n;
	int som = 0;

	for(int i = m; i <= n; i++)
		if(i % 2 ==0)
			som += i;
	
	cout << "Rezilta a se : " << som << endl;

    return 0;
}