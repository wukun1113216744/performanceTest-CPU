#include <stdio.h>
#include "benchmark.h"


int fun()
{
	int a  = 0;
	for(int i=0;i<50000;i++){
		a++;
		a++;
		a++;
	}
	return 1;
}

int fun1()
{
	int a  = 0;
	for(int i=0;i<100000;i++){
		a++;
		a++;
		a++;
	}
	return 1;
}

void check()
{
	BEST_TIME(fun(),0,1,50,1000,1);
    BEST_TIME(fun1(),0,1,50,1000,1);
	printf("****************************************************\n");
	BEST_TIME(fun(),1,1,50,1000,1);
    BEST_TIME(fun1(),1,1,50,1000,1);
}

void noCheck()
{
	BEST_TIME_NOCHECK(fun(),1,50,1000,1);
	BEST_TIME_NOCHECK(fun1(),1,50,1000,1);

}


int main()
{
	check();
	printf("--------------------------------------------------\n");
	noCheck();
	return 0;
}
