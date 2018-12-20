#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Courses
{
    //initiate the variables needed
    public:
    string courseName;
    string courseCode;
    //setters to set the various
public:
    void setCourse(string name, string code)
    {
        courseName = name;
        courseCode = code;
    }
public:
    void setCourseName(string name)
    {
        this -> courseName = name;
    }
public:
    void setCourseCode(string code)
    {
        this -> courseCode = code;
    }

    //getters to get the various values of the courses
public:
    string getCoursename()
    {
        return courseName;
    }
public:
    string getCoursecode()
    {
        return courseCode;
    }


};


class Staff{
  public:
    string staffName;
    string staffID;

public:
void setStaff(string name, string id){
   staffName=name;
   staffID=id;

}
public:
    void setstaffName(string name)
    {
        this -> staffName = name;
    }

public:
    void setstaffID(string id)
    {
        this -> staffID = id;
    }

    public:
    string getstaffName()
    {
        return staffName;
    }
public:
    string getstaffID()
    {
        return staffID;
    }



};


int main()
{
    int pos;
    string name, code;
    string new_name, new_code;
    string new_staff, new_id;
    string key;
    int noOfElements = 5;
    Courses newCourse[10];

    newCourse[0].setCourse("Introduction_To_Computer_Architecture", "CSCD121");
    newCourse[1].setCourse("Introduction_To_Psychology", "PSYC101");
    newCourse[2].setCourse("Introduction_To_Statistics", "STAT101");
    newCourse[3].setCourse("Algebra", "MATH331");
    newCourse[4].setCourse("Vectors_And_Geometry", "MATH123");

    Staff newStaff[10];
    newStaff[0].setStaff("Mr.Abdulai Baba", "100121");
    newStaff[1].setStaff("Mrs.Ama Hilla", "100122");
    newStaff[2].setStaff("Miss Esther Amah", "100123");
    newStaff[3].setStaff("Mr Enti Quartey", "100124");
    newStaff[4].setStaff("Mr Emmanuel Winger", "1001245");



   while (1)

   {
        cout << endl << "1. Add course";
        cout << endl << "2. Delete course";
        cout << endl << "3. Edit course";
        cout << endl << "4. Display courses";
        cout << endl << "5. Add staff";
        cout << endl << "6. Delete staff";
        cout << endl << "7. Edit staff";
        cout << endl << "8. Display staff";
        cout << endl << "9. Exit";
        cout << endl << "Enter your choice : ";
        int choice;
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter the new course name followed by the new course code. NB:The courses should be separated with an underscore : "<<endl;
                cout<<"New course name: ";
                cin>>new_name;
                cout<<"New course code: ";
                cin>>new_code;
                newCourse[noOfElements].setCourseName(new_name);
                newCourse[noOfElements].setCourseCode(new_code);
                cout<<endl<<"You just added: ";
                cout<<newCourse[noOfElements].getCoursename();
                cout<<"\t"<<newCourse[noOfElements].getCoursecode();
                noOfElements++;
            break;

            case 2:
                cout<< endl <<"*************************************************************";
                cout<< endl <<"Enter the course code to be deleted: ";
                cin>>key;
                for(pos=0;pos<noOfElements;pos++)
                {
                    if(newCourse[pos].getCoursecode()==key)
                        break;
                }
                if(pos==noOfElements)
                {
                    cout<<"Search key not found";
                    break;
                }
                for(int i=pos;i<noOfElements;i++)
                    newCourse[i]=newCourse[i+1];
                noOfElements--;
                cout<< endl <<"*************************************************************";
            break;

            case 3:
                 cout<<"*******************************************************";
                cout<< endl <<"Enter the position to be edit : ";
                cin>>pos;
                cout <<" Enter 'a' to edit course name or 'b' to edit course code: ";
                char choice;
                cin >> choice;
                if (choice == 'a')
                {
                  cout<< endl <<"Enter the new course name : ";
                  cin >> name;
                  newCourse[pos-1].setCourseName(name);
                  cout<< endl <<"The new course name is : ";
                  cout<< newCourse[pos-1].getCoursename();
                  cout<<endl <<"**************************************************************";
                }
                if (choice == 'b')
                {
                  cout<< endl <<"Enter the new course code : ";
                  cin >> code;
                  newCourse[pos-1].setCourseCode(code);
                  cout<< endl <<"The new course name is : ";
                  cout<< newCourse[pos-1].getCoursecode();
                  cout<< endl <<"*************************************************************";
                }
            break;

            case 4:
               cout<< endl <<"*************************************************************";
                cout<<endl<<"The courses are: " <<endl;
                for (int i =0; i < noOfElements; i++)
                {
                    int pos = i + 1;
                    cout <<pos;
                    cout << ". ";
                    cout << newCourse[i].getCoursename();
                    cout << "\t";
                    cout <<newCourse[i].getCoursecode();
                    cout <<endl;
                }
                cout<< endl <<"*************************************************************";
            break;

            case 5:
               cout<<"Enter the new staff name followed by the new staff code. NB:The names should be separated with an underscore : "<<endl;
                cout<<"New staff name: ";
                cin>>new_staff;
                cout<<"New staff code: ";
                cin>>new_id;
                newStaff[noOfElements].setstaffName(new_staff);
                newStaff[noOfElements].setstaffID(new_id);
                cout<<endl<<"You just added: ";
                cout<<newStaff[noOfElements].getstaffName();
                cout<<"\t"<<newStaff[noOfElements].getstaffID();
                noOfElements++;
            break;

            case 6:
                 cout<< endl <<"*************************************************************";
                cout<< endl <<"Enter the staff id to be deleted: ";
                cin>>key;
                for(pos=0;pos<noOfElements;pos++)
                {
                    if(newStaff[pos].getstaffID()==key)
                        break;
                }
                if(pos==noOfElements)
                {
                    cout<<"Search key not found";
                    break;
                }
                for(int i=pos;i<noOfElements;i++)
                    newStaff[i]=newStaff[i+1];
                noOfElements--;
                cout<< endl <<"*************************************************************";
            break;

            case 7:
                cout<<"*******************************************************";
                cout<< endl <<"Enter the position to be edit : ";
                cin>>pos;
                cout <<" Enter 'a' to edit staff name or 'b' to edit staff id: ";
                char choices;
                cin >> choices;
                if (choices == 'a')
                {
                  cout<< endl <<"Enter the new staff name : ";
                  cin >> name;
                  newStaff[pos-1].setstaffName(name);
                  cout<< endl <<"The new course name is : ";
                  cout<< newStaff[pos-1].getstaffName();
                  cout<<endl <<"**************************************************************";
                }
                if (choice == 'b')
                {
                  cout<< endl <<"Enter the new staff code : ";
                  cin >> code;
                  newStaff[pos-1].setstaffID(code);
                  cout<< endl <<"The new staff code is : ";
                  cout<< newStaff[pos-1].getstaffID();
                  cout<< endl <<"*************************************************************";
                }
            break;

            case 8:
                 cout<< endl <<"*************************************************************";
                cout<<endl<<"The staff are: " <<endl;
                for (int i =0; i < noOfElements; i++)
                {
                    int pos = i + 1;
                    cout <<pos;
                    cout << ". ";
                    cout << newStaff[i].getstaffName();
                    cout << "\t";
                    cout <<newStaff[i].getstaffID();
                    cout <<endl;
                }
                cout<< endl <<"*************************************************************";

            break;
            case 9:
              return (0);
              break;
        }


   }
}

