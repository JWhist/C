/* Program to evaluate face value.
 * I am so awesome
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int count = 0;
    do {
      puts("Enter the card_name: ");
      scanf("%2s", card_name);
      int val = 0;
      switch (card_name[0]) {
        case 'J':
        case 'Q':
        case 'K':
          val = 10;
          break;
        case 'A':
          val = 11;
          break;
        case 'X':
          continue;
        default:
          val = atoi(card_name);
          if (val < 1 || val > 10) {
            puts("No can do my friend");
            continue;
          }
      }
      // /* Check if the value is 3 to 6 */
      if (val > 2 && val < 7) {
        count++;
      } else if (val == 10) {
        count--;
      }
      printf("Current count: %i\n", count);
    } while (card_name[0] != 'X');
    return 0;
}
