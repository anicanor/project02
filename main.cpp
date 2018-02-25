// main.cpp
// Karnveer Bains
// kbains6

//it is important to include these libaries
#include <iostream>
#include <istream>
#include <string>
#include <fstream> 
// class Video and class Vlist
#include "video.h"
#include "vlist.h"
using namespace std;

int main()
{
// variable declaration here
    Vlist list;
    float length;
    int rating;
    string title;
    string comment;
    string URL;
    string command;
//checks what the command is and responds accordingly. 
while(getline(cin,command))
{
    if ( command == "insert")
    {
        getline(cin,title);
        getline(cin,comment);
        getline(cin,URL);
        cin>>length;
        cin>>rating;
        cin.ignore();
        Video *new_video = new Video(title, URL, comment, length, rating);
        // error command if it is already in list. each respective command has an error if not valid
        if (!list.insert(new_video))
        {
            cerr << "Could not insert video <" <<title<< ">, already in list."<<endl;
        }
     }
     if( command == "remove" )
     {
        getline(cin, title);
        if ( !list.remove(title) )
        {
            cerr<<"Title <" <<title<< "> not in list, could not delete." << endl;
        }
     }
     if( command == "print")
     {
        list.print();
     }
     if( command == "length" )
     {
        cout<<list.length()<<endl;
     }
     if( command == "lookup" )
     {
        getline(cin, title);
        Video *video = list.lookup(title);
        if(video)
            video->print();
        else
        cerr << "Title <" << title << "> not in list." << endl;
     }
     // If the command it not valid it will error out that it doesnt exist. 
     if( command != "insert" && command != "remove" && command != "print" && command != "length" && command != "lookup")
     {
     cerr << "<" << command << "> is not a legal command, giving up." << endl;
     return 1;
     }
     }
        return 0;
}


