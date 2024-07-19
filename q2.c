#include<stdio.h>
#include<conio.h>

void main()

{
		int choice;
		printf("vodaphone service center\n");
		printf("press 1 for english\n");
		printf("press 2 for hindi\n");
		printf("press 3 for gujarati\n");
		
		printf("Enter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		
		{
			
			case 1 :printf("press 1 for internet recharge\n");
					printf("press 2 for top-up  recharge\n");
			        printf("press 3 for spacial  recharge\n\n");
			
			printf("enter your choice");
			scanf("%d",&choice);
			
						
			switch(choice)
		
			{
			 case 1 :printf("you have successfully done a internet recharge. ");
				break ;
				case 2 :printf("you have successfully done a top-up recharge. ");
				break ;
				case 3 :printf("you have successfully done a spacial recharge. ");
				break ;
				defualt:printf("invalid input");
				
				
				
			}
			
		
			break ;
			case 2 :printf("Internet Recharge ke liye 1 dabaiye\n");
					printf("Top-up Recharge ke liye 2 dabaiye\n");
					printf("Special Recharge ke liye 3 dabaiye\n\n");
			
			printf("enter your choice");
			scanf("%d",&choice);
			
			switch(choice)
			{
			
			
			    case 1 :printf("Aapne safaltapurvak Internet Recharge kar liya he. ");
				break ;
				case 2 :printf("Aapne safaltapurvak top-up Recharge kar liya he. ");
				break ;
				case 3 :printf("Aapne safaltapurvak spacial Recharge kar liya he. ");
				break ;
				default :printf("invalid input");
				
		   }
			break ;
				case 3 :printf("Internet Recharge mate 1 dabavo\n");
						printf("Top-up Recharge mate 2 dabavo\n");
						printf("Special Recharge mate 3 dabavo\n");
				
				printf("enter your choice");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1 :printf("Tame safaltapurvak internet Recharge karyu chhe. ");
				break ;
				case 2 :printf("Tame safaltapurvak top-up Recharge karyu chhe. ");
				break ;
				case 3 :printf("Tame safaltapurvak Special Recharge karyu chhe. ");
				break ;
				default:printf("invalid input");
				
				}
			}
		}
	
