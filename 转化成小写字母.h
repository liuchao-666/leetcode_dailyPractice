#pragma once
#include<iostream>
using namespace std;

//709.ת����Сд��ĸ
//����һ���ַ��� s �������ַ����еĴ�д��ĸת������ͬ��Сд��ĸ�������µ��ַ�����
class Solution709
{
public:
	string toLowerCase(string s)
	{
		for (auto& ch : s)
		{
			//ֱ���ô�дתСд�ĺ���
			ch = tolower(ch);
		}
		return s;
	}
};