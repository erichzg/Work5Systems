#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen2(char *);
char * strcpy2(char *, char *);
char * strcat2(char *, char *);
int strcmp2(char *, char *);
char * strchr2(char *, char);

int strlen2(char *string) {
  int count = 0;
  while (*string++) {
    count++;
  }
  return count;
}

char * strcpy2(char *dest, char *source) {
  char * placeholder = dest;
  while (*source) {
    *dest = *source++;
    dest++;
  }
  return placeholder;
}

char * strcat2(char *dest, char *source) {
  char * placeholder = dest;
  while (*dest++);
  strcpy2(dest, source);
  return placeholder;
}

int strcmp2(char *s1, char *s2) {
  while (*s1 * *s2) {
    if (*s1 == *s2) {
      s1++;
      s2++;
    }
    else {
      return *s1 - *s2;
    }
  }
  return 0;
}


char * strchr2(char *s, char c) {
  while (*s) {
    if (*s == c) {
      return s;
    }
    s++;
  }
  return NULL;
}

int main() {
  char s1[] = "?W?";
  char s2[] = "hello";
  char s3[] = "goodbye";
  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n\n", s3);
  
  printf("Testing strlen(s2):\n");
  printf("[standard]: %d\n", strlen(s2));
  printf("[ours]: %d\n\n", strlen2(s2));

  printf("Testing strcpy(s1, s2):\n");
  printf("[standard]: %s\n", strcpy(s1, s2));
  printf("[ours]: %s\n\n", strcpy2(s1, s2));

  printf("Testing strcat(s1, s3):\n");
  printf("[standard]: %s\n", strcat(s1, s3));
  printf("[ours]: %s\n\n", strcat2(s1, s3));

  printf("Testing strchr(s1, 'l'):\n");
  printf("[standard]: %p\n", strchr(s1, 'l'));
  printf("[ours]: %p\n\n", strchr2(s1, 'l'));

  printf("Testing strchr(s1, 0):\n");
  printf("[standard]: %p\n", strchr(s1, 0));
  printf("[ours]: %p\n\n", strchr2(s1, 0));

  printf("Testing strcmp(s1, 'z'):\n");
  printf("[standard]: %d\n", strcmp(s1, 'z'));
  printf("[ours]: %d\n\n", strcmp2(s1, 'z'));
}
