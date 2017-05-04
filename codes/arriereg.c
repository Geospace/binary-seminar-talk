#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define PASSWORD "pocebleu"

typedef enum e_states {
  SUCCESS,
  FAILURE = 69
} t_states;

static bool is_good_password(const char *argv)
{
  if (strcmp(argv, PASSWORD) == 0)
    return (true);
  return (false);
}

int main(int argc, const char *argv)
{
  char input[12] = {0};
  int input_ok = false;

  printf("Ce binaire est protégé.\n");
  printf("Mot de passe : ");
  scanf("%11s", input);
  if ((input_ok = is_good_password(input)) == true)
    printf("Mot de passe correct.\n");
  else
    printf("Mot de passe incorrect.\n");
  return (input_ok == true ? SUCCESS : FAILURE);
}
