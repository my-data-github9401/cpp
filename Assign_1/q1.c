#include<stdio.h>

struct Date 
{
   int day;
   int month;
   int year;
};

void initDate();
void acceptDateFromConsole(struct Date *ptrDate);
void printDateOnConsole(struct Date ptrDate);

void initDate ()
{
    int date=15;
    int month=03;
    int year=1999;
    printf("%d-%d-%d",date,month,year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the day");
    scanf("%d",&ptrDate->day);
    printf("Enter the month");
    scanf("%d",&ptrDate->month);
    printf("Enter the year");
    scanf("%d",&ptrDate->year);
}

void printDateOnConsole(struct Date ptrDate)
{
    printf("Date  is %d/%d/%d ",ptrDate.day,ptrDate.month,ptrDate.year);

}

int menu()
{
    int choice;
    printf("*******************\n");
    printf("0.Exit\n");
    printf("1. init \n");
    printf("2. accept\n");
    printf("3. print \n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    printf("***********************\n");
    return choice;
}
int main()
{
    struct Date ptrDate;
  
  int choice;
  while ((choice= menu()) !=0)
  {
    switch(choice)
    {
        case 1:
        initDate();
        
        break;

        case 2:
        acceptDateFromConsole(&ptrDate);
        break;

        case 3:
        printDateOnConsole(ptrDate);
        //printf("%d-%d-%d",ptrDte.Day,ptrDate.month,ptrDate.year);
        break;

        default:
        printf("wrong choice entered");
        break;

    }
    printf("thank you for using this");

  }
  return 0;
}
  
  