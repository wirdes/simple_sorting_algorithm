#include <stdio.h>

#include <string.h>

int karsi = 0, yer = 0;
void shorting(char * l, size_t n) {
  int i = 0, j = 0;
  char ch = '0';
  while (ch >= '0' && ch <= '9') {
    for (j = i + 1; j < n; j++) {
      if (ch == l[j]) {
        char t = l[j];
        l[j] = l[i];
        l[i] = t;
      }
      if (l[i] == ch) i++;
    }
    ch++;
  }
}
int main(void) {
  char c[] = "89910535670671624307214104071240614";
  printf("%s", c);
  shorting(c, strlen(c));
  printf("\n");
  printf("%s", c);

}