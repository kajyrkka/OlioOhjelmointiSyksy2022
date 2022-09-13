#include "game.h"

Game::Game()
{
    resetValues();
    askMaxNumber("Anna maksimi numero ja pelataan sitten valilla 1 - Maksimi ");
    drawRandomNumber();
}

Game::Game(short max)
{
    resetValues();
    maxNumber = max;
    drawRandomNumber();
}

Game::~Game()
{

}

short Game::playTheGame()
{
    do
    {
        count++;
        string s = "give random value between 1 and ";
        s = s + to_string(maxNumber);
        askUserInput(s);

        if(userValue<randomValue)
        {
            cout<<"Too small try again"<<endl;
        }
        if(userValue > randomValue)
        {
            cout<<"Too big try again"<<endl;
        }

    }while(randomValue!=userValue);
    cout << "arvasit oikein " << endl;
    return count;
}

void Game::setMaxNumber(short max)
{
    maxNumber = max;
}

void Game::askUserInput(string s)
{
    cout<<s<<endl;
    cin>>userValue;
}

void Game::askMaxNumber(string s)
{
    cout<<s<<endl;
    cin>>maxNumber;
}

void Game::drawRandomNumber()
{
    srand(std::time(0));
    randomValue = (rand()%maxNumber)+1;
}

void Game::resetValues()
{
    randomValue=0;
    userValue=0;
    count = 0;
    maxNumber = 0;
}
