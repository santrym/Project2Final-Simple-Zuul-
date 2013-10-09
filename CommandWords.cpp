/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.
 * 
 * This class holds an enumeration of all command words known to the game.
 * It is used to recognise commands as they are typed in.
 *
 * @author  Michael Kölling and David J. Barnes
 * @version 2011.08.08
 */

#include <validWords>
#include "CommandWords.h"
using namespace std;


class CommandWords
{
    
    //private:
        // a constant array that holds all valid command words
        private static final String[] validCommands = {
            "go", "quit", "help"
        };

    //public:

    /**
     * Constructor - initialise the command words.
     */
    void CommandWords::CommandWords()
    {
        // nothing to do at the moment...
    }

    /**
     * Check whether a given String is a valid command word. 
     * @return true if it is, false if it isn't.
     *
     * *****************************************************************formerly called bool isCommand(String aString)
     */
    bool CommandWords::main(String aString)
    {
        for(int i = 0; i < validCommands.length; i++) {
            if(validCommands[i].equals(aString))
                return true;
        }
        // if we get here, the string was not found in the commands
        return false;
    }

    /**
     * Print all valid commands to System.out.
     */
    void CommandWords::showAll() 
    {
        for(vector<string>::iterator command = validCommands.begin(); command != validCommands.end(); command++)
        {
            cout << *command;
        }



        //for(String command: validCommands) {
        //  System.out.print(command + "  ");
        //}
        //System.out.println();
    }

    int CommandWords::main()
    {
        
        return 0;
    }


};
