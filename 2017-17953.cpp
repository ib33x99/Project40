#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int num;
	vector<int>ivec;

	while(cin>>num){
		ivec.push_back(num);
	}
	std::sort(ivec.begin(), ivec.end());
	vector<int>mission;
	for (auto &i : ivec) {
		mission.push_back(i);
	}
	cout << "ordered array" << endl;
	for (auto &i : mission) {
		cout << i << " ";
	}
}
