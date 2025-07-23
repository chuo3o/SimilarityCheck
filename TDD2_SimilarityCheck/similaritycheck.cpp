#include <iostream>

using namespace std;

class SimilarityChecker {
public:
	
	int lengthCompare(const string A, const string B) {
		alen = A.length(); 
		blen = B.length();

		assertIllegalArgument();

		if (blen > alen) {
			float temp = alen; alen = blen; blen = temp;
		}
		return (alen >= blen * 2) ? 0 : int((1 - ((alen - blen) / blen)) * 60);
	}

	void assertIllegalArgument() {
		if (alen == 0 || blen == 0) 
			throw invalid_argument("Must not be empty.\n");
	}

	float alen;
	float blen;
};