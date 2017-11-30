#include <stdio.h>
#include <string.h>
int main()
{
	char force[2],mass[2],acc[2];
	float f,m,a;
	
	printf("welcome to the simple f = ma calculator!\nwhen prompted, please use 'y' for yes and 'n' for no. otherwise, i will be sad.\n");

	printf("do you know forces acting upon the object? y/n\n");
	scanf("%s",&force);
	
	printf("do you know the mass of the object? y/n\n");
	scanf("%s",&mass);	
	
	printf("do you know the acceleration of the object? y/n\n");
	scanf("%s",&acc);
	
	if(strcmp(mass, "y") == 0 && strcmp(acc, "y") == 0 && strcmp(force, "n") == 0 ){
		
		printf("NOTE:\nwith this info, i cannot give you the composition of forces. i can only give you the net force\n");
		printf("with that...\n");
		
		printf("what is the acceleration(vector) of the object in m/s/s?\n");
		scanf("%f",&a);
		
		printf("what is the mass of the object in kilograms\n");
		scanf("%f",&m);
		
		f = m*a;
		
		printf("the sum of all forces acting on the object is %.3fN",f);
		
	}
	
	return 0;
	//test printf
	//printf("%s %s %s"force,mass,acc);
}
