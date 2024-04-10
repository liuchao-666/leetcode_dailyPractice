#pragma once
#include<iostream>
using namespace std;

//709.转化成小写字母
//给你一个字符串 s ，将该字符串中的大写字母转换成相同的小写字母，返回新的字符串。
class Solution709
{
public:
	string toLowerCase(string s)
	{
		for (auto& ch : s)
		{
			//直接用大写转小写的函数
			ch = tolower(ch);
		}
		return s;
	}
};