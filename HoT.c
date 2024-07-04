#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

int main(){
	char name[20];
	int headsCount = 0;		// counter for heads
	int tailsCount = 0;			// counter for tails
	time_t t;
	
	// get the player's name
	printf("Who are you? \n");
	fflush(stdout);
	fgets(name, 20, stdin);
	name[strlen(name) - 1] = 0;	// remove newline from name
	printf("Hello, %s! \n", name);

	srand((unsigned) time(&t));		// initialize random number generator
  
	// imitate 3 rounds of coin flip by generating 0 or 1 randomly
	// 0 for heads, 1 for tails
	printf("Tossing a coin...\n");
	for (int i = 1; i < 4; i++) {
		if (rand() % 2 != 1)	{
			headsCount++;
			printf("Round %d: Heads\n", i);
		} else {
			tailsCount++;
			printf("Round %d: Tails\n", i);
		} 
	}

	printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);
	return 0;
}
