#include <stdio.h>
#include <string.h>
#include "copy.h"

char line[MAXLINE];
char longest[MAXLINE];

int main(){
        int len;
        int max = 0;
	int value[5];

        while(fgets(line,MAXLINE,stdin) != NULL) {
                len = strlen(line);
		value[i] = len;
                if(len > max) {
                        max = len;
                        copy(line, longest);
                        }
                }
        if(max > 0)
                printf("%s\n", longest);
	printf("%s\n", value[1]);
	printf("%s\n", value[2]);
	printf("%s\n", value[3]);
	printf("%s\n", value[4]);
        return 0;
}

