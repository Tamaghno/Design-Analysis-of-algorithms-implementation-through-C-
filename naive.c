#include<stdio.h>
#include<string.h>
 
void pattern_matching(char *str, char *pattern);
 
int main()
{
      char str[30], pattern[30];
      printf("\nEnter a String:\t");
      scanf("%s", str);
      printf("\nEnter a Pattern to Match:\t");
      scanf("%s", pattern);
      pattern_matching(str, pattern);
      return 0;
}
 
void pattern_matching(char *str, char *pattern)
{
      int pattern_length = strlen(pattern);
      int str_length = strlen(str);
      for(int m = 0; m <= str_length - pattern_length; m++)
      {
            int n;
            for(n = 0; n < pattern_length; n++)
            if(str[m + n] != pattern[n])
            {
                  break;
            } 
            if(n == pattern_length)
            {
                  printf("Pattern Matched at Position:\t%d\n", m);
            }
      }
}
