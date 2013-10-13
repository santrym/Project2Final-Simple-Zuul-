/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.
 * 
 * This class holds an enumeration of all command words known to the game.
 * It is used to recognise commands as they are typed in.
 *
 * author  Mike Santry
 * version 2013.10.09
 */

//#include <validWords>

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include "CommandWords.h"
using std::string;
using std::cin;
using std::cout;
using namespace std;


    
    vector<string> CommandWordVec(3);

        
    /**
     * Check whether a given String is a valid command word. 
     * @return true if it is, false if it isn't.
     *
     * 
     */
    bool CommandWords::main(string commandWord)
    {
                
        CommandWordVec[0] = "go";
        CommandWordVec[1] = "quit";
        CommandWordVec[2] = "help";

        CommandWordTest(commandWord);

    }

    /**
    * Tests to see if the given "commandWord" is in fact a command word. If it is it will return true, else false.
    **/
    bool CommandWords::CommandWordTest(string commandWord){
        for(vector<string>::iterator command = CommandWordVec.begin(); command != CommandWordVec.end(); command++)
        {
            if(*command == commandWord){
                return true;
            }
        }  
        return false;
    }

    /**
     * Print all valid commands using cout.
     */
    void CommandWords::showAll() 
    {
        for(vector<string>::iterator command = CommandWordVec.begin(); command != CommandWordVec.end(); command++)
        {
            cout << *command << "  ";
        }
    }

    
    

