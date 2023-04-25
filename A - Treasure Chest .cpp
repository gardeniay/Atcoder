#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<unordered_set>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;

typedef long long int ll;
typedef double dou;

string s1;
int s2, flag;
int flag1, flag2;

int main()
{
	cin >> s2 >> s1;
	for (int i = 0; i < s2; i++)
	{
		if (s1[i] == '|')
		{
			flag1 = i;
			break;
		}
	}
	for (int i = s2-1; i >= 0; i--)
	{
		if (s1[i] == '|')
		{
			flag2 = i;
			break;
		}
	}
	for (int i = flag1; i < flag2; i++)
	{
		if (s1[i] == '*')flag = 1;
	}
	if (flag == 1)
	{
		printf("in\n");
		return 0;
	}
	printf("out\n");
	return 0;
}