#include <iostream>
int main () {

    char guitar ;
    char contest;
    char guitar_type;
    char decide;


    std::cout << " * I want to be a Rock Star * \n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << " My name is Mike and I'm 22 years \n";
    std::cout << "Last week i have finished my guitar class and I'm wondering if i can find a band to perform \n";
    std::cout << "Before leaving my last guitar class my teacher told me that my guitar\n needs some tuning check before starting to perform \n";
    std::cout << "This is quite strange because i think my guitar sounds very good and \n I'm not sure if i should do the check on a professional Music Store \n";

    std::cout << "What do you think , should i check my guitar ? \n";
    std::cout << "A) Yes , you should do a check \n";
    std::cout << "B) No , you should save some money , the guitar is sounds fantastic \n";

    std::cin >> guitar;

    if (guitar == 'A' || guitar == 'a')
{
    std::cout << "Ok , maybe my guitar needs a tuning check , in the end i need to be sure the guitar sounds fantastic \n";
}

    else if (guitar == 'B' || guitar == 'b')
   {
       std::cout << "Great , my guitar sounds fantastic , i will save the money for some beers with my friends \n";
   }
    else {
        std::cout << "You are not helping me, please choose a valid answer A or B";

         return 0;
    }
std::cout << " On the next day walking on the streets i saw a big poster on a wall with an announcement stating that\n Mr Smith a famous showbiz man is organizing a contest for the next super rock star band \n";
std::cout << "I need to make a decision \n";
std::cout << "Should i go to the contest ?\n";
std::cout << "A) Yes , this is the chance of your life\n";
std::cout << "B) No , you are not ready yet , you should learn more\n";

std::cin >> contest;

if (contest == 'A' || contest == 'a')
{
    std::cout << "Hell yeah , this is the chance of my life i will go to Won the contest.\n";

    std::cout << "On the next day I'm on the stage with the rest of the guitars competitors.\n";
    std::cout << "Some of them are newbies but others I know that are experienced and I'm wondering what should i perform to amaze the judges and Mr. Smith : \n";
    std::cout << "A) Play my secret solo that I've been working so hard with my electric guitar.\n";
    std::cout << "B) Play a nice song with the acoustic guitar, the ballads are so popular on these days.\n";
    std::cin >> guitar_type;

    if (guitar_type == 'A' || guitar_type == 'a'){

        std::cout << "The judges and Mr Smith himself were amazed by my solo and for sure i will be the next rock star with my band \n";
        }

    else if (guitar_type == 'B' || guitar_type == 'b')
    {
        std::cout << "The judges and Mr Smith himself were amazed by my acoustic guitar ballad and for sure i will be the next rock star with my band \n";
    }
     else {
        std::cout << "Please choose a valid answer A or B\n";

        return 0;
     }

}

    else if (contest =='B' || contest == 'b')
    {
        std::cout << "Ok , maybe I'm not ready yet, I should learn and practice more \n";
        std::cout << "On the next day I'm home wondering if I should :\n";
        std::cout << "A) Go to a new guitar class \n";
        std::cout << "B) Practice more in the garage ";
        std::cin >> decide;
        if (decide == 'A' || decide == 'a'){

            std::cout << "I will check on internet for a new guitar classes \n";
            }

            else if (decide == 'B' || decide =='b')
                {
            std::cout << "That's a good idea, I will practice more in the garage \n";
        }
        else
        {
            std::cout << "Please choose a valid A or B\n";

           return 0;
           }
    }
else
{
    std::cout << "I need an answer ASAP, please choose a valid answer A or B\n";

         return 0;
}

}

