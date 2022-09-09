#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 150

int main(void)
{
  char *line = NULL;
  char buf[LEN];
  size_t len = 0;
  ssize_t lineSize = 0;
  time_t t;
  struct tm* ptr;

  t = time(NULL);
  ptr = localtime(&t);
  

  
  while ((lineSize = getline(&line, &len, stdin)) != -1) {
        strftime (buf, LEN, "%Y-%m-%d_%H:%M:%S: ", ptr);
        fputs (buf, stdout);
	printf("%s", line);
  }

  free(line);
  return 0;
}
