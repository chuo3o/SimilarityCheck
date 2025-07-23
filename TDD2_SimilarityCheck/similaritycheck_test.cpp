#include <stdexcept>
#include "gmock/gmock.h"
#include "similaritycheck.cpp"

using namespace testing;

class SimCheckFixture : public Test {
public:
	SimilarityChecker sim;
	string a = "aaaa";
	string b = "bb";
};

TEST_F(SimCheckFixture, init) {
	EXPECT_EQ(1, 1);
}

TEST_F(SimCheckFixture, SameLengthCheck) {
	EXPECT_EQ(60, sim.lengthCompare(a, a));
}

TEST_F(SimCheckFixture, DiffLengthCheck0) {
	EXPECT_EQ(0, sim.lengthCompare(a, b));
	EXPECT_EQ(0, sim.lengthCompare(b, a));
}
