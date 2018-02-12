// main.cpp
// Karnveer Bains
// kbains6

//it is important to include these libaries
#include <iostream>
#include <istream>
#include <string>
#include <fstream> 
// class Video
#include "video.h"

using namespace std;

int main()
{
// variable declaration here
    float length;
    int rating;
    int videoAmount = 0;
    string sort;
    string title;
    string URL;
    string videos;
    string comment;
    getline(cin,sort);
    Video *videoInfo[100];
// if there is to many videos entered it returns an error
while(getline(cin, title))
{
    if(videoAmount == 100)
    {
        cerr << "Too many videos, giving up." << endl;
        return 1;
    }
    getline(cin,URL);
    getline(cin,comment);
    cin >> length;
    cin >> rating;
    cin.ignore();
    videoInfo[videoAmount] = new Video(title, URL, comment, length, rating);
    videoAmount++;
}
if(sort == "length") // these blocks of program are pointers and use the functioms within the class to produce the output
{
    for(int bottom = videoAmount -1; bottom > 0; bottom--)
        for (int current = 0; current < bottom; current++)
            if (videoInfo[current] -> longer(videoInfo[current+1]))
            swap(videoInfo[current], videoInfo[current+1]);
                for(int k = 0; k < videoAmount; k++)
                {
                    videoInfo[i]->print();
                }
}
if(sort == "rating") // it is mostly the same block of code as the last block but this time it used the shorter function within the class
{
    for(int bottom = videoAmount -1; bottom > 0; last--)
        for(int current = 0; current < bottom; current++)
            if(videoInfo[current]->shorter(videoInfo[current+1]))
            swap(videoInfo[current], videoInfo[current+1]);
            for(int k = 0; k < videoAmount, k++)
            {
                videoInfo[k]->print();
            }
if(sort == "title") // this uses the same block of code except this time it does the order function  
{
    for(int last = videoAmount -1; bottom > 0; bottom--)
        for(int current = 0; current < bottom; current++)
            if(videoInfo[current]->order(videoInfo[current+1]))
            swap(videoInfo[current], videoInfo[current+1]);
            for(int k = 0; k < videoAmount, k++)
            {
                video_info[k]->print():
            }
            }
            if(sort! = "length"&&sort!="rating"&&sort!="title")
                {
                    cerr << sort << " is not a legal sorting method, giving up." << endl;
                    return 1;
                }
                return 0;
                }




