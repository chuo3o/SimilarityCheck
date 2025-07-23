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

TEST_F(SimCheckFixture, SameLengthCheck) {
	EXPECT_TRUE(sim.lengthCompare("aaa", "bbb"));
}

TEST_F(SimCheckFixture, DifferentLengthCheck) {
	EXPECT_FALSE(sim.lengthCompare("aaaa", "bbb"));
}
