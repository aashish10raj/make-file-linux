#include<stdio.h>
#include"header.h"
#include<stdlib.h>


struct student

   {

 int id, year, course;

     char name[30];

     

} stud;
  // MAIN PROGRAM

       void main()

           {


              printf(" TITLE : STUDENT DATABASE SYSTEM \n\n");
              

              int c;

              do

                    {
  printf("\n\t---Select your choice---------\n");

                       printf("\n\t1. INSERT\n\t2. DISPLAY\n\t3. SEARCH by id");
                       
                       printf("\n\t4. Search by year\n\t5. Search by course");

                       printf("\n\t6. EXIT");

                       printf("\n\n------------------------------------------\n");

                       printf("\nEnter your choice:");

                       scanf("%d", &c);

                       printf("\n");

                         switch (c)

                             {

                                case 1:
   insert();

                                               break;

                                case 2:
                                                    
                                                  disp();

                                                break;

                                case 3:
   course();//search a record

                                                break;
                                  case 4:
   year();//search a record

                                                break;
                                                
                                                case 5:
   stude();//search a record

                                                break;

                               

                                

                                

                                case 6:
 exit(1);

                                                break;

                                default:
   printf("\nYour choice is wrong\nPlease try again...\n");

                                              break;


                                                  }

                                            }
                   while (c != 6);



}

    

