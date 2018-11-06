#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert(c.value >= 2 && c.value <= 14);
  assert(c.suit >= 0 && c.suit < NUM_SUITS);
}

const char * ranking_to_string(hand_ranking_t r) {

  if (r == 0) return "STRAIGHT_FLUSH";
  if (r == 1) return "FOUR_OF_A_KIND";
  if (r == 2) return "FULL_HOUSE";
  if (r == 3) return "FLUSH";
  if (r == 4) return "STRAIGHT";
  if (r == 5) return "THREE_OF_A_KIND";
  if (r == 6) return "TWO_PAIR";
  if (r == 7) return "PAIR";
  if (r == 8) return "NOTHING";

  return "";
}

char value_letter(card_t c) {
  char x = '0';
  if (c.value < 10){
    x = c.value + '0';
  }
  if (c.value == 11) x = 'J';
  if (c.value == 12) x = 'Q';
  if (c.value == 13) x = 'K';
  if (c.value == 14) x = 'A';

  return x;
}


char suit_letter(card_t c) {
  char y = 's';

  if (c.suit == HEARTS) y = 'h';
  if (c.suit == DIAMONDS) y = 'd';
  if (c.suit == CLUBS) y = 'c';

  return y;
}

void print_card(card_t c) {
  printf("%c%c",value_letter(c), suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;

  if (value_let == '0'){
    temp.value = 10;
  }
  if (value_let == 'J'){
    temp.value = 11;
  }
  if (value_let == 'Q'){
    temp.value = 12;
  }
  if (value_let == 'K'){
    temp.value = 13;
  }
  if (value_let == 'A'){
    temp.value = 14;
  }
  
  if (value_let >= 50 && value_let < 58){
    temp.value = value_let - 48;
  }
  
  switch(suit_let){
  case 's':
    temp.suit = SPADES;
    break;
  case 'h':
    temp.suit = HEARTS;
    break;
  case 'd':
    temp.suit = DIAMONDS;
    break;
  case 'c':
    temp.suit = CLUBS;
    break;
  }
  assert_card_valid(temp);  
    
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;

  assert(c >= 0 && c < 52);
  
  if (c%13 < 1){
    temp.value = c+2;
    temp.suit = SPADES;
  } else if (c%13 >= 1 && c%13 < 2) {
    temp.value = c - 11;
    temp.suit = HEARTS;
  } else if (c%13 >= 2 && c%13 < 3) {
    temp.value = c - 24;
    temp.suit = DIAMONDS;
  } else {
    temp.value = c - 37;
    temp.suit = CLUBS;
  }
  
  return temp;
}
 
