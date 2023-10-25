#include <stdio.h>
#include "student.h"
int main(int argc, char* argv[]) {
    struct student rec; FILE *fp;
    if (argc != 2) {
        fprintf(stderr, "How to use: %s FileName\n", argv[0]);
        return 1; }
    fp = fopen(argv[1], "r");
    printf("%-1s %-7s %-7s %-4s %-7s %-7s\n", "ID", "bookName", "author", "year", "num", "borrow");
    while (fscanf(fp,"%d %s %s %d %d %s", &rec.id, rec.name, rec.author, &rec.year, &rec.num, rec.borrow) == 6)
        printf("%d %s %s %d %d %s", rec.id, rec.name, rec.author, rec.year, rec.num, rec.borrow);
    fclose(fp);
    return 0; 
}