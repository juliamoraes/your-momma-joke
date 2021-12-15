#include <stdio.h>
#include <stdlib.h>


int main(void) {
  char stringIn[100];
 const char jokes[41][10000] = {
   {"Yo mama so stupid, she got hit by a parked car"},
   {"Yo mama's so fat when I pictured her in my head she broke my neck."},
   {"Yo momma's so ugly, her birth certificate is an apology letter from the condom factory."},
   {"Your mom's so poor, ducks throw bread at her."},
   {"Yo mama's so poor, she cant even afford to pay attention."},
   {"Yo mama is so ugly, her portraits hang themselves."},
   {"Yo mama is so fat, when she stepped on a scale it said, One person at a time please."},
   {"Yo mama jokes are old and overused just like yo mama"},
   {"Yo mama is so ugly, that when she went to an ugly contest they said sorry, no professionals"},
   {"Yo momma's so fat, when she uses the keyboard she presses every key at once!"},
   {"Yo momma's so stupid, she steals samples from stores!"},
   {"Yo momma's so fat, she only knows 3 letters of the alphabet: KFC."},
   {"o mama so ugly, when your dad drops her off for work he gets a fine for littering."},
   {"Yo' Mama is so ugly, yo' daddy takes her to work with him so he doesn't have to kiss her goodbye."},
   {"Yo mama so dark when I clicked on her profile pic, I thought my phone died."},
   {"Yo mamma is so stupid, she stopped her car at a stop sign and she's still waiting for it to turn green."},
   {"Yo momma so fat she fell out of the family tree."},
   {"Yo mama so fat her shadow got stretch marks"},
   {"Yo momma so fat she fell in love and broke it"},
   {"Yo mamma's so ugly, when her house was being robbed, the mugger took off his mask and made her wear it."},
   {"Yo mama so nasty she puts ice down her pants to keep the crabs fresh"},
   {"Yo mama so fat, she doesn't need internet, she's already worldwide."},
   {"Yo momma's so fat, the Hogwarts Sorting Hat put her in all 4 houses!"},
   {"Your mamma's so fat people jog around her for exercise."},
   {"Yo mama so ugly the Terminator said, I won't be back."},
   {"Yo mama so fat, Dracula sucked her blood and got diabetes."},
   {"Yo mama is so fat that when she takes a shower her feet don't get wet."},
   {"Yo momma so ugly she is the reason they turn off the lights at the movie theater."},
   {"Your momma is so old when her breast milk comes out it's powder."},
   {"Yo momma's so fat she puts a cup of water in the bathtub and it still overflows!"},
   {"If pigs could fly, your mom would have wings."},
   {"Yo mama so fat that when aliens came to invade us they said, Wow! Two planets in one."},
   {"Yo mama so fat that when she was in school she sat next to everybody."},
   {"Yo mama so ugly when she was born the doctor saw her butt and then her face and he said, It's twins!"},
   {"Yo mama so hairy, you almost died of carpet burn at birth"},
   {"Yo momma so fat, she pressed up on the elevator and it went down"},
   {"Yo mama is so stupid, she wanted to cancel a hockey game due to ice on the field."},
   {"Yo mama so fat I missed all 6 seasons of ‘Lost’ when she walked past the tv"},
   {"Yo momma is so stupid she went to the orthodontist to get a Bluetooth."},
   {"Yo mama is so stupid she took the puzzle back to the store because she thought it was broken!"},
   {"Yo mama so ugly when she went into a haunted house she came out with a job application."}
   
 };
printf("Your momma is jokes\ntype S to stop it\n");
 int number;

char c;
do{
  c = getchar();
 number = rand()%41;

printf("%s\n", jokes[number]);

} while (c != 'S');


  return 0;

}
