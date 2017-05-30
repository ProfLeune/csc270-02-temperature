#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convert(double temp, char scale) {
    /* write this function */
}

int main(int argc, char *argv[]) {
	double temp;

	// check for the correct command line arguments. Program must be run as
	// ./temp 68 f
	if (argc != 3) {
		fprintf(stderr, "Unable to convert temperature.\n");
		fprintf(stderr, "Usage: %s temp scale.", argv[0]);
		return 1;
	}

	temp = atof(argv[1]);
	convert(temp, toupper(argv[2][0]));
	return 0;
}
