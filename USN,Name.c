#include<stdio.h>
#include<conio.h>
void main()
{
    struct details
    {
        char USN[10];
        char name[30];
        int mob;
    
    }s1;
    printf("enter your USN,name and mobile number");
    scanf("%s%s%d",s1.USN,s1.name,s1.mob);
    printf("The given details are %s%s%d",s1.USN,s1.name,s1.mob);
}