/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.
 * 
 * This class holds an enumeration of all command words known to the game.
 * It is used to recognise commands as they are typed in.
 *
 * @author  Mike Santry
 * @version 2013.10.09
 */


#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::cin;
using std::cout;

#ifndef COMMANDWORDS_H
#define COMMANDWORDS_H

class CommandWords
{
    
    private:
        

    public:

    /**
     * Constructor - initialise the command words.
     */
    
    bool main(string commandWord);

    /**
     * Print all valid commands to System.out.
     */
    void showAll();

    
    /**
    * Tests to see if the commandWord is a valid commandWord.
    **/

    bool CommandWordTest(string commandWord);



};

#endif
