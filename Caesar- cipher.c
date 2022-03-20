#include<stdio.h>
int main()
{
int i, key;
char a[100], c1;
// take message for encryption
printf("Enter a message for encryption: ");
scanf("%s",&a);
printf("Enter key value: ");
scanf("%d", &key);
for(i = 0; a[i] != '\0'; i++)
{
c1 = a[i];
if(c1 >= 'a' && c1 <= 'z')
{
c1 = c1 + key;
if(c1 > 'z')
{
c1 =c1-'z'+'a'-1;
}
a[i] =c1;
}
else if(c1 >= 'A' && c1 <= 'Z')
{
c1 = c1+key;
if(c1 > 'Z')
{
c1 = c1-'Z'+'A'-1;
}
a[i] = c1;
}
}
// output the encrypted message
printf("Encrypted message is: %s", a);
return 0;
}
