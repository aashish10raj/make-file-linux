//  FUNCTION TO INSERT RECORDS TO THE FILE
#include<stdio.h>
#include"header.h"
#include<stdlib.h>
struct student

   {

 int id, year, course;

     char name[30];

    

} stud;


      void insert()

{

          FILE *fp;

           fp = fopen("student.txt", "a");

           printf("Enter the id no   :");

           scanf("%d", &stud.id);

           printf("Enter the Name      :");

           scanf("%s", stud.name);

           printf("Enter the year      :");

           scanf("%d", &stud.year);
           
           printf("Enter the courscode      :");

           scanf("%d", &stud.course);

           fwrite(&stud, sizeof(stud), 1, fp);
            fclose(fp);

             }
