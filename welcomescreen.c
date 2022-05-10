#include<stdio.h>
#include<string.h>
#include<conio.h>
#include "project.h"

int main()
{
    printf("\t\t\t\t\tWELCOME TO THE DIGITAL ENCYCLOPEDIA!\n");
    printf("\n This program is best for the space enthusiasts, the space geeks and the astrophiles.");
	printf("\n So if you're one or two, we definietly got a thing for you :)\n");
    
    printf("\n\t\t\t              *PLEASE READ THE INSTRUCTIONS CAREFULLY*\n");
	printf("\n 1) Avoid any sort of spelling mistake.\n 2) Make Sure the Planets name are entered correct.\n 3) Program may end upon entering the wrong entity. ");
	printf("\n\n\t\t\t\t\t      HERE YOU GO THOR-ABLESTAR :)\n"); //name of a rocket.
	printf("                              *        \n");
	printf("                            *   *        \n");
	printf("                          *       *         \n");
	printf("                        * --------- *       \n");
	printf("                       *-------------*       \n");
	printf("                       *             *        \n");
	printf("                      **             **       \n");
	printf("                    *  *             *  *      \n");
	printf("                  *    *             *    *     \n");
	printf("                ********             ********   \n");
	printf("                       *             *        \n");
	printf("                       *             *        \n");
	printf("                       *             *        \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       *             *         \n");
	printf("                       ***************         \n");
	printf("                       ***************         \n");
	printf("                         *****  *****         \n");
	printf("                          |||    |||  \n");
	printf("                          |||    |||  ");
	
	
	printf("\n\n\nPlease enter your information\n\n");
    i = get_info();
	switch_project(&i);
	
    getch();
	return 0;
}
