#include <iostream>
#include <cctype>
#include <algorithm>
#include <map>
#include <string>
#include <queue>

using namespace std;

string backwardChaining()
{
   map <string, int> conclusionList;
   map <int, string> knowledgeBase;

   /*** conclusion list ***/

   conclusionList["EGR"] = 10;      //conclusion profession = Engineering   match Rule 10
   conclusionList["SCI"] = 20;      //conclusion profession = Science       match Rule 20
   conclusionList["MED"] = 30;      //conclusion profession = Medical       match Rule 30
   conclusionList["HTC"] = 40;      //conclusion profession = Health Care   match Rule 40
   conclusionList["BUS"] = 50;      //conclusion profession = Business      match Rule 50
   conclusionList["COM"] = 60;      //conclusion profession = Communication match Rule 60
   conclusionList["LBA"] = 70;      //conclusion profession = Liberal Arts  match Rule 70
   conclusionList["APA"] = 80;      //conclusion profession = Applied Arts  match Rule 80
   conclusionList["FNA"] = 90;      //conclusion profession = Fine Arts     match Rule 90
   conclusionList["EDU"] = 100;     //conclusion profession = Education     match Rule 100

   /*** knowledge base ***/

   /** Rule 01 **/
   knowledgeBase[10] = "science = yes AND designing = yes THEN profession = EGR";
   /** Rule 02 **/
   knowledgeBase[20] = "science = yes AND experiment = yes THEN profession = SCI";
   /** Rule 03 **/
   knowledgeBase[30] = "science = yes AND experiment = no THEN profession = MED";
   /** Rule 04 **/
   knowledgeBase[40] = "science = yes AND nursing = yes THEN profession = HTC";
   /** Rule 05 **/
   knowledgeBase[50] = "science = no AND art = yes AND communicate = yes AND decisionMaking = yes THEN profession = BUS";
   /** Rule 06 **/
   knowledgeBase[60] = "science = no AND art = yes AND communicate = yes AND decisionMaking = no THEN profession = COM";
   /** Rule 07 **/
   knowledgeBase[70] = "science = no AND art = yes AND reading = yes AND writing = yes THEN profession = LBA";
   /** Rule 08 **/
   knowledgeBase[80] = "science = no AND art = yes AND reading = yes AND writing = no THEN profession = APA";
   /** Rule 09 **/
   knowledgeBase[90] = "science = no AND art = yes AND reading = no AND crafting = yes THEN profession = FNA";
   /** Rule 10 **/
   knowledgeBase[100] = "science = no AND art = yes AND grading = yes THEN profession = EDU";

   //clear the white space of the string
   string tempstr = knowledgeBase[10];

   tempstr.erase(remove_if(tempstr.begin(), tempstr.end(), ::isspace),tempstr.end());
   cout << "this is the string got white space removed : " << tempstr << endl;

   
       
   return "This is from the backwardChaining";
}

void forwardChaining(string profession)
{
    cout << "fowardChaining!" << endl;
    cout << profession << endl;
}
int main()
{
    string profession;
    char choice;
    bool end1 = false;

    /*** Main Menu Interface ***/

    cout << "***********************************************************************" << endl;
    cout << "               ==Welcome to the Career Advising System!==" << endl;
    cout << endl;
    cout << "Please Answer the following questions to help us determine your career." << endl;
    cout << "Please choose an option:" << endl;

    while(!end1)
    {
       cout << "A. Start Career Advising." << endl;
       cout << "B. Exit the system" << endl;
       cin >> choice;
       cout << endl;

       if(choice == 'A' || choice == 'a')

       {
            profession = backwardChaining();
            forwardChaining(profession);
       }

       else if(choice == 'B' || choice == 'b')
        end1 = true;

       else
        cout << "ERROR! Invalid input, Please choose again!" << endl;
    }

    return 0;
}
