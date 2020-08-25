#include<iostream>
#include<unordered_set>
#include <fstream>
using namespace std;

int main() {
	unordered_set<string> set;
	while (true) {
		string temp;
		cin >> temp;
		if (temp == "1")
			break;
		set.emplace(temp);
	}
	ofstream myfile;
	myfile.open("URLs.txt");
	for (auto i : set) {
		myfile << i << endl;
	}
	myfile.close();
	return 1;
}