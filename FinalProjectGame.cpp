//======================================================================
//  Space text Adventure game
//      Nicole Medina, Daria Pacheco, and John Villasenor -
//      Saint Leo University - 11 April 2021
//======================================================================
#include <iostream>
#include <string>
using namespace std;

//----------------------------------------------------------------------
// MAIN PROGRAM
//----------------------------------------------------------------------
int main() {

    printf("You are in spaceship that has been infiltrated by aliens."
           " Here comes the captain, it looks like he has "
           "something to say. Quick look alive! \n\n");

//----------------------------------------------------------------------
// char name[50] -- ask for players name to be used in text.
//----------------------------------------------------------------------
    char name[50];
    cout << "What is your name, kid?" << endl;
    cin.getline(name, 50);

    cout << "Were getting attacked, " << name <<
         ". The aliens are attacking the spaceship." << endl;
    cout << "I need you to escape the ship with all our research "
            "back to earth, but be aware the aliens have shut off our "
            "power, so it will be dark." << endl;
    cout << "Good luck in your journey, " << name << ". You will need it." << endl;
    cout << "----------------------Press enter/return to continue----------------------" << endl;
    getchar();

    printf("You began running until you reach two hallways, its dark and one of these hallways "
           "might have an alien in it.\n\n");

//----------------------------------------------------------------------
//  int choiceOne_Path -- asks the player to pick a hallway by choosing
//      1 or 2.
//----------------------------------------------------------------------
    int choiceOne_Path;
    cout << " Which hallway will you chose?" << endl;
    cout << "\t >> Enter '1' to chose the left hallway." << endl;
    cout << "\t >> Enter '2' to chose the right hallway." << endl;
    retry:
    cout << "\nEnter your choice: ";
    cin >> choiceOne_Path;
    if (choiceOne_Path == 1) {

        cout << "\n!!!----------------------Chapter One: Survive----------------------!!!" << endl;
        cout << "\n You have chosen the left hallway." << endl;
        cout << "It seems like the coast is clear, " << name << ". Keep going!" << endl;
        goto skip;

    } else if (choiceOne_Path == 2) {
        startover:
        cout << "\n!!!----------------------Chapter One: Survive----------------------!!!" << endl;
        cout << "\n You have chosen the right hallway" << endl;
        cout << "There is an alien in this hallway!" << endl;
    } else {
        cout << "You are doing it wrong, " << name << " Press either '1' or '2', nothing else!" << endl;
        goto retry;
    }
//----------------------------------------------------------------------
// int defenseChoice -- asks the player to pick a defense tactic
//      between 1 or 2.
//----------------------------------------------------------------------
    int defenseChoice;

    cout << "What are you going to do?" << endl;
    cout << "\t >> Enter '1' to fight off the alien." << endl;
    cout << "\t >> Enter '2' to surrender." << endl;
    retry2:

    cout << "\nEnter your choice: ";
    cin >> defenseChoice;
    if (defenseChoice == 1) {
        cout << "\n!!!----------------------Chapter One: Survive----------------------!!!" << endl;
        cout << "\n You have chosen to fight off the alien." << endl;
        cout << "Good job, " << name << " You were able to knock him back!" << endl;
        cout << "Now keep running to keep your distance!" << endl;

    } else if (defenseChoice == 2) {
        cout << "\n!!!----------------------Chapter One: Survive----------------------!!!" << endl;
        cout << "\n You have chosen to surrender." << endl;
        cout << "Oh no...It looks like the alien killed you " << name << endl;
        printf("Mission failed. Better luck next time...\n\n");
        cout << "\n!!!----------------------Try Again----------------------!!!" << endl;
        goto startover;
    } else {
        cout << "You are doing it wrong, " << name << " Press either '1' or '2', nothing else!" << endl;
        goto retry2;
    }

    skip:
    cout << "----------------------Press enter/return to continue----------------------" << endl;
    cin.ignore();
    cin.get();

    printf("You come to an open door. It's too dark to see anything."
           " Should you go through the door or continue down the hall?\n\n");

//----------------------------------------------------------------------
//  int exploreChoice -- aks the player to pick between paths.
//----------------------------------------------------------------------
    int exploreChoice;
    cout << " Which way should you go?" << endl;
    cout << "\t >> Enter '1' to continue down the hallway." << endl;
    cout << "\t >> Enter '2' to enter the open door." << endl;
    retry3:
    cout << "\nEnter your choice: ";
    cin >> exploreChoice;

    if (exploreChoice == 1) {
        cout << "\n!!!----------------------Chapter Two: Exploration----------------------!!!" << endl;
        cout << "\nYou have chosen to continue running down the hall." << endl;
        cout << "Thankfully the engine room appears to be up ahead on the right." << endl;
        cout << "You turn on the engine, but it's completely fried." << endl;
        cout << "Knowing the research lab is across the hall. You proceed with caution"
                " to collect the files and locate an escape pod." << endl;
        cout << "----------------------Press enter/return to continue----------------------" << endl;
        cin.ignore();
        cin.get();
        cout << "CONGRATULATIONS!!! You located the files now get going."
                "You have got to find an escape pod before its too late." << endl;

    } else if (exploreChoice == 2) {
        cout << "\n!!!----------------------Chapter Two: Exploration----------------------!!!" << endl;
        cout << "As you proceed through the door you begin to hear some strange noises coming "
                "from the room on the right"
                << endl;
        cout << "As you approach an alien appears from a vent behind you and begins to chase you!" << endl;
        cout << "You run back into the hall trying to find a way out." << endl;
        cout << "There's a room up ahead. Quick run inside!!'" << endl;
        cout << "You made it! You were able to lock the alien outside the room."
                "You turn and look, surprisingly you made it to the Research Lab." << endl;
        cout
                << "CONGRATULATIONS!!! You located the files now get going."
                   " You have got to find an escape pod before its too late."
                << endl;
    } else {
        cout << "You are doing it wrong, " << name << " Press either '1' or '2', nothing else!" << endl;
        goto retry3;
    }
    cout << "----------------------Press enter/return to continue----------------------" << endl;
    cin.ignore();
    cin.get();
    printf("With files in hand, you start walking in the direction you believe the escape pod should be."
           " Suddenly, you feel eyes watching you and you stop in fear. "
           "In the distance you hear some weird noises followed by heavy footsteps"
           " and they seem to be getting louder.\n\n");

//----------------------------------------------------------------------
// int pursuitChoice -- asks the player to pick a reaction.
//----------------------------------------------------------------------
    int pursuitChoice;
    cout << "What will be you're next move?" << endl;
    cout << "\t >> Enter '1' to run away from the potential danger." << endl;
    cout << "\t >> Enter '2' to hide from the potential danger." << endl;
    retry4:
    cout << "\nEnter your choice: ";
    cin >> pursuitChoice;
    if (pursuitChoice == 1) {
        cout << "\n!!!----------------------Chapter Three: Pursuit----------------------!!!" << endl;
        cout << "Scared you run down the hallway. Your footsteps echo and alert some of the aliens of your location."
             << endl;
        cout << "Now you hear that several of them are hot on your trail" << endl;
        cout << "Oh no we got to get out the hallway!!" << endl;
        cout << "You quickly grab a loose bolt from the floor and toss it down the hallway"
                " to distract the aliens while you hide."
                << endl;
        cout << "Once you get in a room. You hide behind the door waiting for them to pass" << endl;
        cout << "You check the peephole to make sure the coast is clear. While looking around"
                " you see the emergency door."
                << endl;
        cout << "That must be the way out!" << endl;
    } else if (pursuitChoice == 2) {
        cout << "\n!!!----------------------Chapter Three: Pursuit----------------------!!!" << endl;
        cout << "You quickly dart into a nearby room." << endl;
        cout << "You duck down behind the door while you wait for them to pass " << endl;
        cout
                << "As they slowly stroll by, you look out the peephole."
                   " It seems like they're looking for something.'" << endl;
        cout << "They might be looking for you." << endl;
        cout << "We must proceed with caution!" << endl;
        cout << "While observing the aliens behavior, you spot an emergency door. That must be the escape pod!"
             << endl;
        cout << "We have to get to that pod fast! But there are a couple aliens walking around in front of it."
             << endl;
        cout << "We got to make a plan." << endl;
    } else {
        cout << "You are doing it wrong, " << name << " Press either '1' or '2', nothing else!" << endl;
        goto retry4;
    }
    cout << "----------------------Press enter/return to continue----------------------" << endl;
    cin.ignore();
    cin.get();
    startover2:
    printf("You are only a couple yards away from the escape pod, but the aliens are still nearby.\n\n");

    int escapePlanOne;

//----------------------------------------------------------------------
// int escapePlanOne -- asks the player to pick an escape plan.
//----------------------------------------------------------------------
    cout << " What's the plan'?" << endl;
    cout << "\t >> Enter '1' to distract them." << endl;
    cout << "\t >> Enter '2' to make a break for it." << endl;
    retry5:
    cout << "\nEnter your choice: ";
    cin >> escapePlanOne;

    if (escapePlanOne == 1) {
        cout << "\n!!!----------------------Chapter Four: Escape----------------------!!!" << endl;
        cout << "\n You chose to distract them. You look around for something to use." << endl;
        cout << "You find a test tube in the ground and you decide to throw it farther away, so the "
                "aliens can follow the sound." << endl;
}
    else if (escapePlanOne == 2) {
        cout << "\n!!!----------------------Chapter Four: Escape----------------------!!!" << endl;
        cout << "\n You chose to make a break for it." << endl;
        cout << "Alright " << name << ", it's make it or break. Let's do this!" << endl;
        cout << "As you burst out of the room and towards to Escape pod, "
                "you pass a couple aliens who are stunned by your actions." << endl;
        cout << "Just before the door you manage to trip and fall to the floor." << endl;
        cout << "Slowly they start surrounding you and they kill you." << endl;
        printf("Mission failed. Better luck next time...\n\n");
        cout << "\n!!!----------------------Try Again----------------------!!!" << endl;
        goto startover2;
    } else {
        cout << "You are doing it wrong, " << name << " Press either '1' or '2', nothing else!" << endl;
        goto retry5;
    }
    cout << "----------------------Press enter/return to continue----------------------" << endl;
    cin.ignore();
    cin.get();
    printf("The aliens fell for the trap, hurry run!"
           "You are now in the escape pod, but you are not alone."
           "Theres an alien with you."
           "You have no other option, but to fight!\n\n");

//----------------------------------------------------------------------
// int finalChoice -- asks the player to chose a weapon.
//----------------------------------------------------------------------
    int finalChoice;
    cout << "You look around and find two objects that you can use to fight. Which one shall it be?" << endl;
    cout << "\t >> Enter '1' to choose the sphere." << endl;
    cout << "\t >> Enter '2' to choose the gun." << endl;
    retry6:
    cout << "\nEnter your choice: ";
    cin >> finalChoice;
    if (finalChoice==1) {
        cout << "\n!!!----------------------Chapter Five: Final Fight----------------------!!!" << endl;
        cout << "Great job, " << name << ". You chose the sphere to fight off the alien." << endl;
        cout << "The alien stood no chance."<< endl;
        cout << "You did great kid! Let's go home." << endl;
        cout << "CONGRATULATIONS!!! Mission Accomplished." << endl;
    }
    else if (finalChoice == 2) {
        cout << "\n!!!----------------------Chapter Five: Final Fight----------------------!!!" << endl;
        cout << "Great job, " << name << ". You chose the gun to fight off the alien." << endl;
        cout << "The alien stood no chance."<< endl;
        cout << "You did great kid! Let's go home." << endl;
        cout << "CONGRATULATIONS!!! Mission Accomplished." << endl;
    }
    else {
        cout << "You are doing it wrong, " << name << " Press either '1' or '2', nothing else!" << endl;
        goto retry6;
    }
    return 0;
}
//======================================================================
