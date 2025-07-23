#include <iostream>

using namespace std;

class SimilarityChecker {
public:

	int lengthCompare(const string A, const string B) {
		alen = A.length(); blen = B.length();
		if (blen > alen) {
			double temp = alen; alen = blen; blen = temp;
		}
		return (alen >= blen * 2) ? 0 : int((1 - ((alen - blen) / blen)) * 60);
	}

	double alen;
	double blen;
};