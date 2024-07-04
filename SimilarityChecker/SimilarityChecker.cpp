#include <iostream>
#include <string>
#include <set>

using namespace std;

class SimilarityChecker {
public:
	int alphaScore(string str1, string str2) {
		set<char> Str1 = removeDuplicate(str1);
		set<char> Str2 = removeDuplicate(str2);

		int sameCnt = getSameCnt(Str1, Str2);
		int totalCnt = Str1.size() + Str2.size() - sameCnt;
		return getScore(sameCnt, totalCnt);
	}

	int getScore(int sameCnt, int totalCnt)
	{
		return sameCnt * MAX_SCORE / totalCnt;
	}

	int getSameCnt(std::set<char>& Str1, std::set<char>& Str2)
	{
		int result = 0;
		for (auto pop : Str1) {
			if (Str2.find(pop) != Str2.end()) {
				result++;
			}
		}
		return result;
	}

	set<char> removeDuplicate(std::string& duplicatedStr)
	{
		set<char> noDuplicated;
		while (duplicatedStr.length() != 0) {
			char pop = duplicatedStr.back();
			duplicatedStr.pop_back();
			noDuplicated.insert(pop);
		}
		return noDuplicated;
	}

private:
	const int MAX_SCORE = 40;
};