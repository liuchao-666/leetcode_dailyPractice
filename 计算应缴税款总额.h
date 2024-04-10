#pragma once
#include<iostream>
#include<vector>
using namespace std;

//2303.计算应缴税款总额
//给你一个下标从 0 开始的二维整数数组 brackets ，
//其中 brackets[i] = [upperi, percenti] ，表示第 i 个税级的上限是 upperi ，征收的税率为 percenti 。
//税级按上限 从低到高排序（在满足 0 < i < brackets.length 的前提下，upperi-1 < upperi）。
//税款计算方式如下：
//不超过 upper0 的收入按税率 percent0 缴纳
//接着 upper1 - upper0 的部分按税率 percent1 缴纳
//然后 upper2 - upper1 的部分按税率 percent2 缴纳
//以此类推
//给你一个整数 income 表示你的总收入。返回你需要缴纳的税款总额。与标准答案误差不超 10 - 5 的结果将被视作正确答案。
class Solution2303
{
public:
	double calculateTax(vector<vector<int>>& brackets, int income)
	{
		double totalTax = 0; //总税款
		int lower = 0; //区间下限
		for (auto& bracket : brackets)
		{
			//税款=（区间上限-区间下限）*税率
			totalTax += ((min(income, bracket[0]) - lower) * bracket[1]);

			//如果总收入已经小于或等于区间上限，那就退出循环
			if (income <= bracket[0])
			{
				break;
			}

			//更新区间下限
			lower = bracket[0];
		}
		return (double)totalTax / 100.0;
	}
};