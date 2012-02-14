#define _XOPEN_SOURCE
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <crypt.h>
#include <string.h>
     
int
main(void)
{
  //unsigned long seed[2];
  //char salt[] = "$1$........";
  char salt[] = "ab";
  char *password;

  char text[20];
  fputs("enter plaintext password: ", stdout);
  fflush(stdout);
  if ( fgets(text, sizeof text, stdin) != NULL )
    {
      char *newline = strchr(text, '\n'); /* search for newline character */
      if ( newline != NULL )
        {
          *newline = '\0'; /* overwrite trailing newline */
        }
      
    }
  strncpy(text, salt, 2); /* first 2 chars become salt */

  /* Read in the user's password and encrypt it. */
  password = crypt(text, salt);
     
  /* Print the results. */
  puts(password);
  return 0;
}
