//vlist.h
//Karnveer Bains
//kbains6

#ifndef VLIST_H
#define VLIST_H
//libraries
#include<iostream>
#include<string>
#include "video.h"

using namespace std;

class Vlist
{
    public:
        Vlist();
        ~Vlist();
        void print();
        bool insert(Video *video);
        bool remove(string target);
        int length();
        Video* lookup(string title);

    private:
        // define class node inside header file. 
        class Node
        {
            public:
                Node(Video *video, Node *next)
                {m_video = video; m_next = next;
                Video *m_video;
                Node *m_next;
        };
        Node *m_head;
};
#endif





