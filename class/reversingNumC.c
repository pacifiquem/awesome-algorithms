#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int main() {
	
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	char * numString = to_string(num);
	char * reversedNum = strrev(numString);
	
	printf("Reversed Number is : %d", reversedNum);
	
	return 0;
}