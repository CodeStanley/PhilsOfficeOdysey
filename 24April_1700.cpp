#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <chrono>

using namespace std;

// Base Map function
void Map() {
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                                       |" << endl;
    cout << "|      |          hallway                                     |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------                        construction-->#            #  |" << endl;
    cout << "                                              #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                                         |" << endl;
    cout << "                    #                        ______           |" << endl;
    cout << "                    #                       |   a  |          |" << endl;
    cout << "                    #                       |______|          |" << endl;
    cout << "                    ########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
    cout << "\n";
}
// Steve Map function
void MapSteve() {
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                  *you are here        |" << endl;
    cout << "|      |          hallway               /                     |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------                        construction-->#            #  |" << endl;
    cout << "                                              #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                                         |" << endl;
    cout << "                    #                        ______           |" << endl;
    cout << "                    #                       |   a  |          |" << endl;
    cout << "                    #                       |______|          |" << endl;
    cout << "                    ########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
}
// Avoid construction or not map function
void MapRL() {
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                        *you are here  |" << endl;
    cout << "|      |          hallway                      /              |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------                        construction-->#            #  |" << endl;
    cout << "                                              #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                                         |" << endl;
    cout << "                    #                        ______           |" << endl;
    cout << "                    #                       |   a  |          |" << endl;
    cout << "                    #                       |______|          |" << endl;
    cout << "                    ########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
}
// Stairs or elevator Map function
void MapElevator() {
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                                       |" << endl;
    cout << "|      |          hallway                                     |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------   *you are here        construction-->#            #  |" << endl;
    cout << "                    |                         #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                                         |" << endl;
    cout << "                    #                        ______           |" << endl;
    cout << "                    #                       |   a  |          |" << endl;
    cout << "                    #                       |______|          |" << endl;
    cout << "                    ########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
}
//This is the scene where Phil can decide to stay inside towards the meeting rooms or go outside.
void inside_outside_path() {
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                                       |" << endl;
    cout << "|      |          hallway                                     |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------                        construction-->#            #  |" << endl;
    cout << "                    |                         #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                                         |" << endl;
    cout << "                    #                        ______           |" << endl;
    cout << "                    #                       |   a  |          |" << endl;
    cout << "                    #                       |______|          |" << endl;
    cout << "    *you are here-->########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
}

void map_conference() {
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                                       |" << endl;
    cout << "|      |          hallway                                     |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------                        construction-->#            #  |" << endl;
    cout << "                    |                         #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                *you are here            |" << endl;
    cout << "                    #                      | ______           |" << endl;
    cout << "                    #                      ||   a  |          |" << endl;
    cout << "                    #                      ||______|          |" << endl;
    cout << "                    ########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
}

//Jay's clear screen attempt code
void gotoxy(int x, int y)
{
    COORD coord; // coordinates
    coord.X = x; coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}

void clearscreen() {
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
}

//Functions
void Synopsis();
int First_Choice(int time, int walkrun, string player_name, int stevewords);
int Second_Choice(int time, int construction, string player_name);
int Third_Choice(int time, int elevator, string player_name);
int three_point_five_choice(int time, int code, int incorrect_entry, string player_name);
int Fourth_Choice(int time, int out_and_in, string player_name);


int main() {
    // Variables
    int time = 180; // starting time in seconds. Three minutes to get there! Subtract time from total as player progresses
    string player_name; // the person playing the game
    int walkrun; // first choice - walk or run
    int stevewords = 4; //steve choice, to pass the variable it needs to have a temp value
    int construction; // construction choice
    int elevator; //third choice - elevator or stairs
    int code; // three.five choice - punch code
    int incorrect_entry; // part of three.point - figuring out the punch code
    int out_and_in; //Fourth Choice - Outside or inside
    int conference; //Fifth Choice - a or b
    int firstmap; //initial map to begin game

    // Start program
    //Intro
    //cout << "PLACE HOLDER FOR AN INTRO DISPLAYING TITLE OF GAME AND ANYTHING ELSE WE WANT TO PUT HERE" << endl;
    //cout << "\n                      ********---------------********";
    //cout << "\n                      ********A GROUP 19 GAME********";
    //cout << "\n                      ********---------------********";

    // Alternate Intro Screen
    string please = "                 ****  PHIL'S OFFICE ODYSSEY  ****";
    int n = 0;
    while (please[n] != '\0')
    {
        cout << please[n];
        Sleep(75);
        n++;
    };
    cout << "\n";
    string please1 = "                 ****     A Group 19 Game     ****";
    int p = 0;
    while (please1[p] != '\0')
    {
        cout << please1[p];
        Sleep(75);
        p++;
    };

    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << " office______________________building wall____________________" << endl;
    cout << " ------                                                       |" << endl;
    cout << "|      |          hallway                                     |" << endl;
    cout << "|      |####################################################  |" << endl;
    cout << "|      |                                      #            #  |" << endl;
    cout << " ------                        construction-->#            #  |" << endl;
    cout << "                                              #            #  |" << endl;
    cout << "  stairs/elevator-->########################################  |" << endl;
    cout << "                    #                                         |" << endl;
    cout << "                    #                        ______           |" << endl;
    cout << "                    #                       |   a  |          |" << endl;
    cout << "                    #                       |______|          |" << endl;
    cout << "                    ########################|   b  |          |" << endl;
    cout << "                    #                      #|______|          |" << endl;
    cout << "                    #                      #  meeting rooms   |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "                    ########################" << endl;
    cout << "                          outside path" << endl;
    cout << "\n";

    



    string please3 = "Enter name to start: ";
    int o = 0;
    while (please3[o] != '\0')
    {
        cout << please3[o];
        Sleep(75);
        o++;
    };
    cin >> player_name;





    // Getting Player Name
    

    //Jay's New Stuff
    gotoxy(0, 0);
    clearscreen();
    gotoxy(0, 0);





    cout << "Hello, " << player_name << ". Here's the deal...\n" << endl;

    

    // synopsis function to give backstory
    Synopsis();
    cout << "Enter '1' to continue" << endl;
    cin >> firstmap;
    cout << "\n";
    while (firstmap != 1) {
        cout << "You have a meeting to get to! You must type 1 to continue!" << endl;
        cin >> firstmap;
    }

    Map(); // print map so user can see route

    // First choice / Steeve


    string please4 = "Your move, Phil. Do you play it cool and walk quickly out of the office, or do you run? Remember, the clock is officially ticking! 180 seconds to go!";
    int r = 0;
    while (please4[r] != '\0')
    {
        cout << please4[r];
        Sleep(40);
        r++;
    };
    cout << "\nEnter 1 to walk"
            "\n      2 to run" << endl;
    cin >> walkrun;


    

    std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    time = First_Choice(time, walkrun, player_name, stevewords);

    //Map RL
    cout << "Total time remaining: " << time << endl;
    cout << "Current location: \n" << endl;
    MapRL();
    cout << "\n\n";


    // Second choice

    string please5 = "Alright, you've reached your first big decision. Do you take the long way and avoid construction (but who knows what lurks in those halls less traveled!), or do you try to dance around the construction instead?";
    int s = 0;
    while (please5[s] != '\0')
    {
        cout << please5[s];
        Sleep(75);
        s++;
    };
    cout<<"\nEnter 1 for construction"
          "\n      2 for the long way" << endl;
    cin >> construction;

    
    cout << "\n";
    std::cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    time = Second_Choice(time, construction, player_name);

    //MapElevator
    cout << "Total time remaining: " << time << endl;
    cout << "Current location: \n" << endl;
    MapElevator();
    cout << "\n\n";

    //Third Choice
    cout << "Do you take the stairs or the elevator?"
        "\nEnter 1 for elevator"
        "\n      2 for stairs" << endl;
    cin >> elevator;
    cout << "\n";
    std::cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    time = Third_Choice(time, elevator, player_name);

    //Map outside
    cout << "Total time remaining: " << time << endl;
    cout << "Current location: \n" << endl;
    inside_outside_path();
    cout << "\n\n";

    //Choice three point five

    cout << "Okay, you're getting close. Now, in order to access the next part of the building, you need to enter the correct combination on the punch code. The only thing is, you can't remember the code. (Really, Phil!?) Is it 1234, 4321, or 7392? Best of luck! An incorrect entry causes a 15 second delay to reset. Three wrong entries and you're locked out for good." << endl;
    cout << "\n Enter 1234, 4321, or 7392: \n";
    cin >> code;
    incorrect_entry = 0;
    cout << "\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------";

    time = three_point_five_choice(time, code, incorrect_entry, player_name);

    //Map outside
    cout << "Total time remaining: " << time << endl;
    cout << "Current location: \n" << endl;
    inside_outside_path();
    cout << "\n\n";


    //Fouth Choice
    std::cout << "Alright, there is a storm brewing outside and a crowd from a conference that you also forgot about (classic!), filtering down the hall way..."
        "\nEnter 1 to go to the outside path"
        "\n      2 to go to the inside path" << endl;

    std::cin >> out_and_in;
    cout << "\n";
    std::cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    time = Fourth_Choice(time, out_and_in, player_name);

    cout << "\nTotal time remaining: " << time << endl;
    cout << "Current location: \n" << endl;
    map_conference();
    cout << "\n\n";

    //Fith Choice
    cout << "\n\n";
    cout << "You are finally here! Wait, what room was the meeting in again?.."
        "\nEnter 1 for confrence room a"
        "\n      2 for confrence room b:" << endl;
    cin >> conference;
    cout << "\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    if (conference == 1) {
        time -= 10;
        cout << "Wrong Room! Time Minus 10!" << endl;
        cout << "Total time remaining: " << time << endl;
        cout << "Current location: \n" << endl;
        map_conference();
        cout << "\n\n";
    }
    cout << "You finally made it, and looking at your watch you see..." << endl;
    Sleep(10000);
    if (time < 0) {
        cout << "You are late... and fired. (Honestly, I think we all saw that coming.) Maybe don't leave so late next time." << endl;
    }
    else {
        cout << "You had " << time << " seconds remaining."
            "Somehow, you made it on time. You walk to your chair and take a seat." << endl;
        if (out_and_in == 1 && elevator == 2) {
            cout << "Sure, your papers are soaked and disorginized, but you're not fired. Nice work, Phil!" << endl;
        }
        else if (out_and_in == 1 && elevator != 2) {
            cout << "Sure, your papers are soaked, but you're not fired. Nice work, Phil!" << endl;

        }
        else if (out_and_in != 1 && elevator == 2) {
            cout << "Sure, your papers are disorgonized, but you're not fired. Nice work, Phil!" << endl;

        }
        else {
            cout << "You are even suprisingly put together." << endl;
        }
    }
    return 0;
}

void Synopsis()
{

    cout << "Phil is running late to a meeting. Unfortunately, Phil has been late to meetings before. If he's late again, he'll be reprimanded (or worse, forced to do the interns data entry). Help prevent Phil from being reprimanded. He could use the win.\n" << endl;
    // what you're up against
    Sleep(10000);
    cout << "What you are up against: \n" << endl;
    Sleep(3000);
    cout << "The meeting is at 10. Phil didn't see the reminder on his calendar until a few seconds ago. It's now 9:57... Nice one, Phil!\n" << endl;
    Sleep(10000);
    cout << "Anyway, the meeting is on the other side of the building. You will have to navigate the treacherous office hallways, and all the things that come with it. Below is a map of the building. Pay close attention to where Phil is now and where he needs to go. The little details could be the difference between arriving on time and being out of a job!\n" << endl;

}

int First_Choice(int time, int walkrun, string player_name, int stevewords)
{
    {
        if (walkrun == 1) {
            // take thirty seconds off the clock, but don't run into Steve
            time -= 30;
            cout << "\nNice choice. It takes you thirty seconds to reach your first right or left, but you narrowly avoid running into Steve. And Steve likes to talk. Time saved!" << endl;
            Sleep(5000);
        }
        else {
            cout << "\nRash decision, " << player_name << "! While you saved time up front, your hastiness caused you to run into Steve. Steve likes to talk.\n" << endl;
            Sleep(15000);
            MapSteve();
            cout << "\n";
            Sleep(5000);
            cout << "Now you find yourself engaged in the brutalness that is known as casual office hallway conversation. Choose your next words wisely!"
                "\nEnter 1 for: hey, Steve, good to see you"
                "\n      2 for: Sorry Steve, gotta run"
                "\n      3 for: Steveee, my man, how's the kitchen restoration coming?" << endl;
            cin >> stevewords;
            if (stevewords == 1) {
                time -= 35;
                cout << "Your pleasantness hurts you on time, but wins you points in the mind of Steve. Steve volleys back a casual 'Good to see you too. We should get coffee sometime.' All things considered, it takes you 35 seconds to reach the next decision area." << endl;
                Sleep(15000);
            }
            else if (stevewords == 2) {
                time -= 25;
                cout << "Steve is obviously irritated (which could come back to bite you later. Maybe a little passive aggressive cubicle conversation), but you save time. You only lost five seconds more than you would have had you walked. Lesson learned." << endl;
                Sleep(15000);
            }
            else {
                time -= 60;
                cout << "Your thoughtfullness and inability to cut a conversation short hurt you on time. However, Steve is very pleased to talk about his kitchen restoration. A little too pleased. You lose a full minute and scamper on to the next hurdle." << endl;
                Sleep(15000);
            }
        }
    }
    return time;
}

int Second_Choice(int time, int construction, string player_name)
{
    if (construction == 1) {
        time -= 20;
        cout << "\nBold move, but one that pays off." << endl;
        Sleep(5000);
        cout <<"\nWhile there is caution tape everwhere(who does that for construction ? What is this, a murder scene ? !) and exposed electrical wires sticking out of walls, you are able to shimmy around it alland save 15 seconds more than if you would've gone the long way. You move swiftly to your next decision--the stairs or the elevator!" << endl;
        Sleep(15000);
    }
    else {
        time -= 35;
        cout << "\nThe risk to take the dark halls less travelled comes back to bite you! It's dark. At one point, you trip over a ladder that someone left IN THE MIDDLE OF THE HALLWAY! How careless. After, you shimmy along the wall so it doesn't happen again. It takes you 15 seconds longer than if you would've navigated the construction. You then move swiftly on to your next decision--the stairs or the elevator!" << endl;
        Sleep(15000);
    }
    return time;
}

int Third_Choice(int time, int elevator, string player_name)
{
    if (elevator == 1) {
        time -= 80;
        cout
            << "\nYou press the button on the elevator. After a few seconds the door opens and you step inside. "
            "\nRight when the door starts to shut, you can see in the distance your colleague, Sarah, running towards the elevator. "
            "\nYou know you will waste time by holding the elevator for her, but you do it anyway. You lose 80 seconds."
            "\nNice guys finish last, right? Oh well, time for another crucial decision." << endl;
        Sleep(20000);
    }
    else {
        time -= 60;
        cout << "\nYou decide to take the stairs over the elevator. You start to walk down the stairs but you didn't notice the "
            "\n'CAUTION, WET FLOOR' sign at the top of the stairs."
            "\nYou slip and stumble down the stairs. You spill your coffee and your belongings go everywhere. Your body is jolted with extreme pain. You slowly get up and collect all your paperwork."
            "\nYou are a complete and utter mess, but you saved time compared to taking the elevator."
            "\nYou only lost 60 seconds taking the stairs." << endl;
        Sleep(20000);
    }
    return time;
}

int three_point_five_choice(int time, int code, int incorrect_entry, string player_name)
{
    if (code == 4321) {
        cout << "\n\nAccess granted! You got it right. On the first try, even... Who are you and what have you done to the Phil we know and love?! Just kidding. Nice work. With that obstacle behind you, you quickly walk toward your next decision." << endl;
        Sleep(15000);
    }
    while (code != 4321) {
        incorrect_entry++;
        if (incorrect_entry > 2) {
            cout << "\n\nToo many wrong entries. You are locked out. Game over, Phil! You should've paid more attention to that departmental memo. Tisk tisk...\n" << endl;
            Sleep(10000);
            break;
        }
        cout << "\n\nIncorrect entry. Try again: ";
        cin >> code;
        if (code == 4321 && incorrect_entry == 1) {
            cout << "\n\nAccess granted! Only one wrong guess, too. Definitely not your worst day at work. You push through the door and walk quickly toward your next decision." << endl;
            Sleep(10000);
            time -= 15;
        }
        else if (code == 4321 && incorrect_entry == 2) {
            cout << "\n\nAccess granted! You cut it close, but you're through. You dab a bead of sweat off your forehead and silently congratulate yourself for putting on deodorant this morning." << endl;
            Sleep(10000);
            time -= 30;
        }
    }
    return time;
}

int Fourth_Choice(int time, int out_and_in, string player_name)
{
    if (out_and_in == 1) {
        time -= 15;
        std::cout << "The storm completely engulfs the outside of the building."
            "\nYour papers are soaked and your mentality is soured, BUT... it was fast"
            "\nOnly 15 seconds spent outside";
        Sleep(10000);
    }
    else {
        time -= 25;
        std::cout << "\nThe hallway is clogged like a bad artery. You manage to push your way through, but not at a quick pace."
            "\n25 seconds lost.";
        Sleep(10000);
    }
    return time;
}

