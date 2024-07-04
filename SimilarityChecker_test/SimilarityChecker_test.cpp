#include "pch.h"
#include "../SimilarityChecker/SimilarityChecker.cpp"

#include <iostream>
#include <string>

using namespace std;

TEST(TestCaseName, Length3and3) {
	SimilarityChecker checker;
	string str1 = "ASD";
	string str2 = "DSA";
	int result = checker.lengthScore(str1, str2);
	EXPECT_EQ(result, 60);
}

TEST(TestCaseName, Length1and2) {
	SimilarityChecker checker;
	string str1 = "A";
	string str2 = "BB";
	int result = checker.lengthScore(str1, str2);
	EXPECT_EQ(result, 0);
}

TEST(TestCaseName, Length5and3) {
	SimilarityChecker checker;
	string str1 = "AAABB";
	string str2 = "BAA";
	int result = checker.lengthScore(str1, str2);
	EXPECT_EQ(result, 20);
}

TEST(TestCaseName, Length2and3) {
	SimilarityChecker checker;
	string str1 = "AA";
	string str2 = "AAE";
	int result = checker.lengthScore(str1, str2);
	EXPECT_EQ(result, 30);
}