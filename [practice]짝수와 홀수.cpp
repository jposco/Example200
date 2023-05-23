#include <string>
#include <vector>

using namespace std;

//나의 풀이
string solution(int num) {
    string answer = "";
    if (num % 2 == 0)//짝수
    {
        answer = "Even";
    }
    else answer = "Odd";
    return answer;
}

//우수한 풀이
string solution(int num) {
    string answer = "";

    return num & 1 ? "Odd" : "Even";
}

//정석 풀이
string solution(int num) {
    string answer = "";

    (num % 2 == 0) ? answer = "Even" : answer = "Odd";

    return answer;
}