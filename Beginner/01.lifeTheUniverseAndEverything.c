// continue taking input until the user enters 42;
#include "stdio.h"
int main(void){
	int input = 0;
	printf("~~~~~~~~~~~~~~~~~~~~``````````~~~~~~~~~~~~~~~~~~~~\n");
// running an infinite loop to continue taking inputs;
	while(1){
		scanf("%d", &input);
		if(input != 42){printf("%d\n", input);}
		else{break;}
	}
	printf("~~~~~~~~~~~~~~~~~~~~``````````~~~~~~~~~~~~~~~~~~~~\n");
	return 0;
}
