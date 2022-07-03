#include<iostream>
#include<cstring>
using namespace std;

class tahmid
{
    protected:
        string title;
        float rating;
    public:
        tahmid(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display() = 0; // pure function
};

class tahmid_video: public tahmid
{
    float video_leangth;
    public:
        tahmid_video(string s, float r, float vl): tahmid(s,r)
        {
            video_leangth = vl;
        }
        void display()
        {
            cout<<"title of this video is: "<<title<<endl;
            cout<<"rating of this video is: "<<rating<<" out of 5"<<endl;
            cout<<"video leangth of this video: "<<video_leangth<<" minute"<<endl<<endl;
        }
};

class tahmid_text: public tahmid
{
    int word_num;
    public:
        tahmid_text(string s, float r, int wl): tahmid(s,r)
        {
            word_num = wl;
        }
        void display()
        {
            cout<<"title of this text is: "<<title<<endl;
            cout<<"rating of this text is: "<<rating<<" out of 5"<<endl;
            cout<<"word leangth of this text: "<<word_num<<" words"<<endl<<endl;
        }
};

int main()
{
    tahmid_video tutorial("django tutorial", 4.58, 6.3);
    // tutorial.display();
    tahmid_text tutorial1("django text tutorial", 4.25, 500);
    // tutorial1.display();

    tahmid *ptr[2];
    ptr[0] = &tutorial;
    ptr[1] = &tutorial1;
    
    ptr[0]->display();
    ptr[1]->display();

    return 0;
}