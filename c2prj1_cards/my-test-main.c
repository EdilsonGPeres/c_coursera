#include "cards.h"
#include <stdio.h>

int main(void) {
  card_t c,h;
  c.value = 10;
  c.suit = DIAMONDS;
  char d;
  hand_ranking_t r = FLUSH;
  assert_card_valid(c);
  printf("Is valid\n");
  ranking_to_string(r);
  d = value_letter(c);
  printf("%c\n",d);
  d = suit_letter(c);
  printf("%c\n",d);
  print_card(c);
  h = card_from_letters('0', 'd');
  printf("\n%d%d\n",h.value,h.suit);
  h = card_from_num(0);
  printf("%d%d\n",h.value,h.suit);
}
