
/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 * 
 * This parser reads user input and tries to interpret it as an "Adventure"
 * command. Every time it is called it reads a line from the terminal and
 * tries to interpret the line as a two word command. It returns the command
 * as an object of class Command.
 *
 * The parser has a set of known command words. It checks user input against
 * the known commands, and if the input is not one of the known commands, it
 * returns a command object that is marked as an unknown command.
 * 
 * @author  Mike Santry
 * @version 2013.10.09
 */


#include "Command.h"
#include "CommandWords.h"
#include "Command.h"
#include "CommandWords.h"
#include <cstddef>        // std::size_t
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;




class Parser 
{
    private:
    
    public:
    
    /**
     * Create a parser to read from the terminal window.
     */
    int main(); 
    

    /**
     * @return The next command from the user.
     */
    Command getCommand();
    

    /**
     * Print out a list of valid command words.
     */
    void showCommands();
};
