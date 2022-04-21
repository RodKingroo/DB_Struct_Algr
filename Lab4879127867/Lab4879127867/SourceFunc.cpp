#include <iostream>
#include <string>

using namespace std;

class SourceFunc : public string{
	using base = string;
public:
	SourceFunc() : string() { };
	SourceFunc(string s) : string(s) { };
	SourceFunc startswith(string sn);
	SourceFunc swapcase();
	SourceFunc zfill(int width);
};

SourceFunc SourceFunc::startswith(string sn) {
	SourceFunc sr;
	int sncount = sn.length();
	string trufal;
	for (int i = 0; i < sncount; ++i) {
		sr.push_back((*this)[i]); 
		if (sr[i] == sn[i]) trufal = "True";
		else { trufal = "False"; i = 9999; }
	}
	return trufal;
}

SourceFunc SourceFunc::swapcase() {
	SourceFunc sr;
	int nMin = 97, nMax = 122, NMin = 65, NMax = 90;
	int len = this->size();
	for (int i = 0; i < len; ++i) {
		sr.push_back((*this)[i]);
		if (sr[i] >= nMin && sr[i] <= nMax)sr[i] = sr[i] - 32;
		else if (sr[i] >= NMin && sr[i] <= NMax)sr[i] = sr[i] + 32;
	}
	return sr;
}

SourceFunc SourceFunc::zfill(int width) {
	SourceFunc sr;
	int len = this->size();
	for (int i = 0; i <= width; ++i) {
		int die_width = width - len;
		int die_i = i - die_width;
		if (i <= die_width) sr.push_back('0');
		else if (die_i <= len) sr.push_back((*this)[die_i-1]);
	}
	return sr;
}

int main()
{
	SourceFunc s1("Pack my bOx wIth Five Dozen liQuoR jUgS."), s2, s3, s4;
	s3 = s1.startswith("Pack my bOx");
	s4 = s1.swapcase();
	s2 = s1.zfill(99);

	cout << s1 << endl << "==========================="<<endl;
	cout << s3 << endl << s4 << endl<< s2 << endl;

	return 0;
}