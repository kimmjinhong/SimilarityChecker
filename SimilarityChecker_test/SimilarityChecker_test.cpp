#include "pch.h"
#include "../SimilarityChecker/SimilarityChecker.cpp"

#include <iostream>
#include <string>

using namespace std;

TEST(AlphabetTest, Alpha1) {
	SimilarityChecker checker;
	string str1 = "ASD";
	string str2 = "DSA";
	int result = checker.alphaScore(str1, str2);
	EXPECT_EQ(result, 40);
}

TEST(AlphabetTest, Alpha2) {
	SimilarityChecker checker;
	string str1 = "A";
	string str2 = "BB";
	int result = checker.alphaScore(str1, str2);
	EXPECT_EQ(result, 0);
}

TEST(AlphabetTest, Alpha3) {
	SimilarityChecker checker;
	string str1 = "AAABB";
	string str2 = "BA";
	int result = checker.alphaScore(str1, str2);
	EXPECT_EQ(result, 40);
}

TEST(AlphabetTest, Alpha4) {
	SimilarityChecker checker;
	string str1 = "AA";
	string str2 = "AAE";
	int result = checker.alphaScore(str1, str2);
	EXPECT_EQ(result, 20);
}