#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

//Function to return N for date given

int N_for_date (struct date dateGiven)
{
    int N, f, g;
    //still have to account for year conditionals
    //N = 1461 * dateGiven.year / 4 + 153 * dateGiven.month / 5 + dateGiven.day;
    if ( dateGiven.month <= 2)
    {
        f = dateGiven.year - 1;
        g = dateGiven.month + 13;
    }
    else
    {
        f = dateGiven.year;
        g = dateGiven.month + 1;
    }
    
    
    N = 1461 * f / 4 + 153 * g / 5 + dateGiven.day;
    
    return N;
    
}

int main (void)
{

//declare variables
struct date date1, date2;
int N_for_date (struct date dateGiven);

//user inputs two dates, dates gets stored in two structures

printf("Well hello there!  This programs figures out the number of days that have elapsed between two dates.\n");

printf("Please input the first chronological date (mm dd yyyy) : ");
scanf("%i%i%i", &date1.month, &date1.day, &date1.year);

printf("Please input the second chronological date (mm dd yyyy) : ");
scanf("%i%i%i", &date2.month, &date2.day, &date2.year);


//function returns N for date/dates given
int NforDate1 = N_for_date (date1);
int NforDate2 = N_for_date (date2);

//find difference between two N values
int ElapsedDays = NforDate2 - NforDate1;

//print the difference (elapsed days)
printf("There are %i days between those two dates.\n", ElapsedDays);

}

