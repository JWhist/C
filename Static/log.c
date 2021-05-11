
#include <stdio.h>
#include "log.h"
#include <time.h>
#include <string.h>

void create_log(char *user_name) {
   // Eliminate newline at end of name so date prints on same line
   size_t length = strlen(user_name);
   if (user_name[length -1] == '\n') {
     user_name[length-1] = '\0';
   }

   FILE *fp;
   char c;
   //Get current local time
   // time_t rawtime;
   // struct tm *info;
   // time( &rawtime );
   // info = localtime( &rawtime );

   fp = fopen("/home/jordan/Desktop/C/Static/logfile.txt", "a");

   fprintf(fp, "Username: %-25s\n", user_name);
   //fprintf(fp, "Username: %-25s Date: %s", user_name, asctime(info));
   fclose(fp);

   fp = fopen("/home/jordan/Desktop/C/Static/logfile.txt", "r");

   printf("LOG FILE\n");
   c = fgetc(fp);
   while (c != EOF) {
    printf("%c", c);
    c = fgetc(fp);
   }
   printf("\n");
   fclose(fp);
}