#include "Reaction.h" // Include the code that we are testing
#include <gtest/gtest.h> // Include the google test framework

using namespace reactor;

class ReactionTest: public ::testing::Test {
protected:
	Reaction myReaction;
	ReactionTest():
		myReaction()
	{
	};
};

TEST_F(ReactionTest, ReactionCanExist) { // First argument is test group, second is test name
 // Would crash if we couldn't instantiate a reaction.
}

int main(int argc, char **argv) { // A main function scaffold to call the tests
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}