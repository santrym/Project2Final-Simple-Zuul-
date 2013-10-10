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
#ifndef COMMAND_H
#define COMMAND_H
using namespace std;


class Command
{
    private:
        string commandWord;
        string secondWord;


    public:
    /**
     * Creates a command object, given two strings
     * The first string becomes commandWord and the second becomes secondWord.
     */
    int main(string firstWord, string secondWord);

    /**
     * Return the command word (the first word) of this command. If the
     * command was not understood, the result is null.
     * @return The command word.
     */
    string getCommandWord();

    /**
     * @return The second word of this command. Returns null if there was no
     * second word.
     */
    string getSecondWord();

    /**
     * @return true if this command was not understood.
     */
    bool isUnknown();

    /**
     * @return true if the command has a second word.
     */
    bool hasSecondWord();
};

#endif

