#include"转化成小写字母.h"
#include"判断路径是否相交.h"
#include"计算应缴税款总额.h"

//709.转化成小写字母
void test709()
{
	Solution709 s;
	string str = { "HELLO" };
	string ret = s.toLowerCase(str);
	cout << "ret=" << ret << endl;
}

//1496.判断路径是否相交
void test1496()
{
	Solution1496 s;
	string path = { "NESWW" };
	bool ret = s.isPathCrossing(path);
	cout << "ret=" << ret << endl;
}

//2303.计算应缴税款总额
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