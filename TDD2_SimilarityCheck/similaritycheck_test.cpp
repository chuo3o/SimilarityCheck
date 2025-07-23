#include <stdexcept>
#include "gmock/gmock.h"
#include "similaritycheck.cpp"

using namespace testing;
using namespace std;

class SimCheckFixture : public Test {
public:
	SimilarityChecker sim;
	string a = "aaaaa";
	string b = "bbb";
};

TEST_F(SimCheckFixture, ExceptionCheck) {
	EXPECT_THROW(sim.lengthCompare("", a), invalid_argument);
}

TEST_F(SimCheckFixture, SameLengthCheck) {
	EXPECT_EQ(60, sim.lengthCompare(a, a));
}

TEST_F(SimCheckFixture, DiffLengthCheck0) {
	EXPECT_EQ(0, sim.lengthCompare(a + a, a));
	EXPECT_EQ(0, sim.lengthCompare(a, a + a));
}

TEST_F(SimCheckFixture, DiffLengthCheckN) {
	EXPECT_EQ(19, sim.lengthCompare(a, b));
	EXPECT_EQ(19, sim.lengthCompare(b, a));
}
