
#include "dictionaryHead"


int main (void) {
    int pos;

    while (1) {
       word = GetNextWord();
       if ( 0 ==word.length() )  {
           cout << "dumping whole dictionary..." << endl;
           cout << dictionary;
           cout << "dumping first 5 words in dictionary...." << endl;
           dictionary.dump(cout,5);
           break;
       }
       if ((dictionary.LocateWord(word)) >=  0 ) 
           cout << "word " << word << "already in dictionary\n";
       dictionary = dictionary + w;
    }
    return 0;
}
