#include"Base.h"


using namespace std;
int main()
{
    int gradeOne, gradeTwo;
    char temp;
    cout<<"Please enter 2 grades, separated by a space: ";
    cin>>gradeOne>>temp>>gradeTwo;
    
    if(gradeOne < 60 && gradeTwo < 60)
        cout<<"Student Failed:("<<endl;
    else if(gradeOne >= 95 && gradeTwo >= 95)
        cout<<"Student Graduated with Honors:)"<<endl;
    else
        cout<<"Student Graduated!"<<endl;
    
    cout<<gradeOne<<endl;
    cout<<gradeTwo<<endl;
    cout<<temp<<endl;

	system("pause");
    return 0;
}