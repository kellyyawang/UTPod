#ifndef UNTITLED5_SONG_H
#define UNTITLED5_SONG_H
#endif


#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
    string artist;
    string title;
    int size;
public:
    Song();
    Song(string sgArtist, string sgTitle, int sgSize);
    void setArtist(string sgArtist);
    void setTitle(string sgArtist, string sgTitle);
    void setSize(string sgArtist, string sgTitle, int sgSize);

    string getArtist() const
    {  return artist;  }
    string getTitle() const
    {  return title;  }
    int getSize() const
    {  return size;  }

    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator==(Song const &rhs);
};
