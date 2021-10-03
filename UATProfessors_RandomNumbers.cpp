/*
	Author: Max Edward
	Email: maxedwar@uat.edu
	Assignment Name: UAT Professors & Random Numbers
*/

// Random Numbers, Arrays, and Sound in C++

//These bring in the iostream, std I/O, ctime, and cstdlib for console readout as well reading the computer time for our "random" number.
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

int main() {
	char endChoice;
	const char* profAry[10] = { "Maureen Beam","Sharon Bolman","Brad Bowling","David Brokaw","Derric Clark","Jill Coddington","Nathan Glover","Alan Hromas","Kendra Kim","Adam Moore" };
	const char* roomAry[10] = { "106","107","108","135","252","253","245","244","232","231" };
	srand(time(0));

gameStart:
	printf("\n------------------------------------\n\n");
	printf("Welcome to the UAT Campus Classroom Tour by Max Edward\n\n");
	printf("There are 10 different classrooms and 10 different professors to see.\n");
	printf("Once you press a button, the professors will randomly get placed into a random classroom.\n");
	printf("\n------------------------------------\n");
	system("pause"); // Pause to make sure the player is ready to play. Almost like a "Click start to start game".

	printf("\nHello! Thanks for coming to UAT!\n");
	printf("We have a handful of professors here today.\n");
	printf("Here's a list of whos here and where they are at:\n");
	for (int i = 0; i < 10; ++i) {
		int rnd = rand() % 10;
		printf("\nProfessor %s", profAry[rnd]);
		printf(" is in room %s.\n", roomAry[rnd]);
	}
	printf("\n");

	printf("Thanks for stopping by UAT. We hope you enjoyed meeting the professors.\n");
	endChoice:
	printf("\nTo see them again, type R to restart. To quit, type Q.\n\n");
	std::cin >> endChoice;
	if (endChoice == 'r' || endChoice == 'R') {
		goto gameStart;
	}
	if (endChoice == 'q' || endChoice == 'Q') {
		return 0;
	}
	else {
		goto endChoice;
	}
}