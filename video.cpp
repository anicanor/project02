// video.cpp
// Karnveer Bains
// kbains6

#include "video.h"

#include<iostream>
#include<string>

using namespace std;
//this is where i declared the strings. it is the constructor function
Video::Video (string name, string address, string comments, float length, int rating)
{
    m_name = name;
    m_address = address;
    m_comments = comments;
    m_length = length;
    m_rating = rating;
}
//this is the printing function which is key when outputting. The main thing about this is the order they are written and and the proper indentacion/commans.
void Video::print()
{
    cout << m_name << ", " << m_address << ", " << m_comments << ", " << m_length << ", ";
        for (int k = m_rating; k > 0; k--)
        {
        cout << "*";
        }
        cout << endl;
}
bool Video::order(Video *other) // these functions use pointers from the previous declared strings. explained more in main.cpp
{
    return m_name > other -> m_name;
}
bool Video::longer(Video *other)
{
    return m_length < other -> m_length;
}
bool Video::shorter(Video *other)
{
    return m_rating < other -> m_rating;
}



    
