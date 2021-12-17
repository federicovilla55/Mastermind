#include <stdio.h>
#include <stdlib.h>
#include "mastermind.h"

char* strmalloc(int len)
{
	char* res;
	res = malloc(sizeof(char)*(len+1));
	if(!res) {
		printf("Memory allocation error.\n");
	}

	return res;
}

void checkSequence(char secr[], char curr[], int len, int *white, int *black)
{
	int i, j, flag, foundInSecr[len], foundInCurr[len];

	for(i=0;i<len;i++) {
		foundInCurr[i] = 0;
		foundInSecr[i] = 0;
	}

	for(i=0;i<len;i++) {
		if(curr[i]==secr[i]) {
			(*black)++;
			foundInCurr[i] = 1;
			foundInSecr[i] = 1;
		}
	}

	for(i=0;i<len;i++) {
		if(!foundInCurr[i]) {
			flag = 0;
			for(j=0;j<len && !flag;j++) {
				if(curr[i]==secr[j] && !foundInSecr[j]) {
					(*white)++;
					flag = 1;
					foundInSecr[j] = 1;
				}
			}
		}
	}
}
