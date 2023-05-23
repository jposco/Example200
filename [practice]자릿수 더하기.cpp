#include <iostream>
#include <vector>
#include <string>

using namespace std;

//���� Ǯ��
int solution(int n)
{
    int answer = 0;
    vector<int> N;

    for (int i = 100000000; i >= 1; i = i / 10)
    {
        int num = 0;
        if (n >= i)
        {
            num = n / i;
            N.push_back(num);
            n -= num * i;
        }
    }
    for (auto i : N)
    {
        answer += i;
    }

    return answer;
}

//���ڿ��� ���� �ڸ��� ���ϱ�
int solution(int n)
{
    int answer = 0;

    string s = to_string(n);

    for (int i = 0; i < s.size(); i++)
    {
        answer += (s[i] - '0');
    }
    return answer;
}

//�Ϲ����� �ڸ��� ���ϱ�
int solution(int n)
{
    int answer = 0;
    while (n > 0) {
        answer += n % 10;
        n /= 10;
    }
    return answer;
}