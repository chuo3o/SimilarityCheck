#include <stdexcept>
#include "gmock/gmock.h"
#include "similaritycheck.cpp"

using namespace testing;


TEST(SimilarCheck, init) {
	EXPECT_EQ(1, 1);
}

TEST(SimilarCheck, SameLengthCheck) {
	SimilarityChecker sim;
	EXPECT_TRUE(sim.lengthCompare("aaa", "bbb"));
}

TEST(SimilarCheck, DifferentLengthCheck) {
	SimilarityChecker sim;
	EXPECT_FALSE(sim.lengthCompare("aaaa", "bbb"));
}
