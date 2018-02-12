// video.h
// Karnveer Bains
// kbains6

#ifndef VIDEO_H
#define VIDEO_H

#include<iostream>
#include<string>
using namespace std;
// In the classes it is similar to lab03_courses
class Video
{
    public:
        Video(string name, string address, string comments, float length, int rating);
        void print();
        bool longer(Video *other);
        bool shorter(VIdeo *other);
        bool order(VIeo *other);
    private:
        string m_name;
        string m_address;
        string m_comments;
        float m_length;
        int m_rating;
};
#endif
