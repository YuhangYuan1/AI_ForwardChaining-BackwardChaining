#include <iostream>
#include <map>
#include <string>
#include <queue>

using namespace std;

void backwardChaining()
{
   map <int, string> knowledgeBase;

   knowledgeBase[10] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[20] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[30] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[40] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[50] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[60] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[70] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[80] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[90] = "science = yes AND designing = yes THEN profession = EGR";
   knowledgeBase[100] = "science = yes AND designing = yes THEN profession = EGR";

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
