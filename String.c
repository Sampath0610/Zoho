#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int space,character,nooflines,stringlength;
    int position=0;
    char str[100];
    scanf("%s",str);
    int centerelement=strlen(str)/2;
    stringlength=strlen(str);
    for(nooflines=1;nooflines<=stringlength;nooflines++)
    {
      for(space=1;space<=stringlength;space++)
      {
          printf(" ");
      }
      for(character=1;character<2*nooflines;character++)
      {
          printf("%c",str[centerelement++]);
          
          if(centerelement==stringlength)
          centerelement=0;
      }
      printf("\n");
    }
    return 0;
}