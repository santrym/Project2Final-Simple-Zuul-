/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 *
 * This class holds information about a command that was issued by the user.
 * A command currently consists of two strings: a command word and a second
 * word (for example, if the command was "take map", then the two strings
 * obviously are "take" and "map").
 * 
 * The way this is used is: Commands are already checked for being valid
 * command words. If the user entered an invalid command (a word that is not
 * known) then the command word is <null>.
 *
 * If the command had only one word, then the second word is <null>.
 * 
 * @author  Mike Santry
 * @version 2013.10.09
 */

#include <string>
#include "Command.h"

using namespace std;



    string commandWord;
    string secondWord;


    /**
     * Creates a command object, given two strings
     * The first string becomes commandWord and the second becomes secondWord.
     */
    int Command::main(string firstWord, string secondWord2)
    {
        commandWord = firstWord;
        //this.
        secondWord = secondWord2;
        return 0;
    }

    /**
     * Return the command word (the first word) of this command. If the
     * command was not understood, the result is null.
     * @return The command word.
     */
    string Command::getCommandWord()
    {
        return commandWord;
    }

    /**
     * @return The second word of this command. Returns null if there was no
     * second word.
     */
    string Command::getSecondWord()
    {
        return secondWord;
    }

    /**
     * @return true if this command was not understood.
     */
    bool Command::isUnknown()
    {
        return (commandWord == "");
    }

    /**
     * @return true if the command has a second word.
     */
    bool Command::hasSecondWord()
    {
        return (secondWord != "");
    }

