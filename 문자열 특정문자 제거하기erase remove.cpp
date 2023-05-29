#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence = "i like coding";
	
	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

	cout << sentence << endl;

	return 0;
};

//모음 제거하기
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};
    for(auto i : v)
    {
        my_string.erase(remove(my_string.begin(),my_string.end(),i ),my_string.end());
    }
    return my_string;
}
