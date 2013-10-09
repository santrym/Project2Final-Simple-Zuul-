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
using namespace std;


#ifndef COMMANDWORDS_H
#define COMMANDWORDS_H

class CommandWords
{
    
    private:
        // a constant array that holds all valid command words
        private static final String[] validCommands {
        
        };

    public:

    /**
     * Constructor - initialise the command words.
     */
    
    bool main(String aString);

    /**
     * Print all valid commands to System.out.
     */
    void showAll();

    
    int int main();


};