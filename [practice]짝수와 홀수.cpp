#include <string>
#include <vector>

using namespace std;

//���� Ǯ��
string solution(int num) {
    string answer = "";
    if (num % 2 == 0)//¦��
    {
        answer = "Even";
    }
    else answer = "Odd";
    return answer;
}

//����� Ǯ��
string solution(int num) {
    string answer = "";

    return num & 1 ? "Odd" : "Even";
}

//���� Ǯ��
string solution(int num) {
    string answer = "";

    (num % 2 == 0) ? answer = "Even" : answer = "Odd";

    return answer;
}