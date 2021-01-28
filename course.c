//    FUNCTION TO SEARCH THE GIVEN RECORD
#include<stdio.h>
#include"header.h"
#include<stdlib.h>
struct student

   {

 int id, year, course;

     char name[30];

    

} stud;

            void course()

            {

                FILE *fp2;

                int r, s;

                printf("\nEnter the id no you want to search for the course taken by him  :");

                scanf("%d", &r);

                          fp2 = fopen("student.txt", "r");

                          while (fread(&stud, sizeof(stud), 1, fp2))

                              {

                                      s = stud.id;

                                       if (s == r)

                                             {

                                                    printf("\nDid no = %d", stud.id);

                                                    printf("\nName    = %s", stud.name);

                                                    printf("\ncourse    = %d\n", stud.course);

                                              }

                                }

                     fclose(fp2);
                      }


