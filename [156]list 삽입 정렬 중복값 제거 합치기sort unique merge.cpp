#include "stdafx.h"
#include <iostream>
#include <list>

//삽입, 삭제가 빠르다는 장점이있다.
//반면 특정원소에 접근하지 못하고 컨테이너 요소에 접근하려면 반드시 반복자를 사용
//해야한다 램덤하게 접근하지 않는 데이터는 list로 구현하는 것이 좋다

using namespace std;

void Print(list<int> &data)
{
	cout << "== Print == " << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << *iter << ", ";

	cout << endl;
}

int main()
{
	list<int> data1({ 1, 2, 3, 2 });
	data1.push_back(3);
	data1.sort();

	Print(data1);

	data1.unique();

	Print(data1);

	list<int> data2 = { 4, 5, 6};
	data2.merge(data1);

	Print(data2);

	return 0;
}