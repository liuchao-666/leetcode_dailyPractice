#pragma once
#include<iostream>
#include<unordered_set>
using namespace std;

//1496.判断路径是否相交
//给你一个字符串 path，其中 path[i] 的值可以是 'N'、'S'、'E' 或者 'W'，分别表示向北、向南、向东、向西移动一个单位。
//你从二维平面上的原点(0, 0) 处开始出发，按 path 所指示的路径行走。
//如果路径在任何位置上与自身相交，也就是走到之前已经走过的位置，请返回 true ；否则，返回 false 。
class Solution1496
{
public:
	int getHash(int x, int y) 
	{
		return x * 20001 + y;
	}

	bool isPathCrossing(string path)
	{
		//存（x，y）
		unordered_set<int> vis;

		int x = 0, y = 0;
		vis.insert(getHash(x, y));
		
		for (auto p : path)
		{
			if (p == 'N')
			{
				y++;
			}
			else if (p == 'S')
			{
				y--;
			}
			else if (p == 'E')
			{
				x++;
			}
			else if (p == 'W')
			{
				x--;
			}

			int hashValue = getHash(x, y);
			
			//在vis中找到了这次的（x，y）
			if (vis.find(hashValue) != vis.end()) 
			{
				return true;
			}
			//没找到就存起来，找到的就不用存了，没必要
			else 
			{
				vis.insert(hashValue);
			}
		}
		return false;
	}
};