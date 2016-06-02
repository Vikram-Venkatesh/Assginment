/*
 ============================================================================
 Name        : right.c
 Author      : Vikram V
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

/// This program matches two strings, one without wildcard characters, and the other one with them.
#include "func.h"

int main()
{
	char a[] = "gt*";
	char b[] = "gtfg";
	printf("answer is : %d",match(a,b));
	return 0;
}
