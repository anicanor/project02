//vlist.cpp
//Karnveer Bains
//kbains6

//libraries
#include<iostream>
#include<string>
//classes
#include"vlist.h"
#include"video.h"

using namespace std;
//constructor
Vlist::Vlist()
{
    m_head = NULL;
}
//destructor
Vlist::~Vlist()
{
    Node *ptr = m_head;
    while(ptr != NULL)
    {
        Node *temp;
        temp = ptr;
        ptr = ptr->m_next;
        delete temp;
    }
}
//lookup function. checks the list for the title. 
Video* Vlist::lookup(string title)
{
    if(!m_head)
    return NULL:

    for( Node *tmp = m_head; temp != NULL; tmp = tmp->m_next )
    {
        if( title == tmp->m_video->name() )
        {
            return temp->m_video;
        }
    }
    return NULL;
}
//Length function. increments the length till end, and once at end it returns length. 
int Vlist::length()
{
    int length = 0;

    for (Node *ptr = m_head; ptr !=NULL; ptr=ptr->m_next)
    {
        length++;
    }
    return length;
}
//basic print function.
void Vlist::print()
{
    Node *ptr = m_head;
    while(ptr != NULL)
    {
        ptr->m_video->print();
        ptr = ptr->m_next;
    }
}
//insert function. it will first add a new node if empty, then it will create the rest.
bool Vlist::insert(Video *video)
{
    if(m_head == NULL)
    {
        m_head = new Node(video, m_head);
        return true;
    }
    if( m_head->m_video->name() == video->name() )
    {
        return false;
    }
    if( m_head->m_video->name() > video->name() )
    {
        m_head = new Node(video, m_head);
        return true;
    }
    else
    {
        Node *ptr = m_head;
        while (( ptr->m_next != NULL) && (ptr->m_next->m_video->name() <= video->name() )
        {
            if( ptr->m_next->m_video->name() == video->name() )
            {
                return false;
            }
            ptr = ptr->m_next;
        }
        ptr->m_next = new Node(video, ptr->m_next);
        return true;
        }
}
// remove function. set a temp node to keep place then delete it. 
bool Vlist::remove(string target)
{
    if(m_head==NULL)
    {
        return false;
    }
    if( m_head->m_video->name()==target )
    {
        Node *tmp = m_head;
        m_head = m_head->m_next;
        delete tmp;
        return true;
}
Node *ptr = m_head;
while(ptr->m_next != NULL && ptr->m_next->m_video->name() != target)
{
    ptr = ptr->m_next;
}
if(ptr->m_next == NULL)
return false;
Node *tmp = ptr->m_next;
ptr->m_next = ptr->m_next->m_next;
delete tmp;
return true;
}





