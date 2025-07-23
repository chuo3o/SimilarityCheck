#include <iostream>

using namespace std;

class SimilarityChecker {
public:
	bool lengthCompare(const string A, const string B) {
		return (A.length() == B.length());
	}

	string stA{};
	string stB{};
};