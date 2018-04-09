#include <iostream>
#include <vector>
#include<algorithm>
#include <functional>    
using namespace std;


void main() {
	vector<int> NumberList;
	int num = 0;
	while (cin >> num) {
		NumberList.push_back(num);
	}

	sort(NumberList.begin(), NumberList.end(), greater<int>());
	
	cout << "Ordered Array: ";
	for (auto i : NumberList) {
		cout << i << " ";
	}

	cout << endl;
	system("PAUSE");
}