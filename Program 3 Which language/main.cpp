// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: Tejaswi Reddy Kondammagari
// Date: Oct 2, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running program are:
 
 Program 3: Which Language
 
 Letter Frequency Counts:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
 A:   6018  9416  6544  5068  7541  8935  9939 10052
 B:   1464   448  1081  2060  1746  1221  1173  1387
 C:   2144   636  3028  3126  1014  3865  2855  3222
 D:   3331  1013  2698  4592  2265  2945  3687  3815
 E:   9270  7187 12782 14779  8280  9364 10551 10861
 F:   1701   297  1101  1464   932  1099  1039   653
 G:   1333   187   772  2503  2975  1423   983   936
 H:   5244  2384  1004  4775  1687  1485  1413  1263
 I:   4653  8022  5583  7062  2961  8128  4179  3964
 J:     38  1331   538   148  1049     5   216   429
 K:    691  3952    28  1080  3551    51    19    18
 L:   3294  4648  4240  3089  4658  4814  2082  3985
 M:   2481  3526  3269  2861  3812  2790  4415  3021
 N:   4987  7958  5958  9026  4725  5966  4455  5704
 O:   6054  4219  5315  2208  3529  8668  8898  7605
 P:   1000  1331  2297   466   448  2060  1862  1842
 Q:    121    78   907    84    77   548   954   883
 R:   4518  1784  5986  5955  2802  5357  5328  5706
 S:   4943  5425  6898  5852  4538  4863  6774  6468
 T:   7055  7620  6025  5477  5632  5373  3729  3932
 U:   2590  4226  5373  3327   963  3081  3840  3591
 V:    657  1784  1566   661  1297  1287  1351   893
 W:   1926   120    78  1797   138   141    68    61
 X:    112    45   328    89    49    42   260    91
 Y:   1637  1403   247   169  1998   216    65   891
 Z:     15     3   343   939  2742   490   314   301
 
 Letter frequency order:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
 E     A     E     E     E     E     E     E
 T     I     S     N     A     A     A     A
 O     N     A     I     T     O     O     O
 A     T     T     R     N     I     S     S
 H     E     R     S     L     N     R     R
 N     S     N     T     S     T     N     N
 S     L     I     A     M     R     M     L
 I     U     U     H     K     S     I     I
 R     O     O     D     O     L     U     T
 D     K     L     U     G     C     T     D
 L     M     M     C     I     U     D     U
 U     H     C     L     R     D     C     C
 M     R     D     M     Z     M     L     M
 C     V     P     G     D     P     P     P
 W     Y     V     O     Y     H     H     B
 F     J     F     B     B     G     V     H
 Y     P     B     W     H     V     B     G
 B     D     H     F     V     B     F     V
 G     C     Q     K     J     F     G     Y
 P     B     G     Z     C     Q     Q     Q
 K     F     J     V     U     Z     Z     F
 V     G     Z     P     F     Y     X     J
 Q     W     X     Y     P     W     J     Z
 X     Q     Y     J     W     K     W     X
 J     X     W     X     Q     X     Y     W
 Z     Z     K     Q     X     J     K     K
 
 Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):
 Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende resistere sui numeri della manovra, è necessario offrire garanzie all’Europa e ai mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l’altro più politico. La riduzione strutturale del debito viene fissato come un «obiettivo strategico», non a caso sottolineato da Di Maio dopo il vertice. La linea dell’esecutivo è che per far ripartire l’Italia sia necessario «cambiare approccio» con una manovra espansiva «dopo anni di cure rigoriste senza risultati», ma s
 
 A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3
 
 Letter frequency order:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
 E     A     E     E     E     E     E     E     E
 T     I     S     N     A     A     A     A     I
 O     N     A     I     T     O     O     O     A
 A     T     T     R     N     I     S     S     O
 H     E     R     S     L     N     R     R     R
 N     S     N     T     S     T     N     N     T
 S     L     I     A     M     R     M     L     N
 I     U     U     H     K     S     I     I     S
 R     O     O     D     O     L     U     T     L
 D     K     L     U     G     C     T     D     C
 L     M     M     C     I     U     D     U     D
 U     H     C     L     R     D     C     C     U
 M     R     D     M     Z     M     L     M     P
 C     V     P     G     D     P     P     P     M
 W     Y     V     O     Y     H     H     B     V
 F     J     F     B     B     G     V     H     G
 Y     P     B     W     H     V     B     G     B
 B     D     H     F     V     B     F     V     F
 G     C     Q     K     J     F     G     Y     Z
 P     B     G     Z     C     Q     Q     Q     H
 K     F     J     V     U     Z     Z     F     J
 V     G     Z     P     F     Y     X     J     K
 Q     W     X     Y     P     W     J     Z     Q
 X     Q     Y     J     W     K     W     X     W
 J     X     W     X     Q     X     Y     W     X
 Z     Z     K     Q     X     J     K     K     Y
 
 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)
 
 Language is Italian
 
 */

// Your code should go here
#include <cctype>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

//take file and break it down letter by letter
//and update respective frequency array to contain distribution of each letter's frequency of usage
void textToArray(string file, int frequencyArray[]){
    ifstream inputFileStream;       // declare the input file stream
    char c = ' ';                   // input character
    string fileName = file;
    
    inputFileStream.open(fileName.c_str());  //Converts C++ string to expected c style.
    
    while (inputFileStream >> c){
        if(isalpha(c)){
            c = toupper(c);
            frequencyArray[c-'A']++;         //update letter count using character as the index
        }
    }//end while loop
    
    inputFileStream.close();                //stop taking in characters
    
}//end textToArray()
//similar to textToArray, use user's input to update frequency arrays
void userTextToArray(string input, int frequencyArray[]){
    for (int j = 0; j < (int)input.length(); j++){
        if(isalpha(input[j])){
            input[j] = toupper(input[j]);
            frequencyArray[input[j]-'A']++;
        }
    }
}
//initialize frequency arrays to 0 at every index
void initializeArray(int array[]){
    for(int x = 0; x < 26; x++){
        array[x] = 0;
    }
}
//initialize letter arrays in alphabetical order with 'A' in index 0 and 'Z' in index 25
void setLetterArray(char letters[]){
    for(int x = 0; x < 26; x++){
        letters[x] = char(x + 'A');
    }
}
//swap frequency array's values
void swapFrequencies(int frequencies[], int index){
    int indexAfter = index + 1;
    int tempF = frequencies[indexAfter];
    frequencies[indexAfter] = frequencies[index];
    frequencies[index] = tempF;
}
//swap letter array's values same distance as values in frequency array
void swapLetters(char letters[], int index){
    int indexAfter = index + 1;
    char tempL = letters[indexAfter];
    letters[indexAfter] = letters[index];
    letters[index] = tempL;
}
//use bubble sort to organize each frequency arrays values with the largest number in the first index
void sortFrequencies(int frequencies[], char letters[]){
    for(int pass = 0; pass < 25; pass++){
        for(int x = 0; x < 25; x++){
            if(frequencies[x] < frequencies[x+1]){
                SwapFrequencies(frequencies, x);
                SwapLetters(letters, x);
            }
        }
    }
}
const int limit=26;
//duplicate original frequency array before it is sorted so that it can be used in step 4
void duplicate(int original[], int duplicate[]){
    for(int x = 0; x < limit; x++){
        duplicate[x] = original[x];
    }
}

//multiply and sum up elements of array (step 4)
int dotProduct(int vect_A[], int vect_B[])
{
    int product = 0;
    
    // Loop to calculate dot product
    for (int i = 0; i < 26; i++)
        product = product + (vect_A[i] * vect_B[i]);
    
    return product;
}

int main(){
    //These arrays will contain the letter count for each language.
    int englishFrequencies[limit];
    InitializeArray(englishFrequencies);
    int finnishFrequencies[limit];
    InitializeArray(finnishFrequencies);
    int frenchFrequencies[limit];
    InitializeArray(frenchFrequencies);
    int germanFrequencies[limit];
    InitializeArray(germanFrequencies);
    int hungarianFrequencies[limit];
    InitializeArray(hungarianFrequencies);
    int italianFrequencies[limit];
    InitializeArray(italianFrequencies);
    int portugueseFrequencies[limit];
    InitializeArray(portugueseFrequencies);
    int spanishFrequencies[limit];
    InitializeArray(spanishFrequencies);
    int userFrequencies[limit];
    InitializeArray(userFrequencies);
    
    //these arrays will contain the letter distribution for each language
    //after getting frequency values, letters are rearranged and then printed out as output
    char englishLetters[limit];
    SetLetterArray(englishLetters);
    char finnishLetters[limit];
    SetLetterArray(finnishLetters);
    char frenchLetters[limit];
    SetLetterArray(frenchLetters);
    char germanLetters[limit];
    SetLetterArray(germanLetters);
    char hungarianLetters[limit];
    SetLetterArray(hungarianLetters);
    char italianLetters[limit];
    SetLetterArray(italianLetters);
    char portugueseLetters[limit];
    SetLetterArray(portugueseLetters);
    char spanishLetters[limit];
    SetLetterArray(spanishLetters);
    char userLetters[limit];
    SetLetterArray(userLetters);
    
    //Send file name and respective frequency array to textToArray for all the 8 languages
    //to update letter distribution for each language
    textToArray("MacbethEnglish.txt", englishFrequencies);
    textToArray("MacbethFinnish.txt", finnishFrequencies);
    textToArray("MacbethFrench.txt", frenchFrequencies);
    textToArray("MacbethGerman.txt", germanFrequencies);
    textToArray("MacbethHungarian.txt", hungarianFrequencies);
    textToArray("MacbethItalian.txt", italianFrequencies);
    textToArray("MacbethPortuguese.txt", portugueseFrequencies);
    textToArray("MacbethSpanish.txt", spanishFrequencies);
    
    //initialize Duplicate frequency arrays in alphabetical order for step 4
    int englishOrderFreq[limit];
    Duplicate(englishFrequencies, englishOrderFreq);
    int finnishOrderFreq[limit];
    Duplicate(finnishFrequencies, finnishOrderFreq);
    int frenchOrderFreq[limit];
    Duplicate(frenchFrequencies, frenchOrderFreq);
    int germanOrderFreq[limit];
    Duplicate(germanFrequencies, germanOrderFreq);
    int italianOrderFreq[limit];
    Duplicate(italianFrequencies, italianOrderFreq);
    int hungarianOrderFreq[limit];
    Duplicate(hungarianFrequencies, hungarianOrderFreq);
    int portugueseOrderFreq[limit];
    Duplicate(portugueseFrequencies, portugueseOrderFreq);
    int spanishOrderFreq[limit];
    Duplicate(spanishFrequencies, spanishOrderFreq);
    int userOrderFreq[limit];
    
    int menuOption;
    string menuOptionString;
    
    //begin output with program name and menu options
    cout << "Program 3: Which Language.\n" << endl;
    cout << "Select from the following stages of output to display:  " << endl;
    cout << "   1. Letter frequency counts                           " << endl;
    cout << "   2. Letter frequency order                            " << endl;
    cout << "   3. Get user input and display frequency counts       " << endl;
    cout << "   4. Get user input, display frequency counts, and display language " << endl;
    cout << "   0. Exit the program    " << endl;
    cout << "Your choice --> ";
    
    //take in menu option selection and display it
    getline(cin, menuOptionString);
    std::istringstream ( menuOptionString ) >> menuOption;
    //choose output based on menuOption
    if(menuOption >= 1){
        cout << "Letter Frequency Counts:" << endl;
        
        // displays the 8 language titles
        cout << setw(8) << "Engl" << setw(6) << "Finn" << setw(6) << "Fren" << setw(6) << "Germ"
        << setw(6) << "Hung" << setw(6) << "Ital" << setw(6) << "Port" << setw(6) << "Span" << endl;
        
        //displays the count for each letter from the array.
        for (int j=0; j<26; j++){
            cout << char(j+'A') << ":" << setw(6) << englishFrequencies[j] << setw(6) << finnishFrequencies[j] << setw(6) << frenchFrequencies[j]
            << setw(6) << germanFrequencies[j] << setw(6) << hungarianFrequencies[j] << setw(6) << italianFrequencies[j]
            << setw(6) << portugueseFrequencies[j] << setw(6) << spanishFrequencies[j] << endl;
        }
        cout << endl;
    }
    
    if(menuOption >= 2){
        //Arrange letters in order (step 2)
        SortFrequencies(englishFrequencies, englishLetters);
        SortFrequencies(finnishFrequencies, finnishLetters);
        SortFrequencies(frenchFrequencies, frenchLetters);
        SortFrequencies(germanFrequencies, germanLetters);
        SortFrequencies(hungarianFrequencies, hungarianLetters);
        SortFrequencies(italianFrequencies, italianLetters);
        SortFrequencies(portugueseFrequencies, portugueseLetters);
        SortFrequencies(spanishFrequencies, spanishLetters);
        SortFrequencies(userFrequencies, userLetters);
        
        //displays the 8 language titles
        cout << "\nLetter frequency order:" << endl;
        cout << setw(8) << "Engl" << setw(6) << "Finn" << setw(6) << "Fren" << setw(6) << "Germ"
        << setw(6) << "Hung" << setw(6) << "Ital" << setw(6) << "Port" << setw(6) << "Span" << endl;
        
        //displays each language's letter distribution
        for (int j = 0; j < limit; j++){
            cout << setw(6) << englishLetters[j] << setw(6) << finnishLetters[j] << setw(6) << frenchLetters[j]
            << setw(6) << germanLetters[j] << setw(6) << hungarianLetters[j] << setw(6) << italianLetters[j]
            << setw(6) << portugueseLetters[j] << setw(6) << spanishLetters[j] << endl;
        }
    }
    
    if(menuOption >= 3){
        string userInput;
        
        //take in input
        cout << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): " << endl;
        char y;
        while(cin >> y )
        {
            userInput+= y;
            
            if (cin.eof())
                break;
        }
        //sending userInput and userFrequency array to know how many occurrences of each letter in the string exist
        UserTextToArray(userInput, userFrequencies);
        
        //print frequency distribution of user input
        for (int j = 0; j < limit; j++){
            cout << char (j+'A')<< ":" << userFrequencies[j]<<" ";
        }
        
        //Duplicate user frequency array for step 4
        Duplicate(userFrequencies, userOrderFreq);
        
        //sorts the letters based on number of occurrences
        SortFrequencies(userFrequencies, userLetters);
        
        //output of languages and now user language (step 3)
        cout << "\nLetter frequency order:" << endl;
        cout << setw(8) << "Engl" << setw(6) << "Finn" << setw(6) << "Fren" << setw(6) << "Germ"
        << setw(6) << "Hung" << setw(6) << "Ital" << setw(6) << "Port" << setw(6) << "Span"
        << setw(6) << "User" << endl;
        
        //output of letter distribution for all 9 letter arrays
        for (int j = 0; j < limit; j++){
            cout << setw(6) << englishLetters[j] << setw(6) << finnishLetters[j] << setw(6) << frenchLetters[j]
            << setw(6) << germanLetters[j] << setw(6) << hungarianLetters[j] << setw(6) << italianLetters[j]
            << setw(6) << portugueseLetters[j] << setw(6) << spanishLetters[j] << setw(6) << userLetters[j] << endl;
        }
    }
    
    if(menuOption >= 4){
        //store dot product values for each language
        //the closer the value is to 1, the more similar the languages are
        float userToFinnish;
        float userToEnglish;
        float userToGerman;
        float userToHungarian;
        float userToItalian;
        float userToPortuguese;
        float userToSpanish;
        float userToFrench;
        
        //performs cosine similarity formula for each language and user's input
        userToFinnish=dotProduct(userOrderFreq, finnishOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(finnishOrderFreq, finnishOrderFreq)));
        userToEnglish=dotProduct(userOrderFreq, englishOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(englishOrderFreq, englishOrderFreq)));
        userToGerman=dotProduct(userOrderFreq, germanOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(germanOrderFreq, germanOrderFreq)));
        userToHungarian=dotProduct(userOrderFreq, hungarianOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(hungarianOrderFreq, hungarianOrderFreq)));
        userToItalian=dotProduct(userOrderFreq, italianOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(italianOrderFreq, italianOrderFreq)));
        userToPortuguese=dotProduct(userOrderFreq, portugueseOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(portugueseOrderFreq, portugueseOrderFreq)));
        userToSpanish=dotProduct(userOrderFreq, spanishOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(spanishOrderFreq, spanishOrderFreq)));
        userToFrench=dotProduct(userOrderFreq, frenchOrderFreq)/(sqrt(dotProduct(userOrderFreq, userOrderFreq))*sqrt(dotProduct(frenchOrderFreq, frenchOrderFreq)));
        
        //create vector to store similarity values in order to find closest match
        vector <float> values;
        values.push_back(userToFinnish);     //index 0
        values.push_back(userToEnglish);     //index 1
        values.push_back(userToFrench);      //index 2
        values.push_back(userToGerman);      //index 3
        values.push_back(userToPortuguese);  //index 4
        values.push_back(userToHungarian);   //index 5
        values.push_back(userToItalian);     //index 6
        values.push_back(userToSpanish);     //index 7
        
        //find closest match (language with dot product closest to 1)
        double max = 0;
        int place = 0;
        for (int j=0; j < (int)values.size(); j++){
            if (values[j]>max){
                max = values[j];
                place = j;
            }
        }
        cout << endl;
        
        //determine which language has the highest dot product and outputs the language
        switch(place){
            case 0:
                cout << "Language is Finnish" << endl;
                break;
            case 1:
                cout << "Language is English" << endl;
                break;
            case 2:
                cout << "Language is French" << endl;
                break;
            case 3:
                cout << "Language is German" << endl;
                break;
            case 4:
                cout << "Language is Portuguese" << endl;
                break;
            case 5:
                cout << "Language is Hungarian" << endl;
                break;
            case 6:
                cout << "Language is Italian" << endl;
                break;
            case 7:
                cout << "Language is Spanish" << endl;
                break;
        }
    }
    
    if(menuOption == 0){
        exit(0);
    }
    
    
    return 0;
}//end main

