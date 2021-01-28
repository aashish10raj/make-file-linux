//    FUNCTION TO SEARCH THE GIVEN RECORD
#include<stdio.h>
#include"header.h"
#include<stdlib.h>
struct student

   {

 int id, year, course;

     char name[30];

    

} stud;

            void stude()

            {

                FILE *fp2;

                int r, s;

                printf("\nEnter the coursecode you want to search  :");

                scanf("%d", &r);

                    fp2 = fopen("student.txt", "r");

                          while (fread(&stud, sizeof(stud), 1, fp2))

                              {

                                      s = stud.course;

                                       if (s == r)

                                             {

                                                    printf("\nid no = %d", stud.id);

                                                    printf("\nName    = %s", stud.name);

                                                    printf("\ncourse    = %d\n", stud.course);

                                              }

                                }

                     fclose(fp2);
                      }


