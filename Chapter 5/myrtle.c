#include <stdio.h>

typedef struct {
  const char *name;
  const char *species;
  int age;
} turtle;

void happy_birthday(turtle *t) //       <--  Pass by Reference
{
  (*t).age = (*t).age + 1; //(*t).age == t->age 
  printf("Happy Birthday %s! You are now %i years old!\n", (*t).name, (*t).age);
}

// void happy_birthday(turtle t)         <--  Pass by Value
// {
//   t.age = t.age + 1;  
//   printf("Happy Birthday %s! You are now %i years old!\n", t.name, t.age);
// }

int main()
{
  turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
  happy_birthday(&myrtle);  //  Pass in pointer
//happy_birthday(myrtle);  //  Pass in values
  printf("%s's age is now %i\n", myrtle.name, myrtle.age);
  return 0;
}
