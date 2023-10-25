#include <stdio.h>
#include "student.h"
int main(int argc, char* argv[])
{
	struct student rec;
	FILE *fp;
	
	if (argc!= 2) {
		fprintf(stderr, "How to use: %s FileName\n", argv[0]);
		return 1;
	}

	fp = fopen(argv[1], "w");
    printf("%-1s %-7s %-8s %-4s %-1s %-5s\n", "책 고유 번호", "책 이름", "저자 이름", "출판년도", "대출 횟수", "대출 유무");
	while (scanf("%d %s %s %d %d %s", &rec.id, rec.name, rec.author, &rec.year, &rec.num, rec.borrow) == 6)
		fprintf(fp,"%d %s %s %d %d %s", rec.id, rec.name, rec.author, rec.year, rec.num, rec.borrow);
	fclose(fp);
	return 0;
}

