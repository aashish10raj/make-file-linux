#include<stdio.h>
#include"header.h"
#include<stdlib.h>
//    FUNCTION TO DISPLAY RECORDS
struct student

   {

 int id, year, course;

     char name[30];

     

} stud;

void disp()

          {

               FILE *fp1;

               fp1 = fopen("student.txt", "r");

               printf("\nId\tName\tYear\tCourse\n\n");

               while (fread(&stud, sizeof(stud), 1, fp1))

               printf("  %d\t\t%s\t%d\t%d\n", stud.id, stud.name, stud.year, stud.course);

              fclose(fp1);

            }
