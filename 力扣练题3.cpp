#include"ת����Сд��ĸ.h"
#include"�ж�·���Ƿ��ཻ.h"
#include"����Ӧ��˰���ܶ�.h"

//709.ת����Сд��ĸ
void test709()
{
	Solution709 s;
	string str = { "HELLO" };
	string ret = s.toLowerCase(str);
	cout << "ret=" << ret << endl;
}

//1496.�ж�·���Ƿ��ཻ
void test1496()
{
	Solution1496 s;
	string path = { "NESWW" };
	bool ret = s.isPathCrossing(path);
	cout << "ret=" << ret << endl;
}

//2303.����Ӧ��˰���ܶ�
void test2303()
{
	Solution2303 s;
	vector<vector<int>> brackets = { {3,50} ,{7,10},{12,25} };
	int income = 10;
	double ret = s.calculateTax(brackets, income);
	cout << "ret=" << ret << endl;
}

int main()
{
	/*test709();*/
	/*test1496();*/
	test2303();

	system("pause");

	return 0;
}