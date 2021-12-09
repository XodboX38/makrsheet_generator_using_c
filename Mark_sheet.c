#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<time.h>
main(){
	int i;
	system("cls");
	char name[200],last_name[200],cls[200];
	int roll_num;
	printf("\n\n");
	printf("====================Mark Sheet Generator====================");
	int choice;
	again:
	printf("\n\n\t1. Generate your marksheet:\t");
	printf("\n\t2. See your saved your marksheet:\t");
	printf("\n\t3. EXIT\t");
	printf("\n\n\tEnter your choice:\t");
	scanf("%d",&choice);
	printf("\n\n************************************************************");
	switch(choice){
		case 1:
			//Declaring the name,lastname,class variable
			printf("\n\n\tFirst Name:\t");
			scanf("%s",&name);
			printf("\n\tLast Name:\t");	
			scanf("%s",&last_name);
			//printf("Your name is %s %s",name,last_name);
			printf("\n\tClass:\t\t");
			scanf("%s",&cls);
			printf("\n\tRoll Number:\t");
			scanf("%d",&roll_num);
			printf("\n************************************************************");
		break;
		case 2:
			printf("\n\n\tNo Saved Marksheet Here.");
			printf("\n\n************************************************************");
			goto again;
		break;
		case 3:
			printf("\n\n\tEXITING THE PROGRAM\n");
			printf("\n\n************************************************************");
			return -1;
		break;
		default:
			printf("\n\t*You have choose wrong option*\n*please choose the right one*");
			goto again;
		break;
	}
	
	printf("\n************************************************************");
	
	char subject[200][300];
	again_subject:
	printf("\n\n\tHow Many subjects you want to enter:\t");
	scanf("%d",&i);
	switch(i){
		case 0:
			printf("\n\n\t*Please enter the valid number of subject*");
		goto again_subject;
		break;
//		default:
//			printf("\n\n\t*Please enter the valid number of subject*");
//		break;
//			
	}
	int s=1;
	int subject_again;
	int number,marks[200],num_marks;
//	do{
//		printf("\n\tEnter the subject %d:\t",number);
//		scanf("%s",&subject[number]);
//		number++;
//		printf("\tEnter the Marks:\t");
//		scanf("%d",&marks[s]);
//		s++;
//	}
//	while(number<=i);
	system("cls");
	for(number=1;number<=i;number++){
		printf("\n\tEnter the %d subject:\t",number);
		scanf("%s",&subject[number]);
	}
	printf("\n************************************************************");
	system("cls");
	int marks_number;
	for(marks_number=1;marks_number<=i;marks_number++){
		printf("\n\tEnter the Marks for \"%s\":\t",subject[marks_number]);
		scanf("%d",&marks[marks_number]);
	}
	system("cls");
	
	printf("\n\n************************************************************");
	printf("\n\n\tMARKSHEET FOR THE STUDENT %s %s",name,last_name);
	printf("\n\n************************************************************");
	printf("\n\n\tNAME:\t\t%s %s",name,last_name);
	printf("\n\n\tCLASS:\t\t%s",cls);
	printf("\n\n\tROLL NUMBER:\t%d",roll_num);
	printf("\n\n************************************************************");
	printf("\n\tSr No.\t\tSUBJECT\t\t\tMARKS");
	printf("\n************************************************************");
	int j=1;
	int t;
	int k=1;
	for(k,j,t=1;k,j,t<=i;k++,j++,t++){
			printf("\n\t%d.\t\t%s\t\t\t%d",k,subject[j],marks[t]);
		}
	int total,sum=0;
	for(total=0;total<=i;total++){
		sum = sum+marks[total];
	}
	float percent;
	float half_percent;
	float full_percent;
	half_percent=(i*100);
	percent=(sum/half_percent)*100;
//	percent=(sum/i);
	float cgpa;
	cgpa =percent/9.5;
	printf("\n\n************************************************************");
	printf("\n\t\t\tTotal\t\t\t%d",sum);
	printf("\n\t\t\tPercentage\t\t%2.2f%%",percent);
	printf("\n\t\t\tCGPA\t\t\t%2.2f",cgpa);
	printf("\n************************************************************");
	time_t date;
	time(&date);
	printf("\nThis marksheet is gengerated on %s",ctime(&date));
	printf("\n************************************************************");
	conti: ;
	int yugal;
	printf("\n1:-Continue");
	printf("\n2:-Exit");
	printf("\nEnter your choice:\t");
	scanf("\nEnter your choice:\t%d",&yugal);
	switch (yugal){
		case 1:
			goto again;
			system("cls");
			break;
		case 2:
			return -1;
			break;
		default:
			printf("Please choose a valid option.");
			goto conti; 
	}
	printf("\n\n\n\n\n\n");
}
