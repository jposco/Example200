#include "stdafx.h"
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string str = "i like coding";
	
	regex re1(R"(l|i|k|e)");
	regex re2(R"(\D)");
	regex re3(R"(\s)");

	string result1 = regex_replace(str, re1, "[$&]");
	string result2 = regex_replace(str, re1, "*");
	string result3 = regex_replace(str, re2, "_$&_");
	string result4 = regex_replace(str, re3, "(space)");

	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;
	cout << "result3 : " << result3 << endl;
	cout << "result4 : " << result4 << endl;
	
	//re1: l, i, k, e 문자 중 하나를 발견하면 해당 문자를 [$&]로 치환합니다.
	//re2: 숫자가 아닌(non-digit) 문자를 발견하면 _, 해당 문자, _로 치환합니다.
	//re3: 공백 문자를 발견하면 (space)로 치환합니다.
	
	//result1: i [l][i][k][e] coding
	//result2: i * * coding
	//result3: i _i_ l_i_k_e coding
	//result4: i(space)like(space)coding

	return 0;
}
