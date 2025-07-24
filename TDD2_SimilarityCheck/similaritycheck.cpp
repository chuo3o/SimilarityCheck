#include <iostream>

using namespace std;

class SimilarityChecker {
public:
	const int MAX_POINT_FROM_LENGTH = 60;
	const int MAX_POINT_FROM_CHAR = 100 - MAX_POINT_FROM_LENGTH;
	
	int lengthCompare(const string A, const string B) {
		alen = A.length(); 
		blen = B.length();

		assertIllegalArgument();

		if (blen > alen) {
			float temp = alen; 
			alen = blen; 
			blen = temp;
		}
		return (alen >= blen * 2) ? 0 : int((1 - ((alen - blen) / blen)) * MAX_POINT_FROM_LENGTH);
	}

	void assertIllegalArgument() {
		if (alen == 0 || blen == 0) 
			throw invalid_argument("Must not be empty.\n");
	}

	float alen;
	float blen;
};