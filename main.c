// From Listing 11.4 Arrays of Structures; p.254
//
#include <stdio.h>
#include <string.h>

//define a structure to hold entries

struct entry
{
    char fname[20];
    char lname[20];
    char phone[13];
};

//declare an array of structures
struct entry list[4];

int i;

int main(void)
{
    printf("\n\nEntering four names...... for testing purposes, use: karen, tom, kelly, erik in that order....");
    printf("\n-----------------------------------------\n");

    //loop to input data for four people
    for (i=0; i<4; i++)
    {

        printf("\nEnter first name: ");
        scanf("%s",list[i].fname);
        printf("\nEnter last name: ");
        scanf("%s",list[i].lname);
        printf("\nEnter phone in 123-456-8790 format: (for testing, just enter different numbers (3 digits) for each)");
        scanf("%s",list[i].phone);

    }

    //print 2 blank lines
    printf("\n\n********** OUTPUT *************");

    //loop to display data
    for (i=0; i<4; i++)
    {
        printf("\nName: %s %s", list[i].fname,list[i].lname);
        printf("\t\t\tPhone: %s\n",list[i].phone);
    }
    printf("\n-----------------------------------------------------------------------------");

    // Additional testing to see of examples of moving data like on pg 254 actually works
    // assumes input data entered as :
    // karen mathes 847-738-8135
    // tom mathes 847-456-8695
    // kelly mathes 815-788-0956
    // erik mathes 999-999-9999
    //

    list[1]=list[2];
    printf("\n\nNew data after copying one structure of an array to another");
    printf("\nCopy kelly data to tom if original input is karen,tom,kelly,erik");
    printf("\n-----------------------------------------------------------------------------");
    for (i=0; i<4; i++)
    {
        printf("\nName: %s %s", list[i].fname,list[i].lname);
        printf("\t\t\tPhone: %s\n",list[i].phone);
    }

    strcpy(list[0].phone, list[3].phone);
    printf("\n\nNew data after strcpy function");
    printf("\nString copy erik data to karen if original input is karen,tom,kelly,erik");
    printf("\n-----------------------------------------------------------------------------");
    for (i=0; i<4; i++)
    {
        printf("\nName: %s %s", list[i].fname,list[i].lname);
        printf("\t\t\tPhone: %s\n",list[i].phone);
    }

    list[0].phone[0] = list[1].phone[2];
    printf("\n\nNew data after moving individual parts (characters) of data elements");
    printf("\nCopy 3rd char in phone from tom to 1st char in phone from karen if original input is karen,tom,kelly,erik");
    printf("\n-----------------------------------------------------------------------------");
    for (i=0; i<4; i++)
    {
        printf("\nName: %s %s", list[i].fname,list[i].lname);
        printf("\t\t\tPhone: %s\n",list[i].phone);
    }

    printf("\n\n");

    return 0;

}
