#include <iostream>
#include <map>
#include <string>
#include <queue>

using namespace std;

void backwardChaining()
{
   map <int, string> knowledgeBase;

   //knowledge base
   knowledgeBase[10] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[20] = "science = yes AND experiment = yes THEN profession = SCI";
   knowledgeBase[30] = "science = yes AND experiment = no THEN profession = MED";
   knowledgeBase[40] = "science = yes AND nursing = yes THEN profession = HTC";
   knowledgeBase[50] = "science = no AND art = yes AND communicate = yes AND decisionMaking = yes THEN profession = BUS";
   knowledgeBase[60] = "science = no AND art = yes AND communicate = yes AND decisionMaking = no THEN profession = COM";
   knowledgeBase[70] = "science = no AND art = yes AND reading = yes AND writing = yes THEN profession = LBA";
   knowledgeBase[80] = "science = no AND art = yes AND reading = yes AND writing = no THEN profession = APA";
   knowledgeBase[90] = "science = no AND art = yes AND reading = no AND crafting = yes THEN profession = FNA";
   knowledgeBase[100] = "science = no AND art = yes AND grading = yes THEN profession = EDU";

   for(int i = 0; i < 10 ; i++)
   {
       int j;
       j = (i + 1)* 10;
       cout << knowledgeBase[j];
   }
}
int main()
{
    backwardChaining();

    return 0;
}
