#include <iostream>

using namespace std;

class SimilarityChecker {
public:
	int lengthCompare(const string A, const string B) {
		if (A.length() == B.length()) {
			return 60;
		}
		return 0;
	}

	string stA{};
	string stB{};
};