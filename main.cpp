#include<iostream>
#include"yichuan.h"
using namespace std;

int main()
{
	GenEngine genEngine(50, 0.8, 0.8, 1, 100, 0, 4);
	genEngine.OnStartGenAlg();
	getchar();
}