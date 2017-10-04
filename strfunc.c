#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"

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

char * strchr2(char *s, char c) {
  while (*s) {
    if (*s == c) {
      return s;
    }
    s++;
  }
  if (!c) {
    return s;
  }
  return NULL;
}

int strcmp2(char *s1, char *s2) {
  while (*s1 * *s2) {
    if (*s1 - *s2) {
      return *s1 - *s2;
    }
    s1++;
    s2++;
  }
  return 0;
}
