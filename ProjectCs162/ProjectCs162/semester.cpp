#include "semester.h"

void Semester::setSemesterName(string _semesterName){
    semesterName = _semesterName;
}

void Semester::setTotalLecturer(int _totalLecturer){
    total_lecturer = _totalLecturer;
}

void Semester::setTotalClass(int _totalClass){
    total_class = _totalClass;
}

void Semester::setTotalCourse(int _totalCourse){
    total_course = _totalCourse;
}

string Semester::getSemesterName(){
    return semesterName;
}

int Semester::getTotalClass(){
    return total_class;
}

int Semester::getTotalCourse(){
    return total_course;
}

int Semester::getTotalLecturer(){
    return total_lecturer;
}

void Semester::addStudentToCourse(int _studentID, string _courseID, string class_name){
    for (int i = 0; i < total_class; ++i){
        if(arrClass[i].getClassName() == class_name){
            for (int j = 0; j < arrClass[i].totalStudent; ++j){
                if(arrClass[i].student[j].getID() == _studentID){
                    int k = arrClass[i].student[j].numberofCourse;
                    arrClass[i].student[j].s_ListCourse[k] = _courseID;
                    k++;
                    arrClass[i].student[j].numberofCourse = k;
                    break;;
                }
            }
            break;
        }
    }
    for (int i = 0; i < total_course; ++i){
        if(arrCourse[i].getID() == _courseID){
            int h = arrCourse[i].c_totalStudent;
            arrCourse[i].c_ListStudent[h] = _studentID;
            ++h;
            arrCourse[i].c_totalStudent = h;
            break;
        }
    }
}

void Semester::addCourseToClass(string _courseID, string class_name){
    int pos_class = 0;
    int s_inClass = 0;
    for (int i = 0; i < total_class; ++i){
        if(arrClass[i].getClassName() == class_name){
            pos_class = i;
            s_inClass = arrClass[i].totalStudent;
            for(int j = 0; j < arrClass[i].totalStudent; ++i){
                int temp = arrClass[i].student[j].numberofCourse;
                arrClass[i].student[j].s_ListCourse[temp] = _courseID;
                temp++;
                arrClass[i].student[j].numberofCourse = temp;
            }
            break;
        }
    }
    for (int i = 0; i < total_course; ++i){
        int s_inCourse = arrCourse[i].c_totalStudent;
        if (arrCourse[i].getID() == _courseID){
            int temp = 0;
            for (int j = s_inCourse; j < s_inCourse + s_inClass; ++j){
                arrCourse[i].c_ListStudent[j] = arrClass[pos_class].student[temp++].getID();
            }
            arrCourse[i].c_totalStudent = s_inCourse + s_inClass;
            break;
        }
    }
}

//15
void Semester::ManuallyAddNewCourse(){
    Course a;
    int _No;
    string _ID, _CourseName, _Room, _LUsername, _LName, _LDegree, _Class;
    bool _LGender, _status; // 1 is active, 0 is inactive
    int _year, _month, _day, _sHour, _sMin, _eHour, _eMin;
    string _DoW;

    cout << "No: ";
    cin >> _No;
    a.setNo(_No);
    cout << "ID:";
    cin >> _ID;
    a.setID(_ID);
    cout << "Course name: ";
    cin >> _CourseName;
    a.setCourseName(_CourseName);
    cout << "Class name: ";
    cin >> _Class;
    a.setClass(_Class);
    cout << "Lecturer Username:";
    cin >> _LUsername;
    a.setLUsername(_LUsername);
    cout << "Lecturer Name :";
    cin >> _LName;
    a.setLDegree(_LName);
    cout << "Lecturer Degree's: ";
    cin >> _LDegree;
    a.setLDegree(_LDegree);
    cout << "Lecturer Gender: ";
    cin >> _LGender;
    a.setLGender(_LGender);
    a.setStatus(1);
    
    
}
