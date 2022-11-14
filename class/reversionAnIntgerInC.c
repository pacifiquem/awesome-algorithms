#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int num;
	
	printf("Enter a Number : ");
	scanf("%d", &num);
	
	char stringNum[20];
	sprintf(stringNum, "%d", num);
	
	printf("Reversed Number: %s", strrev(stringNum));
	
	return 0;
}