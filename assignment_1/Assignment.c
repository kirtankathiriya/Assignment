#include<stdio.h>
int main()
{
    //1. Write a program to print Hello Students on the screen
    printf("Hello Student \n");
    //2. Write a program to print Hello in the first line and Students in the second line
    printf("Hello \nStudent \n");
    //3. Write a program to print “iNeuron” on the screen. (Remember to print in double quotes)
    printf("\"iNeuron\" \n");
    //4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
    float r,t;
    printf("Enter The Radius=");
    scanf("%f",&r);
    t=3.14*r*r;
    printf("Circle Of Radius is %f \nArea of Ciecle %f \n",r,t);
    //5. WAP to calculate the length of String using printf function.
    char s[]="Kirtan";
    int length=sizeof(s);
    printf("String Length=%d",length-1);
    //6. WAP to print the name of the user in double quotes.Expected output format – “Hello , Amit Kumar”
    printf(" \"Hello,Amit Kumar\"\n");
    //7. WAP to print “%d” on the screen.
    printf("%%d \n");
    //8. WAP to print “\n” on the screen.
    printf("\\n \n");
    //9. WAP to print “\\” on the screen.
    printf("\\\\ \n");
    /* 10. WAP to take date as an input in below given format and convert the date format and
    display the result as given below.
    User Input date format – “DD/MM/YYYY” (27/11/2022)
    Output format –
    “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    */
    int d,m,y;
    printf("Enter the Date in a like DD/MM/YYYY \n");
    printf("DD=");
    scanf("%d",&d);
    printf("MM=");
    scanf("%d",&m);
    printf("YYYY=");
    scanf("%d",&y);
    printf("Output is day=%d,Month=%d,Year=%d \n",d,m,y);
    return 0;
    //11. WAP to take time as an input in below given format and convert the time format and
    //display the result as given below.
    //User Input date format – “HH:MM”
    //Output format – “HH hour and MM Minute”
    //Example –
    //“11:25” converted to “11 Hour and 25 Minute”
    int h,M;
    printf("Enter Value like a HH:MM \n");
    printf("HH=");
    scanf("%d",&h);
    printf("MM=");
    scanf("%d",&M);
    printf("output is %d Hour and %d Minute \n",h,M);
    return 0;
    //12. Find output of below code:
    int x=printf("iNeuron");
    printf("%d",x);
    return 0;
}
