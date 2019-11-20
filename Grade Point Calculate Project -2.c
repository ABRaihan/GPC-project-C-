#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[100];
	int roll,csemid,csea_b,csec_t,csep_a,csefinal,
        csetotal,phymid,phya_b,phyc_t,phyp_a,phyfinal,phytotal,
		mathmid,matha_b,mathc_t,mathp_a,mathfinal,mathtotal;
}student;


void main()
{
	FILE *file;
	int n,i,batch,again,choice,semester52,semester53;
	student s[n];
	char rshow;

	// this is our university name
	printf("\t\t\t..................Dhaka International University..................\n\n\n");
	// this is instruction for users
	printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

	// teacher choice section
	mark_result:
	printf("1.Input mark\n2.See result\n\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	system("cls");


	if(choice==1)// teacher choice condition(mark result)statement
	{
		// this is our university name
		printf("\t\t\t..................Dhaka International University..................\n\n\n");
		// this is instruction for users
		printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

		batch_choice:
		printf("Sir,Which batch's numbers do you want to mark?\n\n");
		printf("1:52nd(Day)\n");
		printf("2:53rd(Day)\n\n");

		printf("Please Sir,Enter your choice:");
		scanf("%d",&batch);

		system("cls");

		//52nd(day) batch student section start form here
		if(batch==1)// this is 52nd batch choice condition statement
		{
			// this is our university name
			printf("\t\t\t..................Dhaka International University..................\n\n\n");
			// this is instruction for users
			printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

			semester52:
			printf("Which semester mark are you want to add(don't use 0 before input choice):");
			scanf("%d",&semester52);

			// 52nd batch file opening condition statement
			if(semester52==1)
				file=fopen("1st semester 52nd.txt","w");

			else if(semester52==2)
				file=fopen("2nd semester 52nd.txt","w");

			else if(semester52==3)
				file=fopen("3rd semester 52nd.txt","w");

			else if(semester52==4)
				file=fopen("4th semester 52nd.txt","w");

			else if(semester52==5)
				file=fopen("5th semester 52nd.txt","w");

			else if(semester52==6)
				file=fopen("6th semester 52nd.txt","w");

			else if(semester52==7)
				file=fopen("7th semester 52nd.txt","w");

			else if(semester52==8)
				file=fopen("8th semester 52nd.txt","w");

			else if(semester52==9)
				file=fopen("9th semester 52nd.txt","w");

			else if(semester52==10)
				file=fopen("10th semester 52nd.txt","w");

			else if(semester52==11)
				file=fopen("11th semester 52nd.txt","w");

			else if(semester52==12)
				file=fopen("12th semester 52nd.txt","w");

			else
			{
				printf("Your input is invalid");
				goto semester52;
			}
			// 52nd batch file opening condition statement end here

			n_numbers52:
			printf("\n\nHow many students mark do you input in batch 52nd:");
			scanf("%d",&n);

			system("cls");

			if(n>=1 && n<=100)// this is n numbers student choice condition statement(52nd)
			{
				//  52nd student information section start from here
				for(i=0;i<n;i++)
				{
                        // this is our university name
                    printf("\t\t\t..................Dhaka International University..................\n\n\n");
                        // this is instruction for users
                    printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

					printf("\nStudent %d\n\n",i+1);

					printf("Enter 52nd(Day) batch student's roll(don't use 0 before roll):");
					scanf("%d",&s[i].roll);

					system("cls");

					// this is our university name
					printf("\t\t\t..................Dhaka International University..................\n\n\n");
					// this is instruction for users
					printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

					switch(s[i].roll)
					{
						case(1):
							{
								printf("\nRokeya Ripa Tanisa\n");
								printf("Roll No:1\n");
								break;
							}

						case(3):
							{
								printf("\nSanjida Jahan\n");
								printf("Roll No:3\n");
								break;
							}

						case(4):
							{
								printf("\nTahmina Jahan\n");
								printf("Roll No:4\n");
								break;
							}

						case(5):
							{
								printf("\nMahmud\n");
								printf("Roll No:5\n");
								break;
							}

						case(6):
							{
								printf("\nAbdullah Al Noman\n");
								printf("Roll No:6\n");
								break;
							}

						case(7):
							{
								printf("\nMamunur Rashid\n");
								printf("Roll No:7\n");
								break;
							}

						case(8):
							{
								printf("\nAbu Sayeed\n");
								printf("Roll No:8\n");
								break;
							}

						case(9):
							{
								printf("\nTanvir Hassan\n");
								printf("Roll No:9\n");
								break;
							}

						case(10):
							{
								printf("\nSiyam Ahmed Nahid\n");
								printf("Roll No:10\n");
								break;
							}

						case(12):
							{
								printf("\nSadaf Sajid\n");
								printf("Roll No:12\n");
								break;
							}

						case(13):
							{
								printf("\nSymon Seyzan\n");
								printf("Roll No:13\n");
								break;
							}

						case(14):
							{
								printf("\nA.B. Raihan\n");
								printf("Roll No:14\n");
								break;
							}

						case(16):
							{
								printf("\nMahadi Hossen\n");
								printf("Roll No:16\n");
								break;
							}

						case(20):
							{
								printf("\nMir Zafiqul Alam\n");
								printf("Roll No:20\n");
								break;
							}
						case(21):
							{
								printf("\nMd. Sany\n");
								printf("Roll No:21\n");
								break;
							}
						case(22):
							{
								printf("\nHasibur Rahman\n");
								printf("Roll No:22\n");
								break;
							}
						case(23):
							{
								printf("\nFoysal Hossen\n");
								printf("Roll No:23\n");
								break;
							}
						case(24):
							{
								printf("\nImaran Hossain\n");
								printf("Roll No:24\n");
								break;
							}
						case(27):
							{
								printf("\nMd. Bayezid Khan\n");
								printf("Roll No:27\n");
								break;
							}
						case(28):
							{
								printf("\nNahidul Shojol\n");
								printf("Roll No:28\n");
								break;
							}
						case(29):
							{
								printf("\nJannat E Anwar\n");
								printf("Roll No:29\n");
								break;
							}

						case(32):
							{
								printf("\nRownak Borhan Himel\n");
								printf("Roll No:32\n");
								break;
							}

						case(34):
							{
								printf("\nAdora Jahan Mim\n");
								printf("Roll No:34\n");
								break;
							}

						case(35):
							{
								printf("\nMottaleb Mia\n");
								printf("Roll No:35\n");
								break;
							}

						case(36):
							{
								printf("\nJannatul Jui\n");
								printf("Roll No:36\n");
								break;
							}

						case(38):
							{
								printf("\nZakiya Sultana\n");
								printf("Roll No:38\n");
								break;
							}

						case(40):
							{
								printf("\nRefat Al Rahim\n");
								printf("Roll No:40\n");
								break;
							}

						case(43):
							{
								printf("\nMejbah\n");
								printf("Roll No:43\n");
								break;
							}

						case(44):
							{
								printf("\nAhmed Foysal\n");
								printf("Roll No:44\n");
								break;
							}

						case(45):
							{
								printf("\nSheik Sadi Emu\n");
								printf("Roll No:45\n");
								break;
							}

						case(51):
							{
								printf("\nRofique\n");
								printf("Roll No:51\n");
								break;
							}

						case(52):
							{
								printf("\nMehzabien Marufa\n");
								printf("Roll No:52\n");
								break;
							}

						default:
							printf("This roll is not available\n");

					} // switch label brackets end here
					// 52nd(day) student information section end here

					// this is roll checking control statement(52nd)
	                if(s[i].roll==1 || s[i].roll==3 || s[i].roll==4 || s[i].roll==5 ||
	                   s[i].roll==6 || s[i].roll==7 || s[i].roll==8 || s[i].roll==9 ||
	                   s[i].roll==10 || s[i].roll==12 || s[i].roll==13 || s[i].roll==14 ||
	                   s[i].roll==16 || s[i].roll==20 || s[i].roll==21 || s[i].roll==22 ||
	                   s[i].roll==23 || s[i].roll==24 || s[i].roll==27 || s[i].roll==28 ||
	                   s[i].roll==29 || s[i].roll==32 || s[i].roll==34 || s[i].roll==35 ||
	                   s[i].roll==36 || s[i].roll==38 || s[i].roll==40 || s[i].roll==43 ||
	                   s[i].roll==44 || s[i].roll==45 || s[i].roll==51 || s[i].roll==52)
					{
						// CSE subject marking (52nd) section start from here
						cse52_mid_term:
						printf("\nEnter CSE-103 mid-term mark:");
						scanf("%d",&s[i].csemid);
						if(s[i].csemid>=1 && s[i].csemid<=20)
						{
							cse52_attendence_behavior:
							printf("Enter CSE-103 Attendance & Behavior mark:");
							scanf("%d",&s[i].csea_b);
						}
						else
						{
							printf("\nThis mark is invalid for mid-term exam\n");
							printf("Please enter mid-term mark again(1-20)\n\n");
							goto cse52_mid_term;
						}

						if(s[i].csea_b>=1 && s[i].csea_b<=10)
						{
							cse52_class_test:
							printf("Enter CSE-103 Class Test mark:");
							scanf("%d",&s[i].csec_t);
						}
						else
						{
							printf("\nThis mark is invalid for Attendance and Behavior number\n");
							printf("Please enter Attendance and Behavior mark again(1-10)\n\n");
							goto cse52_attendence_behavior;
						}

						if(s[i].csec_t>=1 && s[i].csec_t<=10)
						{
							cse52_presentation_assignment:
							printf("Enter CSE-103 Presentation & Assignment mark:");
							scanf("%d",&s[i].csep_a);
						}
						else
						{
							printf("\nThis mark is invalid for Class Test number\n");
							printf("Please enter Class Test number again(1-10)\n\n");
							goto cse52_class_test;
						}

						if(s[i].csep_a>=1 && s[i].csep_a<=10)
						{
							cse52_final:
							printf("Enter CSE-103 Final Exam mark:");
							scanf("%d",&s[i].csefinal);
						}
						else
						{
							printf("\nThis mark is invalid for Presentation & Assignment number\n");
							printf("Please enter Presentation & Assignment number again(1-10)\n\n");
							goto cse52_presentation_assignment;
						}
						if(s[i].csefinal>=1 && s[i].csefinal<=50)
						{
							s[i].csetotal=(s[i].csemid+s[i].csea_b+s[i].csec_t+s[i].csep_a+s[i].csefinal);
							printf("CSE-103 Total Mark = %d\n\n",s[i].csetotal);
						}
						else
						{
							printf("\nThis mark is invalid for Final Exam\n");
							printf("Please enter Final Exam mark again(1-50)\n\n");
							goto cse52_final;
						}
						// CSE subject marking (52nd) section end here

						// PHY subject marking (52nd) section start from here
						phy52_mid_term:
						printf("\nEnter PHY-103 mid-term mark:");
						scanf("%d",&s[i].phymid);
						if(s[i].phymid>=1 && s[i].phymid<=20)
						{
							phy52_attendence_behavior:
							printf("Enter PHY-103 Attendance & Behavior mark:");
							scanf("%d",&s[i].phya_b);
						}
						else
						{
							printf("\nThis mark is invalid for mid-term exam\n");
							printf("Please enter mid-term mark again\n\n");
							goto phy52_mid_term;
						}

						if(s[i].phya_b>=1 && s[i].phya_b<=10)
						{
							phy52_class_test:
							printf("Enter PHY-103 Class Test mark:");
							scanf("%d",&s[i].phyc_t);
						}
						else
						{
							printf("\nThis mark is invalid for Attendance and Behavior number\n");
							printf("Please enter Attendance and Behavior mark again\n\n");
							goto phy52_attendence_behavior;
						}

						if(s[i].phyc_t>=1 && s[i].phyc_t<=10)
						{
							phy52_presentation_assignment:
							printf("Enter PHY-103 Presentation & Assignment mark:");
							scanf("%d",&s[i].phyp_a);
						}
						else
						{
							printf("\nThis mark is invalid for Class Test number\n");
							printf("Please enter Class Test number again\n\n");
							goto phy52_class_test;
						}

						if(s[i].phyp_a>=1 && s[i].phyp_a<=10)
						{
							phy52_final:
							printf("Enter PHY-103 Final Exam mark:");
							scanf("%d",&s[i].phyfinal);
						}
						else
						{
							printf("\nThis mark is invalid for Presentation & Assignment number\n");
							printf("Please enter Presentation & Assignment number again\n\n");
							goto phy52_presentation_assignment;
						}
						if(s[i].phyfinal>=1 && s[i].phyfinal<=50)
						{
							s[i].phytotal=(s[i].phymid+s[i].phya_b+s[i].phyc_t+s[i].phyp_a+s[i].phyfinal);
							printf("PHY-103 Total Mark = %d\n\n",s[i].phytotal);
						}
						else
						{
							printf("\nThis mark is invalid for Final Exam\n");
							printf("Please enter Final Exam mark again\n\n");
							goto phy52_final;
						}
						// PHY subject marking (52nd) section end here

						// Math subject marking (52nd) section start from here
						math52_mid_term:
						printf("\nEnter Math-103 mid-term mark:");
						scanf("%d",&s[i].mathmid);
						if(s[i].mathmid>=1 && s[i].mathmid<=20)
						{
							math52_attendence_behavior:
							printf("Enter Math-103 Attendance & Behavior mark:");
							scanf("%d",&s[i].matha_b);
						}
						else
						{
							printf("\nThis mark is invalid for mid-term exam\n");
							printf("Please enter mid-term mark again\n\n");
							goto math52_mid_term;
						}

						if(s[i].matha_b>=1 && s[i].matha_b<=10)
						{
							math52_class_test:
							printf("Enter Math-103 Class Test mark:");
							scanf("%d",&s[i].mathc_t);
						}
						else
						{
							printf("\nThis mark is invalid for Attendance and Behavior number\n");
							printf("Please enter Attendance and Behavior mark again\n\n");
							goto math52_attendence_behavior;
						}

						if(s[i].mathc_t>=1 && s[i].mathc_t<=10)
						{
							math52_presentation_assignment:
							printf("Enter Math-103 Presentation & Assignment mark:");
							scanf("%d",&s[i].mathp_a);
						}
						else
						{
							printf("\nThis mark is invalid for Class Test number\n");
							printf("Please enter Class Test number again\n\n");
							goto math52_class_test;
						}

						if(s[i].matha_b>=1 && s[i].matha_b<=10)
						{
							math52_final:
							printf("Enter Math-103 Final Exam mark:");
							scanf("%d",&s[i].mathfinal);
						}
						else
						{
							printf("\nThis mark is invalid for Presentation & Assignment number\n");
							printf("Please enter Presentation & Assignment number again\n\n");
							goto math52_presentation_assignment;
						}
						if(s[i].mathfinal>=1 && s[i].mathfinal<=50)
						{
							s[i].mathtotal=(s[i].mathmid+s[i].matha_b+s[i].mathc_t+s[i].mathp_a+s[i].mathfinal);
							printf("Math-103 Total Mark = %d\n\n",s[i].mathtotal);
						}
						else
						{
							printf("\nThis mark is invalid for Final Exam\n");
							printf("Please enter Final Exam mark again\n\n");
							goto math52_final;
						}
						// math subject marking (52nd) section end here

					} // 52nd roll checking condition brackets end here

					printf("\n\n");
					system("pause");
					system("cls");

				} // for loop brackets end here
			}// 52nd n numbers student choice condition brackets end here
			else // 52nd n numbers student choice condition statement end here
				{
					printf("You input number is invalid number\n\n");
					printf("Please input valid number\n\n");
					goto n_numbers52;
				}

		} // 52nd batch choice condition brackets end here

		//52nd(day) batch student section end here


		// 53rd(day) batch student section start from here
		else if(batch==2)// this is 53rd batch choice condition statement
		{
			// this is our university name
			printf("\t\t\t..................Dhaka International University..................\n\n\n");
			// this is instruction for user
			printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

			semester53:
			printf("Which semester mark are you want to add(don't use 0 before input choice):");
			scanf("%d",&semester53);

			// 53rd batch file opening condition statement
			if(semester53==1)
				file=fopen("1st semester 53rd.txt","w");

			else if(semester53==2)
				file=fopen("2nd semester 53rd.txt","w");

			else if(semester53==3)
				file=fopen("3rd semester 53rd.txt","w");

			else if(semester53==4)
				file=fopen("4th semester 53rd.txt","w");

			else if(semester53==5)
				file=fopen("5th semester 53rd.txt","w");

			else if(semester53==6)
				file=fopen("6th semester 53rd.txt","w");

			else if(semester53==7)
				file=fopen("7th semester 53rd.txt","w");

			else if(semester53==8)
				file=fopen("8th semester 53rd.txt","w");

			else if(semester53==9)
				file=fopen("9th semester 53rd.txt","w");

			else if(semester53==10)
				file=fopen("10th semester 53rd.txt","w");

			else if(semester53==11)
				file=fopen("11th semester 53rd.txt","w");

			else if(semester53==12)
				file=fopen("12th semester 53rd.txt","w");

			else
			{
				printf("Your input is invalid\n");
				goto semester53;
			}
			// 53rd batch file opening condition statement end here

			n_numbers53:
			printf("\n\nHow many students mark do you input in batch 53rd:");
			scanf("%d",&n);

			system("cls");

			if(n>=1 && n<=100)// 53rd batch n numbers student choice condition statement
			{
				for(i=0;i<n;i++)
				{
				         // this is our university name
                    printf("\t\t\t..................Dhaka International University..................\n\n\n");
                        // this is instruction for users
                    printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

					printf("\nStudent %d\n\n",i+1);

					printf("Enter 53rd(Day) batch student's roll(don't use 0 before roll):");
					scanf("%d",&s[i].roll);

					system("cls");

					// this is our university name
					printf("\t\t\t..................Dhaka International University..................\n\n\n");
					// this is instruction for user
					printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

					// 53rd student information section start from here
					switch(s[i].roll)
					{
						case(03):
							{
								printf("\nMd. Abdullah Al Maruf\n");
								printf("Roll No:03\n");
								break;
							}

						case(10):
							{
								printf("\nMd. Tanvir Hossen Talukdar\n");
								printf("Roll No:10\n");
								break;
							}

						case(11):
							{
								printf("\nFahad Hossain Emon\n");
								printf("Roll No:11\n");
								break;
							}

						case(13):
							{
								printf("\nMontaka Sadia\n");
								printf("Roll No:13\n");
								break;
							}

						case(16):
							{
								printf("\nTabassum Noor Nisha\n");
								printf("Roll No:16\n");
								break;
							}

						case(18):
							{
								printf("\nSusanto Sarker Keenedy\n");
								printf("Roll No:18\n");
								break;
							}

						case(23):
							{
								printf("\nMamun Raza\n");
								printf("Roll No:23\n");
								break;
							}

						case(24):
							{
								printf("\nMd. Mahmudun Nabi Mola\n");
								printf("Roll No:24\n");
								break;
							}

						case(27):
							{
								printf("\nAtik Morshed Khan\n");
								printf("Roll No:27\n");
								break;
							}

						case(31):
							{
								printf("\nMd. Jahid Hasan\n");
								printf("Roll No:31\n");
								break;
							}

						case(32):
							{
								printf("\nMd. Asif\n");
								printf("Roll No:32\n");
								break;
							}

						case(33):
							{
								printf("\nMd. Danial Islam Ornob\n");
								printf("Roll No:33\n");
								break;
							}

						case(34):
							{
								printf("\nMd. Ashraful Islam\n");
								printf("Roll No:34\n");
								break;
							}

						case(38):
							{
								printf("\nMashrur Hasan Fahad\n");
								printf("Roll No:38\n");
								break;
							}
						case(39):
							{
								printf("\nSadman\n");
								printf("Roll No:39\n");
								break;
							}
						case(40):
							{
								printf("\nAnik Barai\n");
								printf("Roll No:40\n");
								break;
							}
						case(41):
							{
								printf("\nMarzan Islam\n");
								printf("Roll No:41\n");
								break;
							}
						case(44):
							{
								printf("\nPranto Kumar Das\n");
								printf("Roll No:44\n");
								break;
							}
						case(45):
							{
								printf("\nSadiul Haque Fahad\n");
								printf("Roll No:45\n");
								break;
							}
						case(48):
							{
								printf("\nKawsir Ahmed\n");
								printf("Roll No:48\n");
								break;
							}
						case(49):
							{
								printf("\nRahat Kabir Dhrubo\n");
								printf("Roll No:49\n");
								break;
							}
						case(50):
							{
								printf("\nTanzina Sultana\n");
								printf("Roll No:50\n");
								break;
							}

						default:
							printf("Not available\n");

					} //switch label brackets end here
					// 53rd(day) student information section end here

					// 53rd roll checking control statement
					if(s[i].roll==3 || s[i].roll==10 || s[i].roll==11 || s[i].roll==13 ||
	                   s[i].roll==16 || s[i].roll==18 || s[i].roll==23 || s[i].roll==24 ||
	                   s[i].roll==27 || s[i].roll==31 || s[i].roll==32 || s[i].roll==33 ||
	                   s[i].roll==34 || s[i].roll==38)
					{
						// CSE subject marking (53rd) section start from here
						cse_mid_term:
						printf("\nEnter CSE-103 mid-term mark:");
						scanf("%d",&s[i].csemid);
						if(s[i].csemid>=1 && s[i].csemid<=20)
						{
							cse_attendence_behavior:
							printf("Enter CSE-103 Attendance & Behavior mark:");
							scanf("%d",&s[i].csea_b);
						}
						else
						{
							printf("\nThis mark is invalid for mid-term exam\n");
							printf("Please enter mid-term mark again\n\n");
							goto cse_mid_term;
						}

						if(s[i].csea_b>=1 && s[i].csea_b<=10)
						{
							cse_class_test:
							printf("Enter CSE-103 Class Test mark:");
							scanf("%d",&s[i].csec_t);
						}
						else
						{
							printf("\nThis mark is invalid for Attendance and Behavior number\n");
							printf("Please enter Attendance and Behavior mark again\n\n");
							goto cse_attendence_behavior;
						}

						if(s[i].csec_t>=1 && s[i].csec_t<=10)
						{
							cse_presentation_assignment:
							printf("Enter CSE-103 Presentation & Assignment mark:");
							scanf("%d",&s[i].csep_a);
						}
						else
						{
							printf("\nThis mark is invalid for Class Test number\n");
							printf("Please enter Class Test number again\n\n");
							goto cse_class_test;
						}

						if(s[i].csep_a>=1 && s[i].csep_a<=10)
						{
							cse_final:
							printf("Enter CSE-103 Final Exam mark:");
							scanf("%d",&s[i].csefinal);
						}
						else
						{
							printf("\nThis mark is invalid for Presentation & Assignment number\n");
							printf("Please enter Presentation & Assignment number again\n\n");
							goto cse_presentation_assignment;
						}
						if(s[i].csefinal>=1 && s[i].csefinal<=50)
						{
							s[i].csetotal=(s[i].csemid+s[i].csea_b+s[i].csec_t+s[i].csep_a+s[i].csefinal);
							printf("CSE-103 Total Mark = %d\n\n",s[i].csetotal);
						}
						else
						{
							printf("\nThis mark is invalid for Final Exam\n");
							printf("Please enter Final Exam mark again\n\n");
							goto cse_final;
						}
						// CSE subject marking (53rd) section end here

						// PHY subject marking (53rd) section start from here
						phy_mid_term:
						printf("\nEnter PHY-103 mid-term mark:");
						scanf("%d",&s[i].phymid);
						if(s[i].phymid>=1 && s[i].phymid<=20)
						{
							phy_attendence_behavior:
							printf("Enter PHY-103 Attendance & Behavior mark:");
							scanf("%d",&s[i].phya_b);
						}
						else
						{
							printf("\nThis mark is invalid for mid-term exam\n");
							printf("Please enter mid-term mark again\n\n");
							goto phy_mid_term;
						}

						if(s[i].phya_b>=1 && s[i].phya_b<=10)
						{
							phy_class_test:
							printf("Enter PHY-103 Class Test mark:");
							scanf("%d",&s[i].phyc_t);
						}
						else
						{
							printf("\nThis mark is invalid for Attendance and Behavior number\n");
							printf("Please enter Attendance and Behavior mark again\n\n");
							goto phy_attendence_behavior;
						}

						if(s[i].phyc_t>=1 && s[i].phyc_t<=10)
						{
							phy_presentation_assignment:
							printf("Enter PHY-103 Presentation & Assignment mark:");
							scanf("%d",&s[i].phyp_a);
						}
						else
						{
							printf("\nThis mark is invalid for Class Test number\n");
							printf("Please enter Class Test number again\n\n");
							goto phy_class_test;
						}

						if(s[i].phyp_a>=1 && s[i].phyp_a<=10)
						{
							phy_final:
							printf("Enter CSE-103 Final Exam mark:");
							scanf("%d",&s[i].phyfinal);
						}
						else
						{
							printf("\nThis mark is invalid for Presentation & Assignment number\n");
							printf("Please enter Presentation & Assignment number again\n\n");
							goto phy_presentation_assignment;
						}
						if(s[i].phyfinal>=1 && s[i].phyfinal<=50)
						{
							s[i].phytotal=(s[i].phymid+s[i].phya_b+s[i].phyc_t+s[i].phyp_a+s[i].phyfinal);
							printf("PHY-103 Total Mark = %d\n\n",s[i].phytotal);
						}
						else
						{
							printf("\nThis mark is invalid for Final Exam\n");
							printf("Please enter Final Exam mark again\n\n");
							goto phy_final;
						}
						// PHY subject marking (53rd) section end here

						// Math subject marking (53rd) section start from here
						math_mid_term:
						printf("\nEnter Math-103 mid-term mark:");
						scanf("%d",&s[i].mathmid);
						if(s[i].mathmid>=1 && s[i].mathmid<=20)
						{
							math_attendence_behavior:
							printf("Enter Math-103 Attendance & Behavior mark:");
							scanf("%d",&s[i].matha_b);
						}
						else
						{
							printf("\nThis mark is invalid for mid-term exam\n");
							printf("Please enter mid-term mark again\n\n");
							goto math_mid_term;
						}

						if(s[i].matha_b>=1 && s[i].matha_b<=10)
						{
							math_class_test:
							printf("Enter Math-103 Class Test mark:");
							scanf("%d",&s[i].mathc_t);
						}
						else
						{
							printf("\nThis mark is invalid for Attendance and Behavior number\n");
							printf("Please enter Attendance and Behavior mark again\n\n");
							goto math_attendence_behavior;
						}

						if(s[i].mathc_t>=1 && s[i].mathc_t<=10)
						{
							math_presentation_assignment:
							printf("Enter Math-103 Presentation & Assignment mark:");
							scanf("%d",&s[i].mathp_a);
						}
						else
						{
							printf("\nThis mark is invalid for Class Test number\n");
							printf("Please enter Class Test number again\n\n");
							goto math_class_test;
						}

						if(s[i].matha_b>=1 && s[i].matha_b<=10)
						{
							math_final:
							printf("Enter CSE-103 Final Exam mark:");
							scanf("%d",&s[i].mathfinal);
						}
						else
						{
							printf("\nThis mark is invalid for Presentation & Assignment number\n");
							printf("Please enter Presentation & Assignment number again\n\n");
							goto math_presentation_assignment;
						}
						if(s[i].mathfinal>=1 && s[i].mathfinal<=50)
						{
							s[i].mathtotal=(s[i].mathmid+s[i].matha_b+s[i].mathc_t+s[i].mathp_a+s[i].mathfinal);
							printf("Math-103 Total Mark = %d\n\n",s[i].mathtotal);
						}
						else
						{
							printf("\nThis mark is invalid for Final Exam\n");
							printf("Please enter Final Exam mark again\n\n");
							goto phy_final;
						}
						// Math subject marking (53rd) section end here

					} // 53rd roll checking condition brackets end here

					printf("\n\n");
					system("pause");
					system("cls");

				} // for loop brackets end here
			}// 53rd n numbers student choice condition brackets end here

			else // 53rd n numbers student choice condition statement end here
			{
				printf("You input number is invalid number\n\n");
				printf("Please input valid number\n\n");
				goto n_numbers53;
			}

		}// 53rd batch choice condition brackets end here

		// 53rd(day) batch student section end here


		else // batch choice condition statement end here
			{
				printf("Your choice is wrong\n\nPlease enter right choice\n\n");
				goto batch_choice;

			}
		system("cls");

		// 52nd batch result input in file section start from here
		if(batch==1) // 52nd batch result input in file condition statement
		{
			 // here our university name input in file
			fprintf(file,"\t\t\t..................Dhaka International University..................\n\n\n");
			fprintf(file,"\n\n\t\t\t...................52nd(Day) Student's Result...................\n\n");

			for(i=0;i<n;i++)
			{
				// 52nd roll checking control statement for input mark in file and information
				if(s[i].roll==1 || s[i].roll==3 || s[i].roll==4 || s[i].roll==5 ||
	               s[i].roll==6 || s[i].roll==7 || s[i].roll==8 || s[i].roll==9 ||
	               s[i].roll==10 || s[i].roll==12 || s[i].roll==13 || s[i].roll==14 ||
	               s[i].roll==16 || s[i].roll==20 || s[i].roll==21 || s[i].roll==22 ||
	               s[i].roll==23 || s[i].roll==24 || s[i].roll==27 || s[i].roll==28 ||
	               s[i].roll==29 || s[i].roll==32 || s[i].roll==34 || s[i].roll==35 ||
	               s[i].roll==36 || s[i].roll==38 || s[i].roll==40 || s[i].roll==43 ||
	               s[i].roll==44 || s[i].roll==45 || s[i].roll==51 || s[i].roll==52 ||
	               s[i].roll==32)
				{

					// 52nd(Day) student's name input in file section start from here
					switch(s[i].roll)
					{
						case(1):
							{
								fprintf(file,"\nRokeya Ripa\n");
								break;
							}

						case(3):
							{
								fprintf(file,"\nSanjida Jahan\n");
								break;
							}

						case(4):
							{
								fprintf(file,"\nTahmina Jahan\n");
								break;
							}

						case(5):
							{
								fprintf(file,"\nMahmud\n");
								break;
							}

						case(6):
							{
								fprintf(file,"\nAbdullah Al Noman\n");
								break;
							}

						case(7):
							{
								fprintf(file,"\nMamunur Rashid\n");
								break;
							}

						case(8):
							{
								fprintf(file,"\nAbu Sayeed\n");
								break;
							}

						case(9):
							{
								fprintf(file,"\nTanvir Hassan\n");
								break;
							}

						case(10):
							{
								fprintf(file,"\nSiyam Ahmed Nahid\n");
								break;
							}

						case(12):
							{
								fprintf(file,"\nSadaf Sajid\n");
								break;
							}

						case(13):
							{
								fprintf(file,"\nSymon Seyzan\n");
								break;
							}

						case(14):
							{
								fprintf(file,"\nA.B. Raihan\n");
								break;
							}

						case(16):
							{
								fprintf(file,"\nMahadi Hossen\n");
								break;
							}

						case(20):
							{
								fprintf(file,"\nMir Zafiqul Alam\n");
								break;
							}
						case(21):
							{
								fprintf(file,"\nMd. Sany\n");
								break;
							}
						case(22):
							{
								fprintf(file,"\nHasibur Rahman\n");
								break;
							}
						case(23):
							{
								fprintf(file,"\nFoysal Hossen\n");
								break;
							}
						case(24):
							{
								fprintf(file,"\nImran Hossen\n");
								break;
							}
						case(27):
							{
								fprintf(file,"\nMd. Bayezid Khan\n");
								break;
							}
						case(28):
							{
								fprintf(file,"\nNahidul Sojol\n");
								break;
							}
						case(29):
							{
								fprintf(file,"\nJannat E Anwar\n");
								break;
							}
						case(32):
							{
								fprintf(file,"\nRownak Borhan Himel\n");
								break;
							}

						case(34):
							{
								fprintf(file,"\nAdora Jahan Mim\n");
								break;
							}

						case(35):
							{
								fprintf(file,"\nMottaleb Mia\n");
								break;
							}

						case(36):
							{
								fprintf(file,"\nZannatul Jui\n");
								break;
							}

						case(38):
							{
								fprintf(file,"\nZakiya Sultana\n");
								break;
							}

						case(40):
							{
								fprintf(file,"\nRefat Al Rahim\n");
								break;
							}

						case(43):
							{
								fprintf(file,"\nMejbah\n");
								break;
							}

						case(44):
							{
								fprintf(file,"\nAhmed Foysal\n");
								break;
							}

						case(45):
							{
								fprintf(file,"\nSheik Sadi Emu\n");
								break;
							}

						case(51):
							{
								fprintf(file,"\nRofique\n");
								break;
							}

						case(52):
							{
								fprintf(file,"\nMehzabien Marufa\n");
								break;
							}
					} // switch level bracket end here
					// 52nd(Day) student's name input in file section end here

					fprintf(file,"Roll:%d\n\n",s[i].roll); // here 52nd(Day) roll input in file

					// this CSE subject total valid mark check condition statement(52nd)
					if(s[i].csetotal>=1 && s[i].csetotal<=100)
					{
						// CSE subject grade mark input in file section start from here(52nd)
						if(s[i].csetotal>=80 && s[i].csetotal<=100)
							fprintf(file,"CSE-103 Mark = %d(A+)\n",s[i].csetotal);

						else if(s[i].csetotal>=75 && s[i].csetotal<=79)
							fprintf(file,"CSE-103 Mark = %d(A)\n",s[i].csetotal);

						else if(s[i].csetotal>=70 && s[i].csetotal<=74)
							fprintf(file,"CSE-103 Mark = %d(A-)\n",s[i].csetotal);

						else if(s[i].csetotal>=65 && s[i].csetotal<=69)
							fprintf(file,"CSE-103 Mark = %d(B+)\n",s[i].csetotal);

						else if(s[i].csetotal>=60 && s[i].csetotal<=64)
							fprintf(file,"CSE-103 Mark = %d(B)\n",s[i].csetotal);

						else if(s[i].csetotal>=55 && s[i].csetotal<=59)
							fprintf(file,"CSE-103 Mark = %d(B-)\n",s[i].csetotal);

						else if(s[i].csetotal>=50 && s[i].csetotal<=54)
							fprintf(file,"CSE-103 Mark = %d(C+)\n",s[i].csetotal);

						else if(s[i].csetotal>=45 && s[i].csetotal<=49)
							fprintf(file,"CSE-103 Mark = %d(C)\n",s[i].csetotal);

						else if(s[i].csetotal>=40 && s[i].csetotal<=44)
							fprintf(file,"CSE-103 Mark = %d(D)\n",s[i].csetotal);

						else
							fprintf(file,"CSE-103 Mark = %d(Fail)\n",s[i].csetotal);
						}
						// CSE subject grade mark input in file section end here

					else // CSE subject total valid mark check condition statement end here
						printf("CSE-103 total mark %d is not valid\n",s[i].csetotal);

					// this is PHY subject total valid mark check condition statement
					if(s[i].phytotal>=1 && s[i].phytotal<=100)
					{
						// PHY subject grade mark input in file section start from here
						if(s[i].phytotal>=80 && s[i].phytotal<=100)
							fprintf(file,"PHY-103 Mark = %d(A+)\n",s[i].phytotal);

						else if(s[i].phytotal>=75 && s[i].phytotal<=79)
							fprintf(file,"PHY-103 Mark = %d(A)\n",s[i].phytotal);

						else if(s[i].phytotal>=70 && s[i].phytotal<=74)
							fprintf(file,"PHY-103 Mark = %d(A-)\n",s[i].phytotal);

						else if(s[i].phytotal>=65 && s[i].phytotal<=69)
							fprintf(file,"PHY-103 Mark = %d(B+)\n",s[i].phytotal);

						else if(s[i].phytotal>=60 && s[i].phytotal<=64)
							fprintf(file,"PHY-103 Mark = %d(B)\n",s[i].phytotal);

						else if(s[i].phytotal>=55 && s[i].phytotal<=59)
							fprintf(file,"PHY-103 Mark = %d(B-)\n",s[i].phytotal);

						else if(s[i].phytotal>=50 && s[i].phytotal<=54)
							fprintf(file,"PHY-103 Mark = %d(C+)\n",s[i].phytotal);

						else if(s[i].phytotal>=45 && s[i].phytotal<=49)
							fprintf(file,"PHY-103 Mark = %d(C)\n",s[i].phytotal);

						else if(s[i].phytotal>=40 && s[i].phytotal<=44)
							fprintf(file,"PHY-103 Mark = %d(D)\n",s[i].phytotal);

						else
							fprintf(file,"PHY-103 Mark = %d(Fail)\n",s[i].phytotal);
						// PHY subject grade mark input in file section end here

					}
					else // PHY subject total valid mark check condition statement end here
						printf("PHY-103 total mark %d is not valid\n",s[i].phytotal);

					// this is Math subject total valid mark check condition statement
					if(s[i].mathtotal>=1 && s[i].mathtotal<=100)
					{
						// Math subject grade mark input in file section start from here
						if(s[i].mathtotal>=80 && s[i].mathtotal<=100)
							fprintf(file,"Math-101 Mark = %d(A+)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=75 && s[i].mathtotal<=79)
							fprintf(file,"Math-101 Mark = %d(A)\n",s[i].phytotal);

						else if(s[i].mathtotal>=70 && s[i].mathtotal<=74)
							fprintf(file,"Math-101 Mark = %d(A-)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=65 && s[i].mathtotal<=69)
							fprintf(file,"Math-101 Mark = %d(B+)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=60 && s[i].mathtotal<=64)
							fprintf(file,"Math-101 Mark = %d(B)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=55 && s[i].mathtotal<=59)
							fprintf(file,"Math-101 Mark = %d(B-)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=50 && s[i].mathtotal<=54)
							fprintf(file,"Math-101 Mark = %d(C+)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=45 && s[i].mathtotal<=49)
							fprintf(file,"Math-101 Mark = %d(C)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=40 && s[i].mathtotal<=44)
							fprintf(file,"Math-101 Mark = %d(D)\n",s[i].mathtotal);

						else
							fprintf(file,"Math-101 Mark = %d(Fail)\n",s[i].mathtotal);
						// Math subject grade mark input in file section end here

					}
					else // Math subject total valid mark check condition statement end here
						printf("Math-101 total mark %d is not valid\n",s[i].mathtotal);


				}// roll checking conditional brackets end here

			}// for loop brackets end here

			fclose(file);

		} // 52nd batch result input in file condition brackets end here

		// 52nd batch result input in file section end here

		// 53rd batch result input in file section start from here
		else if(batch==2) // this is 53rd batch result input in file condition
		{
			// here input our university in file
			fprintf(file,"\t\t\t..................Dhaka International University..................\n\n\n");
			fprintf(file,"\n\n\t\t\t...................53rd(Day) Student's Result...................\n\n");


			for(i=0;i<n;i++)
			{
				// roll checking control statement for input mark in file and information
				if(s[i].roll==3 || s[i].roll==10 || s[i].roll==11 || s[i].roll==13 ||
	               s[i].roll==16 || s[i].roll==18 || s[i].roll==23 || s[i].roll==24 ||
	               s[i].roll==27 || s[i].roll==31 || s[i].roll==32 || s[i].roll==33 ||
	               s[i].roll==34 || s[i].roll==38)
				{

					// 53rd(Day) student's name input in file section start from here
					switch(s[i].roll)
					{
						case(03):
							{
								fprintf(file,"\nMd. Abdullah Al Maruf\n");
								break;
							}

						case(10):
							{
								fprintf(file,"\nMd. Tanvir Hossen Talukdar\n");
								break;
							}

						case(11):
							{
								fprintf(file,"\nFahad Hossain Emon\n");
								break;
							}

						case(13):
							{
								fprintf(file,"\nMontaka Sadia\n");
								break;
							}

						case(16):
							{
								fprintf(file,"\nTabassum Noor Nisha\n");
								break;
							}

						case(18):
							{
								fprintf(file,"\nSusanto Sarker Keenedy\n");
								break;
							}

						case(23):
							{
								fprintf(file,"\nMamun Raza\n");
								break;
							}

						case(24):
							{
								fprintf(file,"\nMd. Mahmudun Nabi Mola\n");
								break;
							}

						case(27):
							{
								fprintf(file,"\nAtik Morshed Khan\n");
								break;
							}

						case(31):
							{
								fprintf(file,"\nMd. Jahid Hasan\n");
								break;
							}

						case(32):
							{
								fprintf(file,"\nMd. Asif\n");
								break;
							}

						case(33):
							{
								fprintf(file,"\nMd. Danial Islam Ornob\n");
								break;
							}

						case(34):
							{
								fprintf(file,"\nMd. Ashraful Islam\n");
								break;
							}

						case(38):
							{
								fprintf(file,"\nMashrur Hasan Fahad\n");
								break;
							}
						case(39):
							{
								fprintf(file,"\nSadman\n");
								break;
							}
						case(40):
							{
								fprintf(file,"\nAnik Barai\n");
								break;
							}
						case(41):
							{
								fprintf(file,"\nMarzan Islam\n");
								break;
							}
						case(44):
							{
								fprintf(file,"\nPranto Kumar Das\n");
								break;
							}
						case(45):
							{
								fprintf(file,"\nSadiul Haque Fahad\n");
								break;
							}
						case(48):
							{
								fprintf(file,"\nKawsar Ahmed\n");
								break;
							}
						case(49):
							{
								fprintf(file,"\nRahat Kabir Dhrubo\n");
								break;
							}
						case(50):
							{
								fprintf(file,"\nTanzina Sultana\n");
								break;
							}
					} // switch level bracket end here

					// 53rd(Day) student's name input in file section end here

					fprintf(file,"Roll:%d\n\n",s[i].roll); // here 53rd(Day) roll input in file

					// this CSE subject total valid mark check condition statement(53rd)
					if(s[i].csetotal>=1 && s[i].csetotal<=100)
					{
						// CSE subject grade mark input in file section start from here(53rd)
						if(s[i].csetotal>=80 && s[i].csetotal<=100)
							fprintf(file,"CSE-103 Mark = %d(A+)\n",s[i].csetotal);

						else if(s[i].csetotal>=75 && s[i].csetotal<=79)
							fprintf(file,"CSE-103 Mark = %d(A)\n",s[i].csetotal);

						else if(s[i].csetotal>=70 && s[i].csetotal<=74)
							fprintf(file,"CSE-103 Mark = %d(A-)\n",s[i].csetotal);

						else if(s[i].csetotal>=65 && s[i].csetotal<=69)
							fprintf(file,"CSE-103 Mark = %d(B+)\n",s[i].csetotal);

						else if(s[i].csetotal>=60 && s[i].csetotal<=64)
							fprintf(file,"CSE-103 Mark = %d(B)\n",s[i].csetotal);

						else if(s[i].csetotal>=55 && s[i].csetotal<=59)
							fprintf(file,"CSE-103 Mark = %d(B-)\n",s[i].csetotal);

						else if(s[i].csetotal>=50 && s[i].csetotal<=54)
							fprintf(file,"CSE-103 Mark = %d(C+)\n",s[i].csetotal);

						else if(s[i].csetotal>=45 && s[i].csetotal<=49)
							fprintf(file,"CSE-103 Mark = %d(C)\n",s[i].csetotal);

						else if(s[i].csetotal>=40 && s[i].csetotal<=44)
							fprintf(file,"CSE-103 Mark = %d(D)\n",s[i].csetotal);

						else
							fprintf(file,"CSE-103 Mark = %d(Fail)\n",s[i].csetotal);
						}
						// CSE subject grade mark input in file section end here

					else // CSE subject total valid mark check condition statement end here
						printf("CSE-103 total mark %d is not valid\n",s[i].csetotal);

					// this is PHY subject total valid mark check condition statement
					if(s[i].phytotal>=1 && s[i].phytotal<=100)
					{
						// PHY subject grade mark input in file section start from here
						if(s[i].phytotal>=80 && s[i].phytotal<=100)
							fprintf(file,"PHY-103 Mark = %d(A+)\n",s[i].phytotal);

						else if(s[i].phytotal>=75 && s[i].phytotal<=79)
							fprintf(file,"PHY-103 Mark = %d(A)\n",s[i].phytotal);

						else if(s[i].phytotal>=70 && s[i].phytotal<=74)
							fprintf(file,"PHY-103 Mark = %d(A-)\n",s[i].phytotal);

						else if(s[i].phytotal>=65 && s[i].phytotal<=69)
							fprintf(file,"PHY-103 Mark = %d(B+)\n",s[i].phytotal);

						else if(s[i].phytotal>=60 && s[i].phytotal<=64)
							fprintf(file,"PHY-103 Mark = %d(B)\n",s[i].phytotal);

						else if(s[i].phytotal>=55 && s[i].phytotal<=59)
							fprintf(file,"PHY-103 Mark = %d(B-)\n",s[i].phytotal);

						else if(s[i].phytotal>=50 && s[i].phytotal<=54)
							fprintf(file,"PHY-103 Mark = %d(C+)\n",s[i].phytotal);

						else if(s[i].phytotal>=45 && s[i].phytotal<=49)
							fprintf(file,"PHY-103 Mark = %d(C)\n",s[i].phytotal);

						else if(s[i].phytotal>=40 && s[i].phytotal<=44)
							fprintf(file,"PHY-103 Mark = %d(D)\n",s[i].phytotal);

						else
							fprintf(file,"PHY-103 Mark = %d(Fail)\n",s[i].phytotal);
						// PHY subject grade mark input in file section end here

					}
					else // PHY subject total valid mark check condition statement end here
						printf("PHY-103 total mark %d is not valid\n",s[i].phytotal);

					// this is Math subject total valid mark check condition statement
					if(s[i].mathtotal>=1 && s[i].mathtotal<=100)
					{
						// Math subject grade mark input in file section start from here
						if(s[i].mathtotal>=80 && s[i].mathtotal<=100)
							fprintf(file,"Math-101 Mark = %d(A+)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=75 && s[i].mathtotal<=79)
							fprintf(file,"Math-101 Mark = %d(A)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=70 && s[i].mathtotal<=74)
							fprintf(file,"Math-101 Mark = %d(A-)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=65 && s[i].mathtotal<=69)
							fprintf(file,"Math-101 Mark = %d(B+)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=60 && s[i].mathtotal<=64)
							fprintf(file,"Math-101 Mark = %d(B)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=55 && s[i].mathtotal<=59)
							fprintf(file,"Math-101 Mark = %d(B-)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=50 && s[i].mathtotal<=54)
							fprintf(file,"Math-101 Mark = %d(C+)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=45 && s[i].mathtotal<=49)
							fprintf(file,"Math-101 Mark = %d(C)\n",s[i].mathtotal);

						else if(s[i].mathtotal>=40 && s[i].mathtotal<=44)
							fprintf(file,"Math-101 Mark = %d(D)\n",s[i].mathtotal);

						else
							fprintf(file,"Math-101 Mark = %d(Fail)\n",s[i].mathtotal);
						// Math subject grade mark input in file section end here

					}
					else // Math subject total valid mark check condition statement end here
						printf("Math-103 total mark %d is not valid\n",s[i].mathtotal);


				}// roll checking conditional statement end here

			}// for loop brackets end here

			fclose(file);

		} // 53rd batch result input in file condition brackets end here

		// 53rd batch result input in file section end here
		else// 53rd batch result input in file condition statement end here
			printf("This batch has no result\n");
	}// teacher choice condition (mark result) brackets end here

	else if(choice==2)// result watch condition
	{
		// this is our university name
		printf("\t\t\t..................Dhaka International University..................\n\n\n");
		// this is instruction for users
		printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

		result_batch_choice:
		printf("Sir, Which batch result are you want to see?\n");
		printf("1.52nd(Day)\n2.53rd(Day)\n\n");

		printf("Enter your choice:");
		scanf("%d",&batch);

		system("cls");

		if(batch==1)// 52nd batch result show condition statement
		{
			// this is our university name
			printf("\t\t\t..................Dhaka International University..................\n\n\n");
			// this is instruction for users
            printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

			result_52nd:
			printf("Which semester result are you see of 52nd batch(don't use 0 before input):");
			scanf("%d",&semester52);

			system("pause");
			system("cls");

			// 52nd batch semester result show condition statement
			if(semester52==1)
			{
				file=fopen("1st semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==2)
			{
				file=fopen("2nd semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==3)
			{
				file=fopen("3rd semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==4)
			{
				file=fopen("4th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==5)
			{
				file=fopen("5th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==6)
			{
				file=fopen("6th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==7)
			{
				file=fopen("7th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==8)
			{
				file=fopen("8th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==9)
			{
				file=fopen("9th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==10)
			{
				file=fopen("10th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==11)
			{
				file=fopen("11th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester52==12)
			{
				file=fopen("12th semester 52nd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else
			{
				printf("This semester in not valid\n\n");
				goto result_52nd;
			}
			// 52nd batch semester result show condition statement end here

			printf("\n\n");
			system("pause");
			system("cls");

		}// 52nd batch result show condition statement brackets end here

		else if(batch==2)// 53rd batch result show condition statement
		{
			// this is our university name
			printf("\t\t\t..................Dhaka International University..................\n\n\n");
			// this is instruction for users
            printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");

			result_53rd:
			printf("Which semester result are you see of 52nd batch(don't use 0 before input):");
			scanf("%d",&semester53);

			printf("\n\n");
			system("pause");
			system("cls");

			// 53rd batch semester result show condition statement
			if(semester53==1)
			{
				file=fopen("1st semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==2)
			{
				file=fopen("2nd semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==3)
			{
				file=fopen("3rd semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==4)
			{
				file=fopen("4th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==5)
			{
				file=fopen("5th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==6)
			{
				file=fopen("6th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==7)
			{
				file=fopen("7th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==8)
			{
				file=fopen("8th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==9)
			{
				file=fopen("9th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==10)
			{
				file=fopen("10th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==11)
			{
				file=fopen("11th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else if(semester53==12)
			{
				file=fopen("12th semester 53rd.txt","r");
				while(!feof(file))
				{
					rshow=fgetc(file);
					printf("%c",rshow);
				}

			}

			else
			{
				printf("This semester in not valid\n\n");
				goto result_53rd;
			}
			// 53rd batch semester result show condition statement end here

			printf("\n\n");
			system("pause");
			system("cls");

		}// 53rd batch result show condition statement brackets end here

		else// 52nd & 53rd batch result show condition statement end here
		{
			printf("Your input is wrong\n\n");
			goto result_batch_choice;
		}

	}// result watch condition statement brackets end here

	else//teacher choice condition statement end here
	{
		printf("Your choice is wrong\n\nPlease enter right choice\n\n\n");
		goto mark_result;
	}

	printf("\t\t\t..................Dhaka International University..................\n\n\n");
	printf("\t\t\t!!!!!!!!!!!!!!!!!!   Don't use any character    !!!!!!!!!!!!!!!!!!\n\n");


	choiceAgain:
	printf("\n\nAre you want go to beginning for input mark & see result?\n");
	printf("1 Yes\n");
	printf("2 No\n\n");

	printf("Please Sir, enter your choice:");
	scanf("%d",&again);

	if(again==1)
	{
		system("cls");
		main();
	}
	else if(again==2)
		printf("\n\n\n\t\t\t......................Thank You Sir......................");

	else
	{
		printf("Your choice is wrong");
		goto choiceAgain;
	}
}
