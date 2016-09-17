// The Lead Game
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void accept(void);
void calculate(int[10000][2], int);

int main(int argc, char* argv[]){
	accept();
	return 0;
}

void accept(void){
	int i = 0, N = 0, j = 0;
	int scores[10000][2] = {{0}, {0}};

	printf("\nEnter the number of rounds to be played: ");
	scanf("%d", &N);

	for(i = 1; i <= N; i ++) {
		printf("\nEnter the scores of Player1 and Player2 for round %d: \n", i);
		for(j = 0; j < 2; j ++) {
			scanf("%d", &scores[i - 1][j]);
		}
	}

	calculate(scores, N);
}

void calculate(int ar[10000][2], int n) {
	int i = 0, j = 0, winner = 0, max = 0;
	int lead[10000] = {0}, leader[10000] = {0};
	int arr[10000][2] = {{0}, {0}};

	arr[0][0] = ar[0][0];
	arr[0][1] = ar[0][1];
	for(i = 1; i < n; i ++) {
		arr[i][j] = ar[i][j] + arr[i - 1][j];
		arr[i][j + 1] = ar[i][j + 1] + arr[i - 1][j + 1];
	}

	for(i = 0; i < n; i ++) {
		if(arr[i][j] > arr[i][j + 1]) {
			leader[i] = 1;
			lead[i] = arr[i][j] - arr[i][j + 1];
		}
		else {
			leader[i] = 2;
			lead[i] = arr[i][j + 1] - arr[i][j];
		}
	}

	for(i = 0; i < n; i ++){
		if(lead[i] > max) {max = lead[i]; winner = leader[i];}
	}

	// printing result fo debugging
	j = 0;
	printf("\nRound\tPlayer1\tPlayer2\tLeader\tLead\n");
	for(i = 0; i < n; i ++) {
		printf("%d\t%d\t%d\t%d\t%d\n", (i + 1), arr[i][j], arr[i][j + 1], leader[i], lead[i]);
	}

	printf("\nThe winner is Player %d with %d points.\n", winner, max);
//	printf("%d %d\n", winner, max );
}