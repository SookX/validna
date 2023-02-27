#include <stdio.h>

int main() {
  char name;
  int i = 0;
  printf("Enter a name: ");
  while ((name = getchar()) != '\n') {
    if (i == 0) {
      if (name != '_' && E (name < 'a' || name > 'z') && (name < 'A' || name > 'Z')) {
        printf("The name is not a valid identifier.\n");
        return 0;
      }
    } else {
      if (name != '_' && (name < '0' || name > '9') && (name < 'a' || name > 'z') && (name < 'A' || name > 'Z')) {
        printf("The name is not a valid identifier.\n");
        return 0;
      }
    }
    i++;
  }

  printf("The name is a valid identifier.\n");
  return 0;
}
