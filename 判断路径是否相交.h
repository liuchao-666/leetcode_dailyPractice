#pragma once
#include<iostream>
#include<unordered_set>
using namespace std;

//1496.�ж�·���Ƿ��ཻ
//����һ���ַ��� path������ path[i] ��ֵ������ 'N'��'S'��'E' ���� 'W'���ֱ��ʾ�򱱡����ϡ��򶫡������ƶ�һ����λ��
//��Ӷ�άƽ���ϵ�ԭ��(0, 0) ����ʼ�������� path ��ָʾ��·�����ߡ�
//���·�����κ�λ�����������ཻ��Ҳ�����ߵ�֮ǰ�Ѿ��߹���λ�ã��뷵�� true �����򣬷��� false ��
class Solution1496
{
public:
	int getHash(int x, int y) 
	{
		return x * 20001 + y;
	}

	bool isPathCrossing(string path)
	{
		//�棨x��y��
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
			
			//��vis���ҵ�����εģ�x��y��
			if (vis.find(hashValue) != vis.end()) 
			{
				return true;
			}
			//û�ҵ��ʹ��������ҵ��ľͲ��ô��ˣ�û��Ҫ
			else 
			{
				vis.insert(hashValue);
			}
		}
		return false;
	}
};