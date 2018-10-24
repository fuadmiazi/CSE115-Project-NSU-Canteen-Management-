#include <stdlib.h>
#include<stdio.h>
int breakfast();
int lunch();
int dinner();
int password();
int main()
{
    //system("CLS");
    int a,b;
    printf("\n======================================================================================");
    printf("\n                                           1.LOGIN                                       ");
    printf("\n======================================================================================");
    printf("\n                                           2.EXIT                                        ");
    printf("\n======================================================================================");
    printf("\n                         Press <1> For LOGIN or Press <2> For EXIT : ");
    scanf("%d",&a);
    printf("\n======================================================================================");
    if(a==2)
        exit(0);
    else if(a==1)
        password();
        system("CLS");
    printf("\n\n=============================================================================================");
    printf("\n                                WELCOME TO NSU CANTEEN SERVICE!!                               ");
    printf("\n================================================================================================\n\n");
    printf("\n================================================================================================");
    printf("\n                                   WHAT DO YOU WANT TO HAVE:                                      ");
    printf("\n================================================================================================");
    printf("\n\n\n                                         1.BREAKFAST                                            ");
    printf("\n\n================================================================================================");
    printf("\n\n\n                                         2.LUNCH                                                 ");
    printf("\n\n=================================================================================================");
    printf("\n\n\n                                         3.DINNER                                                ");
    printf("\n\n=================================================================================================");
    printf("\n\n\n                 Press <1> For BREAKFAST, Press <2> For LUNCH or Press <3> For DINNER============");
    printf("\n                     Press: ");
    scanf("%d",&b);
    system("CLS");
    if(b==1)
    breakfast();
    else if(b==2)
    lunch();
    else if(b==3)
    dinner();

}


int password()
{


    system("CLS");

    char OU[15]={"nsu"},OP[15]={"171"};
    char ui[15],pw[15];
    int q=0,i;
P1:
        printf("\n=============================================================================================");
        printf("\n                              Enter UserID: ");
        scanf("%s",ui);
        printf("\n=============================================================================================");
        printf("\n=============================================================================================");
        printf("\n                            Enter Password: ");
        //printf("\n=============================================================================================");

        for(i=0;i<15;i++){
        pw[i]=getch();
        if(pw[i]==13 || pw[i]==32)
        {
            pw[i]='\0';
            break;
        }
        printf("*");
        }
       // puts(ui);
       // puts(pw);


        q=q+1;
        if(strcmp(ui,OU)==0 && strcmp(pw,OP)==0)
            {
                return ;
            }
        else if(q<3)
        {
            printf("\n=============================================================================================");
            printf("\n                               Wrong Username or Password!                                   ");
            printf("\n=============================================================================================");
            //clrscr();
            goto P1;
        }
        else
        {
            printf("\n=============================================================================================");
            printf("                       YOU HAVE TRIED 3 TIMES!!! BETTER LUCK NEXT TIME!!!                      ");
            printf("\n=============================================================================================");
            exit(0);
        }





}

typedef struct student
{
    char name[20];
    int price;
}a;

int breakfast()
{
    system("CLS");
    int c;
    printf("\n=============================================================================================");
    printf("\n                     Please select your budget limit for BREAKFAST:                          ");
    printf("\n=============================================================================================");
    printf("\n                     1.Below 100 Taka                                                         ");
    printf("\n=============================================================================================");
    printf("\n                     2.Between 100-200 Taka                                                   ");
    printf("\n=============================================================================================");
    printf("\n                     3.Above 200 Taka                                                        ");
    printf("\n=============================================================================================");
    printf("\n                     Enter:");
    scanf("%d",&c);
    system("CLS");
    if(c==1)
    P2:

    {
    FILE *test1;
    test1=fopen("Breakfast 100.txt","r");

    int i;
    a arr[15];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some fresh BREAKFAST item for you                                  ");
        printf("\n=============================================================================================");
        for(i=0;i<15;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("We all had a bad day!");
    }
    for(i=0;i<15;i++)
    {
        printf("\n%d. %s\n",i,arr[i].name);
        printf("Price: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                        Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                        Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;

    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                           Do you want to CONFIRM the Order??");
    printf("\n=============================================================================================");
    printf("\n\n                 Press <1> to CONFIRM or <2> to return to MAIN MENU: ");
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {


    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================\n\n");
    if(price>100)
    {
        printf("\n=============================================================================================");
        printf("\n\n      SORRY!!You have crossed your budget limit.PLEASE press ENTER to try again!!");
        printf("\n=============================================================================================\n");
        getch();
        system("CLS");
        goto P2;
    }
    else
        main();
    }
    else

    fclose(test1);
}

    if(c==2)
    system("CLS");
    P3:
    {
    FILE *test1;
    test1=fopen("Breakfast 100-200.txt","r");

    int i;
    a arr[10];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some fresh BREAKFAST item for you                                  ");
        printf("\n=============================================================================================");
        for(i=0;i<10;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                     Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                     Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;

    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {

    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");

    if(price>200)
    {
        printf("\n=============================================================================================");
        printf("\n\n    SORRY!!You have crossed your budget limit.PLEASE press ENTER to try again!!");
        printf("\n=============================================================================================");
        getch();
        system("CLS");
        goto P3;
    }
    else
        main();
}
else
    fclose(test1);
    }




    if(c==3)
    //system("CLS");
    {
    FILE *test1;
    test1=fopen("Breakfast 200+.txt","r");

    int i;
    a arr[6];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some fresh BREAKFAST item for you                                  ");
        printf("\n=============================================================================================");
        for(i=0;i<6;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<6;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                       Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                       Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;

    }
    //system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {

    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");
}
    }


    else
    main();
}
int lunch()
{
    int d;
    printf("\n=============================================================================================");
    printf("\n                     Please select your budget limit for LUNCH:                              ");
    printf("\n=============================================================================================");
    printf("\n                     1.Below 100 Taka                                                         ");
    printf("\n=============================================================================================");
    printf("\n                     2.Between 100-200 Taka                                                   ");
    printf("\n=============================================================================================");
    printf("\n                     3.Above 200 Taka                                                        ");
    printf("\n=============================================================================================");
    printf("\n                     Enter:");
    scanf("%d",&d);
    if(d==1)
        system("CLS");
P4:
    {
    FILE *test1;
    test1=fopen("Lunch 100.txt","r");

    int i;
    a arr[7];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some Hot Lunch item for you                                        ");
        printf("\n=============================================================================================");
        for(i=0;i<7;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<7;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                     Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                     Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;
    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {

    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");
    if(price>100)
    {
        printf("\n=============================================================================================");
        printf("\n\n    SORRY!!You have crossed your budget limit.PLEASE press ENTER to try again!!");
        printf("\n=============================================================================================");
        getch();
        system("CLS");
        goto P4;
    }
    else
        main();
    }
else
    fclose(test1);

}

    if(d==2)
    system("CLS");
    P5:
        {
    FILE *test1;
    test1=fopen("Lunch 100-200.txt","r");

    int i;
    a arr[6];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some Hot Lunch item for you                                        ");
        printf("\n=============================================================================================");
        for(i=0;i<6;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<6;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                     Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                     Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;
    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {

    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");
    if(price>200)
    {
        printf("\n=============================================================================================");
        printf("\n\n    SORRY!!You have crossed your budget limit.PLEASE press ENTER to try again!!");
        printf("\n=============================================================================================");
        getch();
        system("CLS");
        goto P5;
    }
else
    main();
}
   else
        fclose(test1);
}

    if(d==3)
    //system("CLS");
    {
    FILE *test1;
    test1=fopen("Lunch 200+.txt","r");

    int i;
    a arr[6];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some Hot Lunch item for you                                        ");
        printf("\n=============================================================================================");
        for(i=0;i<6;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<6;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                    Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                    Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;
    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {



    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");
    }
    }
    else
        main();

}

int dinner()
{

    int dir;
    printf("\n=============================================================================================");
    printf("\n                     Please select your budget limit for DINNER:                             ");
    printf("\n=============================================================================================");
    printf("\n                     1.Below 100 Taka                                                         ");
    printf("\n=============================================================================================");
    printf("\n                     2.Between 100-200 Taka                                                   ");
    printf("\n=============================================================================================");
    printf("\n                     3.Above 200 Taka                                                        ");
    printf("\n=============================================================================================");
    printf("\n                     Enter:");
    scanf("%d",&dir);

    if(dir==1)
    system("CLS");
P6:
    {
    FILE *test1;
    test1=fopen("Dinner 100.txt","r");

    int i;
    a arr[7];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some Delicious Dinner item for you                                 ");
        printf("\n=============================================================================================");
        for(i=0;i<7;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<7;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                     Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                     Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;

    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {
    printf("\n=============================================================================================");
    printf("\n                        Total Cost is = %d Taka                                              ",price);
    printf("\n=============================================================================================");
    if(price>100)
    {
        printf("\n=============================================================================================");
        printf("\n\n    SORRY!!You have crossed your budget limit.PLEASE press ENTER to try again!!");
        printf("\n=============================================================================================");
        getch();
        system("CLS");
        goto P6;
    }
    else
        main();
    }
    else
        fclose(test1);

    }

    if(dir==2)
    system("CLS");
P7:
    {
    FILE *test1;
    test1=fopen("Dinner 100-200.txt","r");

    int i;
    a arr[6];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some Delicious Dinner item for you                                 ");
        printf("\n=============================================================================================");
        for(i=0;i<6;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<6;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                       Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                       Enter the serial number of the item:");
    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;

    }
    system("CLS");
    int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {

    printf("\n=============================================================================================");
    printf("\n                                Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");
    if(price>200)
    {
        printf("\n=============================================================================================");
        printf("\n\n    SORRY!!You have crossed your budget limit.PLEASE press ENTER to try again!!");
        printf("\n=============================================================================================");
        getch();
        system("CLS");
        goto P7;
    }
    else
        main();
    }
    else
        fclose(test1);


    }

    if(dir==3)
    system("CLS");
    {
    FILE *test1;
    test1=fopen("Dinner 200+.txt","r");

    int i;
    a arr[6];
    if(test1!=NULL)
    {
        printf("\n=============================================================================================");
        printf("\n                          Some Delicious Dinner item for you                                 ");
        printf("\n=============================================================================================");
        for(i=0;i<6;i++)
        fscanf(test1,"%[^,], %d",arr[i].name,&arr[i].price);
        fclose(test1);
    }
    else
    {
        printf("File wasn't found!");
    }
    for(i=0;i<6;i++)
    {
        printf("\n%d. %s",i,arr[i].name);
        printf("\nPrice: %d",arr[i].price);
    }

    int size;
    int ar[20];
    printf("\n\n=============================================================================================");
    printf("\n                        Enter the number of food item you want to buy: ");
    scanf("%d",&size);
    printf("\n=============================================================================================");
    printf("\n                        Enter the serial number of the item:");



    int price=0;
    int adding;
    for(i=0;i<size;i++)
    {
      scanf("%d",&ar[i]);
      price=price+arr[ar[i]].price;

    }
    system("CLS");
     int k;
    printf("\n=============================================================================================");
    printf("\n                         Do you want to CONFIRM the order??");
    printf("\n=============================================================================================");
    printf("\n\n          Press <1> to CONFIRM or <2> to return to the MAIN MENU: ");
    //fflush(stdin);
    scanf("%d",&k);
    system("CLS");
    if(k==1)
    {


    printf("\n=============================================================================================");
    printf("\n                             Total Cost is = %d Taka                                         ",price);
    printf("\n=============================================================================================");
    printf("\n\n                                 THANK YOU                                                \n\n");
    }
    else
        main();

}
}
