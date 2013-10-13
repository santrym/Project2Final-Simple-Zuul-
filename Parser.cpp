
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

#include "Parser.h"
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


 

    //public CommandWords commands;  // holds all valid command words
    //private Scanner reader;         // source of command input

    /**
     * Create a parser to read from the terminal window.
     */
    int Parser::main() 
    {
        
        CommandWords *commandWords1 = new CommandWords;

        //commands = new CommandWords();
        return 0;
    }

    /**
     * @return The next command from the user.
     */
    Command Parser::getCommand() 
    {
        string userInput;
        string string1;   // will hold the full input line
        string string2;
        string word1 = NULL;
        string word2 = NULL;

        //asks user for input.
        cout << "give command: " ;    // print prompt

        //sets users input as "userInput".
        cin >> userInput ;


        //finds position of first space.
        unsigned pos = userInput.find(" ");
        bool val = true;
        //if there is no space, pos is set to the length of userInput.
        if(pos==0){
            pos = userInput.length();
            val = false;
        }

        //sets string1 equal to first word in input
        string1 = userInput.substr (pos);

        if(val == true){
            //sets string2 equal to the second word (if there is one) in input.
            string2 = userInput.substr(pos+1, userInput.length()-pos+1);
        }


        if(commandWords1.CommandWordTest(string1)){
            return new Command(string1, string2);
        }
        else{
            return new Command(NULL, string2);
        }

    }

    /**
     * Print out a list of valid command words.
     */
    void Parser::showCommands()
    {
        commands.showAll();
    }

