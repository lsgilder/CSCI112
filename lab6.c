#include <stdio.h>
#include <string.h>

void one_ele_subs(char *str) {
	
	printf("{%c}\n", str[0]);

	if(strlen(str) > 1) {
		one_ele_subs(&str[1]);
	}
}

void two_ele_subs(char *str) {
	int i;

	for(i = 0; i < (strlen(str) - 1); i++) {
		printf("{%c, %c}\n", str[0], str[i+1]);
	}

	if(strlen(str) > 2) {
		two_ele_subs(&str[1]);
	}
}

void three_ele_subs(char *str) {
	int i, j;

	for(i = 0; i < (strlen(str) - 2); i++) {
		for(j = (i + 1); j < (strlen(str) - 1); j++) {
			printf("{%c, %c, %c}\n", str[0], str[i+1], str[j+1]);
		}
	}

	if(strlen(str) > 3) {
		three_ele_subs(&str[1]);
	}
}

int main(int argc, char **argv) {
    //checks for valid input
    if(argc == 1 || strlen(argv[1]) != 4) {
	printf("Invalid input string\n");
	return(0);
    }

    //calls other functions
	printf("one_ele_subs\n(\"%s\")\n", argv[1]);
    one_ele_subs(argv[1]);
	printf("\ntwo_ele_subs\n(\"%s\")\n", argv[1]);
    two_ele_subs(argv[1]);
	printf("\nthree_ele_subs\n(\"%s\")\n", argv[1]);
    three_ele_subs(argv[1]);

    return(0);
}
