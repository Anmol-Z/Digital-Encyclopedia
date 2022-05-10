#include<stdio.h>
#include<string.h>
#include<conio.h>

typedef struct info{
    char email[40];
    char name[25];
    char contact[13];
}info;

info i;
FILE *fptr;
char a[1000],planet[10];
char c; // for selection of options


void weight();
void compare_planets();
info get_info();
void intro_func(char name[25]);
void jokes(int );
void switch_project(info *);
void facts();
void celestial_info();
void planet_info();
void ss_info();
void feedback(info *);


void weight()
{
	printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");
	printf("Welcome!! You can successfully measure how much you weigh on another planet.\n");
	float mass, w;
	char planet[10];
	printf("Please enter your mass (Kgs): ");
	scanf("%f",&mass);
	fflush(stdin);
	printf("Enter the name of the planet (Other than Earth): ");
	gets(planet);

	if((strcmp(planet,"Earth") == 0) || (strcmp(planet,"earth") == 0))
	{
		printf("\nPlease re-enter your info! Thank you.\n");
		fflush(stdin);
		printf("\n\n");
		weight();
	}

	if((strcmp(planet,"Mercury") == 0) || (strcmp(planet,"mercury") == 0))
	{
		w = 3.7;
	}
	else if((strcmp(planet,"Venus") == 0) || (strcmp(planet,"venus") == 0))
	{
		w = 8.87;
	}
	else if((strcmp(planet,"Mars") == 0) || (strcmp(planet,"mars") == 0))
	{
		w = 3.711;
	}
	else if((strcmp(planet,"Jupiter") == 0) || (strcmp(planet,"jupiter") == 0))
	{
		w = 24.79;
	}
	else if((strcmp(planet,"Saturn") == 0) || (strcmp(planet,"saturn") == 0))
	{
		w = 10.44;
	}
	else if((strcmp(planet,"Uranus") == 0) || (strcmp(planet,"uranus") == 0))
	{
		w = 8.87;
	}
	else if((strcmp(planet,"Neptune") == 0) || (strcmp(planet,"neptune") == 0))
	{
		w = 11.15;
	}

	printf("You weigh %.3fN on Earth\nYou weigh %.3fN on %s...wow!\n",(9.807 * mass),(w * mass),planet);

	fflush(stdin);
	printf("\nYou can also calculate your BMI. Press Y for Yes: ");
	scanf(" %c",&c);

	if (c == 'Y')
	{
		printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");

		// Starvation: less than 15
		// Underweight: less than 18.5
		// Ideal: greater than or equal to 18.5 but less than 25
		// Overweight: greater than or equal to 25 but less than 30
		// Morbidly Obese: greater than or equal to 40

		float height, bmi=0, foot = 0.3048, cm = 0.01;
		// text{BMI}=\frac{m} {{h}^2} ----> formula of BMi in KGs
		printf("\t\t\t\t\tTHIS PROGRAM CALCULATES YOUR BMI\n");

		int u; // for unit selection
		fflush(stdin);
		printf("\nPlease select the unit of your height.\nPress\n\t1 for meters (m)\n\t2 for centi-meters (cm)\n\t3 for feet (ft)\nInput: ");
		scanf("%d",&u);

		switch(u)
		{
			case 1:
			{
				fflush(stdin);
				printf("\nPlease enter your height in meters (m): ");
				scanf("%f",&height);
				break;
			}
			case 2:
			{
				fflush(stdin);
				printf("\nPlease enter your height in centi-meters (cm): ");
				scanf("%f",&height);

				height = height * cm;

				break;
			}
			case 3:
			{
				fflush(stdin);
				printf("\nPlease enter your height in feet (ft): ");
				scanf("%f",&height);

				height = height * foot;

				break;
			}
			default:
			{
				fflush(stdin);
				printf("\nWrong input!\n\nPlease enter your height in meters (m): ");
				scanf("%f",&height);
				break;
			}
		}

		height = height * height; // Sq of height

		bmi = mass / height;
		if (bmi < 15)
		{
			printf("Since your BMI is: %.2f.\nYou are categorized as: STARVATION\n", bmi);
			
		}
		else if (bmi < 18.5)
		{
			printf("Since your BMI is: %.2f.\nYou are categorized as: UNDERWEIGHT\n", bmi);
		
		}
		else if ((bmi >= 18.5) && (bmi < 25))
		{
			printf("Since your BMI is: %.2f.\nYou are categorized as: IDEAL\n", bmi);
		}
		else if ((bmi >= 25) && (bmi < 30))
		{
			printf("Since your BMI is: %.2f.\nYou are categorized as: OVERWEIGHT\n", bmi);
		}
		else if ((bmi >= 30) && (bmi < 39.99))
		{
		printf("Since your BMI is between 30 - 40: %.2f.\nYou are uncategorized.\n", bmi);
		}
		else
		{
			printf("Since your BMI is: %.2f.\nYou are categorized as: MORBIDLY OBESE\n", bmi);
		}
	}

	switch_project(&i);
}

void compare_planets()
{
	fflush(stdin);
    
	printf("\t\t\t\t\t\t   COMPARISON \n");
	printf("\n\t\txxx-------------------------------------------------------------------xxx\n");
	printf("\t\t\t\tCOMPARISON OF THE PROPERTIES OF THE PLANETS\n");
	printf("\n\nEnter the name of the planet you want to compare with Earth (for ex. 'Mars'): ");
	gets(planet);
	
	if((strcmp(planet,"Mercury") == 0) || (strcmp(planet,"mercury") == 0))
	{
		fptr= fopen("mercury cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Venus") == 0) || (strcmp(planet,"venus") == 0))
	{
		fptr= fopen("venus cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Mars") == 0) || (strcmp(planet,"mars") == 0))
	{
		fptr= fopen("mars cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Jupiter") == 0) || (strcmp(planet,"jupiter") == 0))
	{
		fptr= fopen("jupiter cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Saturn") == 0) || (strcmp(planet,"saturn") == 0))
	{
		fptr= fopen("saturn cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Uranus") == 0) || (strcmp(planet,"uranus") == 0))
	{
		fptr= fopen("uranus cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Neptune") == 0) || (strcmp(planet,"neptune") == 0))
	{
		fptr= fopen("neptune cmp.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}

	fflush(stdin);

	printf("\n\nDo you want to compare another planet?\nPress Y for Yes & N for No: ");
	scanf(" %c",&c);

	if(c == 'Y')
    {
        fflush(stdin);
		printf("\n");
        compare_planets();
    }
    else
    {
        fflush(stdin);
		printf("\n\n");
        switch_project(&i);
    }
}

info get_info()
{
    info i;

    printf("Kindly provide us with your:\nE-mail address: ");
    gets(i.email);
	fflush(stdin);
    printf("Name: ");
    gets(i.name);
	fflush(stdin);
    printf("Contact no. (Format: 03xxxxxxxxx): ");
    gets(i.contact);
    fflush(stdin);
    
    return i;
}

void intro_func(char name[25])
{
    char intro; // for introduction
    printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");
    printf("\nHello %s,\nWe hope you are doing well.\n\t\t\t\t\tWelcome to the digital encyclopedia.\n\nPress A for introduction: ",name);
    scanf(" %c",&intro);

    switch (intro)
    {
        case 'A':
        {
            printf("\nThe planetary system we call home is located in an outer spiral arm of the Milky Way galaxy.\nOur solar system consists of our star, the Sun, and everything bound to it by gravity ""-"" the\nplanets Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus and Neptune, dwarf planets such\nas Pluto, dozens of moons and millions of asteroids, comets and meteoroids.\n");
			break;
        }
        default:
        {
			int num; // for making the function recurrsive

            printf("\nYou entered a wrong letter, sorry!\nTo re-enter press '1' or '0' to get to the homescreen: ");
            scanf("%d",&num);
            if(num == 1)
            {
                fflush(stdin);
				printf("\n\n");
                intro_func(name);
            }

            if(num == 0)
            {
				fflush(stdin);
				printf("\n\n");
                switch_project(&i);
            }

            break;
        }
    }

	fflush(stdin);
	printf("\nAre you interested in a detailed information about the Solar System? Press Y for Yes & N for No: ");
	scanf(" %c",&c);

	if(c == 'Y')
	{
		fflush(stdin);
		printf("\n");
		ss_info();
	}
	else
	{
		fflush(stdin);
		printf("\n\n");
		switch_project(&i);
	}
}

void jokes(int line)
{
	printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");
	if(line > 40)
	{
		line = 0;
	}
    int count = 0;
    char l[256];

    FILE *file = fopen("jokes.txt", "r");

	if ( file != NULL )
    {   
        while (fgets(l, sizeof l, file) != NULL)
        {
            if (count == line)
            {
                printf("%s",l);
                fclose(file);
                line++;
            }
            else
            {
                count++;
            }
        }
    }   
	else
	{
		printf("The file could not be opened!\n");
	}

    fflush(stdin);
    printf("\nDo you want to hear another joke? Y for Yes & N for No.\nEnter: ");
    scanf(" %c",&c);
    if(c == 'Y')
    {
        fflush(stdin);
		printf("\n");
        jokes(line);
    }
    else
    {
        fflush(stdin);
		printf("\n\n");
        switch_project(&i);
    }
}

void switch_project(info *i)
{
	int menu;
	printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");
	printf("\n\n\t\t\t                     WELCOME TO THE MAIN MENU");
	printf("\n\nPress\n");
	printf("1 to get a quick introduction.\n");
	printf("2 to get the complete knowledge.\n");
	printf("3 to know facts about planets.\n");
	printf("4 to compare the planets.\n");
	printf("5 to check your weight on different planets.\n");
	printf("6 to lighten your mood with some planet-alien jokes.\n");
	printf("\nPRESS 0 TO PROVIDE US FEEDBACK AND END THE PROGRAM.\n");
	printf("\n\tInput: ");
	scanf("%d",&menu);

	switch (menu)
	{
		case 1:
		{
			intro_func(i->name);
			break;
		}
		case 4:
		{
			compare_planets();
			break;
		}
		case 6:
		{
			jokes(0);
			break;
		}
		case 3:
		{
			facts();
			break;
		}
		case 2:
		{
			selection_info();
			break;
		}
		case 5:
		{
			weight();
			break;
		}
		case 0:
		{
			feedback(i);
			break;
		}
		default:
		{
			printf("\n\nIncorrect input! Enter again.\n");
			fflush(stdin);
			printf("\n\n");
			switch_project(&i);
			break;
		}
	}
}

void facts()
{
	printf("\n\t\txxx-------------------------------------------------------------------xxx\n");
	printf("\nSearching for some space facts?\nYou're in the right place!\n\n");

	fflush(stdin);
	printf("Enter the name of the planet (for ex. 'Uranus'): ");
	gets(planet);

	if((strcmp(planet,"Mercury") == 0) || (strcmp(planet,"mercury") == 0))
	{
		fptr = fopen("Facts Mercury.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets(a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Venus") == 0) || (strcmp(planet,"venus") == 0))
	{
		fptr = fopen("Facts Venus.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Earth") == 0) || (strcmp(planet,"earth") == 0))
	{
		fptr = fopen("Facts Earth.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Mars") == 0) || (strcmp(planet,"mars") == 0))
	{
		fptr = fopen("Facts Mars.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Jupiter") == 0) || (strcmp(planet,"jupiter") == 0))
	{
		fptr = fopen("Facts Jupiter.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Saturn") == 0) || (strcmp(planet,"saturn") == 0))
	{
		fptr = fopen("Facts Saturn.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Uranus") == 0) || (strcmp(planet,"uranus") == 0))
	{
		fptr = fopen("Facts Uranus.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}
	else if((strcmp(planet,"Neptune") == 0) || (strcmp(planet,"neptune") == 0))
	{
		fptr = fopen("Facts Neptune.txt", "r");

		if(fptr == NULL)
		{
			printf("The file could not be opened!\n");
		}
		else
		{
			while(fgets( a, 1000, fptr) != NULL)
			printf("%s",a);
			fclose(fptr);
		}
	}

	fflush(stdin);
	printf("\n\nDo you want to know facts about another planet?\nPress Y for Yes & N for No: ");
	scanf(" %c",&c);

	if(c == 'Y')
    {
        fflush(stdin);
		printf("\n");
        facts();
    }
    else
    {
        fflush(stdin);
		printf("\n\n");
        switch_project(&i);
    }
}

void planet_info()
{	
	printf("\n\t\txxx-------------------------------------------------------------------xxx\n");

		printf("\nYOU WILL GET A COMPLETE KNOWLEDGE OF ALL THE PLANETS HERE!\n");

		fflush(stdin);
		printf("\nEnter the name of the planet (for ex. 'Venus'): ");
		gets(planet);
		
		if((strcmp(planet,"Mercury") == 0) || (strcmp(planet,"mercury") == 0))
		{
			fptr= fopen("Mercury.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Venus") == 0) || (strcmp(planet,"venus") == 0))
		{
			fptr= fopen("Venus.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Earth") == 0) || (strcmp(planet,"earth") == 0))
		{
			fptr = fopen("Earth.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Mars") == 0) || (strcmp(planet,"mars") == 0))
		{
			fptr= fopen("Mars.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Jupiter") == 0) || (strcmp(planet,"jupiter") == 0))
		{
			fptr= fopen("Jupiter.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Saturn") == 0) || (strcmp(planet,"saturn") == 0))
		{
			fptr= fopen("Saturn.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Uranus") == 0) || (strcmp(planet,"uranus") == 0))
		{
			fptr= fopen("Uranus.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
		else if((strcmp(planet,"Neptune") == 0) || (strcmp(planet,"neptune") == 0))
		{
			fptr= fopen("Neptune.txt", "r");

			if(fptr == NULL)
			{
				printf("The file could not be opened!\n");
			}
			else
			{
				while(fgets( a, 1000, fptr) != NULL)
				printf("%s",a);
				fclose(fptr);
			}
		}
	
	fflush(stdin);
	printf("\n\nDo you want to read about another Planet?\nPress Y for Yes & N for No: ");
	scanf(" %c",&c);
	
	if(c == 'Y')
		{
			fflush(stdin);
			printf("\n");
			planet_info();
		}
		else if(c == 'N')
		{
			fflush(stdin);
			printf("\nDo you want to read about Celestials?\nPress Y for Yes & N for No: ");
			scanf(" %c",&c);

			if(c == 'Y')
			{
				fflush(stdin);
				printf("\n\n");
				celestial_info();
			}
			else
			{
				fflush(stdin);
				printf("\n\n");
				switch_project(&i);
			}
		}
}

void celestial_info()
{
		printf("\n\t\txxx-------------------------------------------------------------------xxx\n");
		printf("\nYOU WILL GET A COMPLETE KNOWLEDGE OF CELESTIAL BODIES HERE!\n");
		printf("\nPRESS\n");
		printf("1 for Comets\n");
		printf("2 for Asteroids\n");
		printf("3 for Meteoroids\n");
		printf("Input: ");
		fflush(stdin);
		int celestial;
		scanf("%d",&celestial);

		switch (celestial)
		{
			case 1:
			{
				fptr= fopen("Comets.txt", "r");

				if(fptr == NULL)
				{
					printf("The file could not be opened!\n");
				}
				else
				{
					while(fgets( a, 1000, fptr) != NULL)
					printf("%s",a);
					fclose(fptr);
				}

				break;
			}
			case 2:
			{
				fptr= fopen("Asteroids.txt", "r");

				if(fptr == NULL)
				{
					printf("The file could not be opened!\n");
				}
				else
				{
					while(fgets( a, 1000, fptr) != NULL)
					printf("%s",a);
					fclose(fptr);
				}
				
				break;
			}
			case 3:
			{
				fptr= fopen("Meteoroids.txt", "r");

				if(fptr == NULL)
				{
					printf("The file could not be opened!\n");
				}
				else
				{
					while(fgets( a, 1000, fptr) != NULL)
					printf("%s",a);
					fclose(fptr);
				}
				
				break;
			}
			default:
			{
				printf("\nIncorrect input.\n");
				break;
			}
		}

		fflush(stdin);
		printf("\n\nDo you want more about Celestials?\nPress Y for Yes & N for No: ");
		scanf(" %c",&c);

		if(c == 'Y')
		{
			fflush(stdin);
			printf("\n");
			celestial_info();
		}
		else if(c == 'N')
		{
			fflush(stdin);
			printf("\nDo you want to know more about planets?\nPress Y for Yes & N for No: ");
			scanf(" %c",&c);

			if(c == 'Y')
			{
				fflush(stdin);
				printf("\n\n");
				planet_info();
			}
			else
			{
				fflush(stdin);
				printf("\n\n");
				switch_project(&i);
			}
		}
}

void selection_info()
{
	int x; // for option selection
	printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");

	fflush(stdin);
	printf("\n\nWhat are you looking for?\nPress\n1 for detailed information about the Solar System.\n2 for detailed information about the Planets\n3 for detailed information about the Celestial Bodies.\nInput: ");
	scanf("%d", &x);

	if(x == 1)
	{
		fflush(stdin);
		printf("\n");
		ss_info();
	}
	else if(x == 2)
	{
		fflush(stdin);
		printf("\n");
		planet_info();
	}
	else if(x == 3)
	{
		fflush(stdin);
		printf("\n");
		celestial_info();
	}
	else
	{
		printf("\n\nWrong input! Please enter again.\n");
		fflush(stdin);
		printf("\n");
		selection_info();
	}
}

void ss_info()
{
	printf("\n\t\t\txxx-------------------------------------------------------------------xxx\n\n");
	
	fptr= fopen("Solar System.txt", "r");

	if(fptr == NULL)
	{
		printf("The file could not be opened!\n");
	}
	else
	{
		while(fgets( a, 1000, fptr) != NULL)
		printf("%s",a);
		fclose(fptr);
	}

	fflush(stdin);
	printf("\n\nDo you want to know more about the planets?\nPress Y for Yes & N for No: ");
	scanf(" %c",&c);

	if(c == 'Y')
	{
		fflush(stdin);
		printf("\n");
		planet_info();
	}
	else if(c == 'N')
	{
		fflush(stdin);
		printf("\nDo you want to know about Celestials?\nPress Y for Yes & N for No: ");
		scanf(" %c",&c);
		
		if(c == 'Y')
		{
			fflush(stdin);
			printf("\n\n");
			celestial_info();
		}
		else
		{
			fflush(stdin);
			printf("\n\n");
			switch_project(&i);
		}
	}
}

void feedback(info *i)
{
	char str[1000];
	printf("\n\t\txxx-------------------------------------------------------------------xxx\n");
	printf("\nPlease provide your feedback of our program! Thank you.\n");

	fptr = fopen("Feedback.txt","a+");

	if(fptr == NULL)
	{
		printf("The file could not be opened!\n");
		feedback(i);
	}
	else
	{
		fprintf(fptr,"THANK YOU FOR USING OUR APP!!\n\nName: %s\nContact Number: %s\nE-mail: %s\n\n",i->name,i->contact,i->email);
		printf("Q1. What did you like the most about our app?\n");
		fflush(stdin);
		fprintf(fptr,"Q1. What did you like the most about our app?\n");
		gets(str);
		fprintf(fptr,"Ans. %s\n",str);

		printf("Q2. Tell us about the features you would like to use in our app?\n");
		fflush(stdin);
		fprintf(fptr,"Q2. Tell us about the features you would like to use in our app?\n");
		gets(str);
		fprintf(fptr,"Ans. %s\n",str);

		printf("Q3. What problem/goal are you trying to solve/achieve with the app?\n");
		fflush(stdin);
		fprintf(fptr,"Q3. What problem/goal are you trying to solve/achieve with the app?\n");
		gets(str);
		fprintf(fptr,"Ans. %s\n",str);

		printf("Q4. How satisfied are you with the stability of the app? (scale of 1-5)\n");
		fflush(stdin);
		fprintf(fptr,"Q4. How satisfied are you with the stability of the app? (scale of 1-5)\n");
		gets(str);
		fprintf(fptr,"Ans. %s\n",str);

		printf("Q5. Did we solve/answer your issue/question? (yes or no)\n");
		fflush(stdin);
		fprintf(fptr,"Q5. Did we solve/answer your issue/question? (yes or no)\n");
		gets(str);
		fprintf(fptr,"Ans. %s\n\n\n",str);
	}

	return 0;
}
