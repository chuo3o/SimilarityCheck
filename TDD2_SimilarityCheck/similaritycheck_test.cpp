#include <stdexcept>
#include "gmock/gmock.h"
#include "similaritycheck.cpp"

using namespace testing;

class SimCheckFixture : public Test {
public:
	SimilarityChecker sim;
};

TEST_F(SimCheckFixture, init) {
	EXPECT_EQ(1, 1);
}

TEST_F(SimCheckFixture, SameDiffLengthCheck) {
	EXPECT_EQ(60, sim.lengthCompare("aaa", "bbb"));
	EXPECT_FALSE(0, sim.lengthCompare("aaaaaa", "bbb"));
}

TEST_F(SimCheckFixture, SameLengthPoint) {
	
}
