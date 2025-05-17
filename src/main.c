#include <stdio.h>
#include "editor.h"

/*
 * argv:
 * 0. command
 * 1. filename
 * etc. - nothing (not used)
 *
 * */

int main(int argc, char** argv) {
	FILE* file = fopen(argv[1], "r");
	if (!file) {
		printf("File does not exist");
	} else {
		printf("File exists");
	}

	return 0;
}
