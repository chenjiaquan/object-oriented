#pragma once
#include<iostream>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
using namespace std;

class Calculation
{
public:
	
	double output(queue<string> strs);

	bool isOperator(string s);

	int level(string c);
};


