#include <iostream>
#include <string>
using namespace std;

struct Data{
    int time;
    string namejob;
    int rise;
};


int main(){
    Data mangp[5] = {
        {1,"a",0},
        {1,"b",0},
        {2,"c",0},
        {2,"d",0},
        {2,"e",0}
    };
    int timeday = 8;
    int timeafter =  14;
    int cag = 0;
    int con = 5-1;
    int dem = 0;
    while(timeday < 12 || timeafter < 18){
        if(cag == 0){
            if(timeday < 12){
                if(mangp[con].rise == 0){
                    timeday += mangp[con].time;
                    dem++;
                    mangp[con].rise++;
                    con--;
                    if (con < 0){
                        if(timeday > 12){
                            con++;
                            timeday -= mangp[con].time;
                            dem--;
                            mangp[con].rise--;
                            con = 5-1;
                            cag = 1;
                            continue;
                        }
                        //cout << "từ khung: " << timeday - mangp[con++].time << " tới khung: " << timeday << " việc " << mangp[con++].namejob << endl;
                        con = 5-1;
                        cag = 1;
                    }
                }
                if(timeday > 12){
                    con++;
                    timeday -= mangp[con].time;
                    dem--;
                    mangp[con].rise = 0;
                    con--;
                    if (con < 0){
                        con = 5-1;
                        cag = 1;
                    }
                    continue;
                }
                //cout << "từ khung: " << timeday - mangp[con++].time << " tới khung: " << timeday << " việc " << mangp[con++].namejob << endl; 
            } else if(timeday == 12){
                cag++;
                con= 5-1;
            } 
        }
        if(cag == 1){
            if(timeafter < 18){
                if(mangp[con].rise == 0){
                    timeafter += mangp[con].time;
                    dem++;
                    mangp[con].rise++;
                    con--;
                    if(timeafter == 18){
                        //cout << "từ khung: " << timeafter - mangp[con++].time << " tới khung: " << timeafter << " việc " << mangp[con++].namejob << endl;
                        break;
                    }
                    if (con < 0){
                        if(timeafter > 18){
                            con++;
                            timeafter -= mangp[con].time;
                            dem--;
                            mangp[con].rise--;
                            break;
                        }
                        //cout << "từ khung: " << timeafter - mangp[con++].time << " tới khung: " << timeafter << " việc " << mangp[con++].namejob << endl;
                        break;
                    }
                } else {
                    con--;
                    continue;
                }
                if(timeafter > 18){
                    con++;
                    timeafter -= mangp[con].time;
                    dem--;
                    mangp[con].rise--;
                    con--;
                    if (con < 0){
                        con = 5-1;
                        break;
                    }
                }
            }
        }
        if(dem == 5) break;
    }
}