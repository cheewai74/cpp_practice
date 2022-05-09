#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string song_lyrics = "\n\tFor your eyes only, can see me through the night";
    song_lyrics.append("\n\tFor your eyes only, I never need to hide");
    song_lyrics.append("\n\tYou can see so much in me, so much in me that's new");
    song_lyrics.append("\n\tI never felt until I looked at you");
    song_lyrics.append("\n\tFor your eyes only, only for you");

    ofstream writer("lyrics.txt");
    if(! writer){
        cout << "Error opening file for output. " << endl ;
        return -1; // Signal an error t hen exit t he program.
    }
    writer << song_lyrics <<endl; // Write output
    writer.close(); // Close file stream
    return 0;
}

