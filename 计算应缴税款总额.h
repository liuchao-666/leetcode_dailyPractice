#pragma once
#include<iostream>
#include<vector>
using namespace std;

//2303.����Ӧ��˰���ܶ�
//����һ���±�� 0 ��ʼ�Ķ�ά�������� brackets ��
//���� brackets[i] = [upperi, percenti] ����ʾ�� i ��˰���������� upperi �����յ�˰��Ϊ percenti ��
//˰�������� �ӵ͵������������� 0 < i < brackets.length ��ǰ���£�upperi-1 < upperi����
//˰����㷽ʽ���£�
//������ upper0 �����밴˰�� percent0 ����
//���� upper1 - upper0 �Ĳ��ְ�˰�� percent1 ����
//Ȼ�� upper2 - upper1 �Ĳ��ְ�˰�� percent2 ����
//�Դ�����
//����һ������ income ��ʾ��������롣��������Ҫ���ɵ�˰���ܶ���׼������ 10 - 5 �Ľ������������ȷ�𰸡�
class Solution2303
{
public:
	double calculateTax(vector<vector<int>>& brackets, int income)
	{
		double totalTax = 0; //��˰��
		int lower = 0; //��������
		for (auto& bracket : brackets)
		{
			//˰��=����������-�������ޣ�*˰��
			totalTax += ((min(income, bracket[0]) - lower) * bracket[1]);

			//����������Ѿ�С�ڻ�����������ޣ��Ǿ��˳�ѭ��
			if (income <= bracket[0])
			{
				break;
			}

			//������������
			lower = bracket[0];
		}
		return (double)totalTax / 100.0;
	}
};