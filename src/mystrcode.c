#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;
   while (*p)
      ++p;
   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "G tutorials",
      "Tials Point",
      " added one more line"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
