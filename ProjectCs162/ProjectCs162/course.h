#ifndef course_h
#define course_h

#include "include.h"

struct check
{
    string attendace[10];
    string score[4];
};

class Course{
private:
    string c_No;
    string c_ID, c_CourseName, c_Room, c_LUsername, c_LName, c_LDegree, c_Class;
    bool c_LGender, c_status; // 1 is active, 0 is inactive
    string c_startDate, c_endDate;
    string c_sHour, c_sMin, c_eHour, c_eMin;
    string c_DoW;
    
public:
    
    int c_totalStudent;
    string c_ListStudent[50];
    check Check[50];
    bool point;
    
    void setStatus(bool _status);
    void setNo(string _No);
    void setID(string _ID);
    void setCourseName(string _CourseName);
    void setLUsername(string _LUsername);
    void setLName(string _LName);
    void setClass(string _Class);
    void setLDegree(string _LDegree);
    void setRoom(string _Room);
    void setLGender(bool _LGender);
    void setStartDate(string _startDate);
    void setEndDate(string _endDate);
    void setsHour(string _sHour);
    void setsMin(string _sMin);
    void seteHour(string _eHour);
    void seteMin(string _eMin);
    void setDoW(string _DoW);
    void setTime(string _startDate, string _endDate, string _sHour, string _sMin, string _eHour, string _eMin, string _DoW);
    void setTotalStudent(int _totalStudent);
    bool getStatus();
    string getNo();
    string getID();
    string getCourseName();
    string getUsername();
    string getLName();
    string getClass();
    string getLDegree();
    bool getLGender();
    string getStartDate();
    string getEndDate();
    string getsHour();
    string getsMin();
    string geteHour();
    string geteMin();
    string getDoW();
    int getTotalStudent();
    string getRoom();

    Course(){
        c_totalStudent = 0;
        setStatus(true);
        point = false;
    }
};

#endif
