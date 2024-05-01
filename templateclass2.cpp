/*Question:

In the kingdom of CodeLand, programmers Alice and Bob are tasked with creating bug-fighting warriors to protect their kingdom's 
software from malicious bugs. They decide to use object-oriented programming principles to design these warriors.
Abstract Class Creation: Define an abstract class called BugWarrior with the following pure virtual functions:
void attack(): Represents the action of attacking bugs.
void defend(): Represents the action of defending against bugs.
Concrete Class Implementation: Implement two concrete classes that derive from BugWarrior:
KnightWarrior: A bug-fighting warrior specialized in close combat.
WizardWarrior: A bug-fighting warrior specialized in using magical spells.
Ensure that each concrete class provides implementations for the attack() and defend() functions according to their specialized abilities.
Usage: Provide a code snippet demonstrating how Alice and Bob can create instances of KnightWarrior and WizardWarrior to
 combat the bugs in CodeLand.
Write C++ code to solve the above tasks.

Your Task:
Write C++ code to address each part of the question. Ensure to include proper class definitions, 
implementations, and a usage example demonstrating the creation of bug-fighting warriors.*/
#include<iostream>
using namespace std;
using namespace std;
//template <class t>
class  BugWarrior
{
public:
 virtual void attack()= 0;
 virtual void defend()=0;
 
};
class knightwarrior:public BugWarrior
{
public:
void attack()
{
cout<<" attacking of enimes /n";
//cin>>enimesattack;
cout<<"/n the attack of enimes is:";
}
void defend()
{

cout<<"/n defending from enimes";
//cin>>enimesdefending;
cout<<"the defending from enimes is:";
}
};
class wizardWarrior:public BugWarrior
{
public:
void attack()
{
cout<<"/n attacking of enimes";
//cin>>enimes attack;
cout<<"/n the attack of enimes is:";//<< enemiesattack<<end1;
}
void defend()
{

cout<<"/n defending from enimes";
//cin>>enimesdefending;
cout<<"/n the defending from enimes is: ";//<< enemiesdefend<<end1 ;
}
};
main()
{
knightwarrior knight;
wizardWarrior wizard;
knight.attack();
knight.defend();
wizard.attack();
wizard.defend();
}

