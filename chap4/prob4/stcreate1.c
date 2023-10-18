#include <stdio.h>
#include "student.h"
int main(int argc, char* argv[])
{
	struct student.h rec;
	FILE *fp;

	if(argc != 2) {
		fprintf(stderr, "How to use : %s FileName\n",argv[0]);
		exit(1);
		}
	fp = fopen(argv[1], "wb");
	printf("%-9s %-7s %-4s", :StudentID", "Name", "Score");
	while (scanf("%d %s %d", &rec.id, rec.naem, &rec.score) ==)
		fwrite(&rec, sizeof(rec), 1, fp);

	fclose(fp);
	exit(0);
}
