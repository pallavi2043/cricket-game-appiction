#include <iostream>
using namespace std;
int playining();
void decidewinning();

string batmanname, bowlername;
int inning;

class team
{
public:
    string teamname;
    string playername[3];
    int totalscore;

    void welcomeusers()
    {
        cout << "\t \t welcome to gully circket match\n";
    }

    void displayplayers()
    {
        cout << "\n\nplayers of teams=\t" << teamname;
        for (int i = 0; i < 3; i++)
        {
            cout << "\n\t-->"
                 << playername[i];
        }
    }

    void selectplayer()
    {
        cout << "\n\nfor the inning choose player from team A and team B\n";
        cout << "\nteam which is going to start the batting is:\t" << teamname;
        cout << "\n bats man from the given players\t\t";
        cin >> batmanname;
        cout << "\n bowler from another team given players\t\t";
        cin >> bowlername;
        cout << "\n batting player is=\t" << batmanname << "\t\tvs\t"
             << "bowler name is=\t" << bowlername;
    }

    void startinning()
    {
        cout << "\n\ntype which inning you want to play(1/2) =\t";
        cin >> inning;
        cout << "\nthe game is now begeins";
        cout << " \ninning=\t" << inning;
        cout << "\nbat team=\t" << teamname;
    }

    int displayscore()
    {
        cout << "\n"
             << teamname << "\t=" << totalscore;
        return totalscore;
    }
};

void decidewinning(int teama, int teamb)
{
    cout << "\n\n\nwinning team is:";
    if (teama > teamb)

        cout << "\n\tteam A is winner";

    else if (teamb > teama)

        cout << "\n\tteam B is winner";

    else

        cout << "\n\tteam A and team B have equal score";
}

int playinning()
{
    int run, k, sum = 0;
    cout << "\nrun in each ball of over are(run must be in the range of 0-6)\t\t-->";
    for (k = 1; k <= 6; k++)
    {
        cout << "\nrun in" << k << " ball:\t";
        cin >> run;
        sum = sum + run;
    }
    return sum;
}

int main()
{
    team teamA;
    teamA.welcomeusers();
    teamA.teamname = "SULTAN";
    teamA.playername[0] = "pallavi";
    teamA.playername[1] = "yuvraj";
    teamA.playername[2] = "shivam";
    teamA.displayplayers();
    team teamB;
    teamB.teamname = "DABBANG";
    teamB.playername[0] = "shashank";
    teamB.playername[1] = "gaurav";
    teamB.playername[2] = "kartik";
    teamB.displayplayers();

    teamA.selectplayer();

    cout << "\n"
         << "\n\n\t the game begains now";
    teamA.startinning();
    teamA.totalscore = playinning();
    teamA.displayscore();
    teamA.displayplayers();
    teamB.displayplayers();

    teamA.selectplayer();

    teamB.startinning();
    teamB.totalscore = playinning();
    teamB.displayscore();

    cout << "\n\n\tscore of team are:";
    int teamascore = teamA.displayscore();
    int teambscore = teamB.displayscore();
    decidewinning(teamascore, teambscore);
    cout << "\n\n\t\t do you want to play again";

    return 0;
}