#include <iostream>
#include <string>

using namespace std;

class SimilarityChecker {
public:
	int lengthScore(string str1, string str2) {
		getBigSmall(str1, str2);
		if (checkMaxScore()) {
			return MAX_SCORE;
		}
		if (checkZeroScore()) {
			return 0;
		}		
		return calScore();
	}
	int calScore()
	{
		return MAX_SCORE - MAX_SCORE * (big - small) / small;
	}
	bool checkZeroScore()
	{
		if (big >= small * 2) {
			return true;
		}
		else {
			return false;
		}
	}
	bool checkMaxScore()
	{
		if (big == small) {
			return true;
		}
		else {
			return false;
		}
	}
	void getBigSmall(std::string& str1, std::string& str2)
	{
		big = str1.length();
		small = str2.length();
		if (small > big) {
			big = str2.length();
			small = str1.length();
		}
	}
private:
	int small;
	int big;
	int result;
	const int MAX_SCORE = 60;
};