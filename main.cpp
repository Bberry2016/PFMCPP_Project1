#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.
        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: husky
//  action 1: the husky pulls a sled
husky.pullSled();
//  action 2: the husky runs
husky.run();
//  action 3: the husky falls asleep
husky.sleep();
//  2)
//  Noun: amplifier
//  action 1: the amplifier's tone is adjusted
amplifier.changeTone();
//  action 2: the amplifier reads the signal input
amplifier.readSignalInput();
//  action 3: the amplifier boosts signal input
amplifier.boostSignal();

//  3)
//  Noun: flower
//  action 1: the flower ingrains it's roots into the ground
flower.root();
//  action 2: the flower grows
flower.grow();
//  action 3: the flower dies
flower.die();
//  4)
//  Noun: water
//  action 1: the water freezes
water.freeze();
//  action 2: the water leaks from it's container
water.leak();
//  action 3: the water drains
water.drain();
//  5)
//  Noun: mouth
//  action 1: they smiled 
mouth.smile();
//  action 2: they frowned 
mouth.frown();
//  action 3: they opened their mouth
mouth.open();
//  6)
//  Noun: fan
//  action 1: the fan blows air
fan.blowAir();
//  action 2: the fan blows harder
fan.increasedAirFlow();
//  action 3: the fan draws in air from outside
fan.drawInAir();
//  7)
//  Noun: bird
//  action 1: the bird takes flight
bird.fly();
//  action 2: the bird chirps
bird.chirp();
//  action 3: the bird laid an egg
bird.layEgg();
//  8)
//  Noun: sun    
//  action 1: the sun rises
sun.rise();
//  action 2: the sun sets
sun.set();
//  action 3: the sun emits heat
sun.emitHeat();
//  9)
//  Noun: gear
//  action 1: the gear turns clockwise
gear.rotateClockwise();
//  action 2: the gear turns counter-clockwise
gear.rotateCounterClockwise();
//  action 3: the gear locks in place
gear.lock();
//  10)
//  Noun: boat
//  action 1: the boat floats in the water
boat.floats();
//  action 2: the boat is moored at the dock
boat.moors();
//  action 3: the boat releases it's sail
boat.sailRelease();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
