#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a, b, limit;

	cout << "Antre de Vale : ";
	cin >> a >> b;


	cout << "Antre limit lan : ";
	cin >> limit;

	vector<int> milA, milB, milAB, pMilAB;

	for(int i = 1; i <= limit; i++){
		if(i % a == 0 and i % b != 0)
			milA.push_back(i);

		if(i % a != 0 and i % b == 0)
			milB.push_back(i);

		if(i % a == 0 and i % b == 0)
			milAB.push_back(i);

		if(i % a != 0 and i % b != 0)
			pMilAB.push_back(i);
	}

	for(unsigned int i = 0; i < milA.size(); i++)
		cout << milA[i] << ", ";
	cout << " -> Nonb : " << milA.size() << endl;

	for(unsigned int i = 0; i < milB.size(); i++)
		cout << milB[i] << ", ";
	cout << " -> Nonb : " << milB.size() << endl;

	for(unsigned int i = 0; i < milAB.size(); i++)
		cout << milAB[i] << ", ";
	cout << " -> Nonb : " << milAB.size() << endl;

	for(unsigned int i = 0; i < pMilAB.size(); i++)
		cout << pMilAB[i] << ", ";
	cout << " -> Nonb : " << pMilAB.size() << endl;

    return 0;
}