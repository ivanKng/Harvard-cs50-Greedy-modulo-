#include<cs50.h>
#include<math.h>
#include<stdio.h>

/*
    create loop to prompt user at least once for valid input
        use round to get rid of floating point imprecision
        use modulo function to pass remaining change rather than using for () and if ()
*/
float change;
int changeBack; //store float change variable in variable int changeBack
int q;
int r;  //modulo of quarter
int d;
int e;  //modulo of dime
int n;
int o;  //modulo of nickel
int p;
int x;  //modulo of penny (x because q is already taken and i like x)
int main(void)
{
    do
    {
        change = get_float("Enter amount of change owed: \n");
    }
    while (change < 0);

    change = round(change * 100);       //round change to eliminate floating point imprecision
    changeBack = change;                //change variable is of datatype float; to use variables w/ datatype int convert change to int
    /*
    take change and / it by 25 to determine amount of quarters
        find way to take remainder and store in a variable when modding change by 25..10..5..1
    */
    //Quarters
    q = changeBack / 25;
    r = changeBack % 25;
    //Dimes
    d = r / 10;
    e = r % 10;
    //Nickels
    n = e / 5;
    o = e % 5;
    //Pennies
    p = o / 1;
    x = o % 1;

    printf("%i quarters, %i dimes, %i nickels & %i pennies were used\n", q, d, n, p);
}