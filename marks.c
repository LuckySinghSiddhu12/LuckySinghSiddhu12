#include<stdio.h>
int main()
{
     int m1, m2, m3, tot;
     float per;
     printf("Enter Marks of Three Subjects:\n");
     scanf("%d %d %d ", &m1, &m2, &m3);
     tot = m1+m2+m3;
     printf("\nTotal Marks of Student = %d\n",tot);
     /*condition for checking student is pass or not.*/
     if(m1>=40 && m2>=40 && m3>=40 )
     {
          printf("\nStudent is PASS\n");
          per= tot/3.0;
          printf("\nPercentage of a Student = %.2f",per);
     }
     else
          printf("\nStudent is FAIL");
     return 0;
}
