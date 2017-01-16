/*
*author:    jiangyt
*contact:   946692706@qq.com
*time:      2017.01.16
*function:  C++ name standard
*/

#include <iostream>
#include <vector>

using namespace std;

void MergeSort(int nNum1,int nNum2){
    // function:the first char is uppercase,like MaaaNbbb
    // var:the first char is type,int -> n,like nNum
    ;
}

class CMyClass{
    // class:with first char C,like CMyClass
public:

private:
    int m_nID;
    // var in class:m_ + type + name,like m_nID
};

int g_nID;
// global var:g + _ + type + name

int main()
{
    int nNum1;
    // var int:n + name,like nName
    short sNum;
    // var short:s + name,like sName
    unsigned int unNum;
    // var unsigned int:un + name,like unName
    long lNum;
    // var long:l + name,like lName
    float fNum;
    // var float:f + name,like fName
    double dNum;
    // var double:d + name,like dName
    char chName;
    // var char:ch + name,like chName
    char szPath[] = "aaaa";
    // var string char:sz + name,like szName
    string strPath = "aaaa";
    // var string:str + Name,like strPath
    bool bIsOk;
    // var bool:b + Name,like bIsOk
    char * pPath;
    // var pointer:p + Name,like pName
    int arrnNum[10];
    // var array:arr + type + Name,like arrnNum
    string arrstrName[10];
    // var array:arr + type + Name,like arrstrName
    enum EMWeek{
        // enum type:EM + Name,like EMWeek
        emSunday
    };
    EMWeek emSun;
    // var enum:em + Name,like emSun
    vector<int> vecNum;
    // var vector: vec + Name,like vecNum

    cout << "Hello world!" << endl;
    return 0;
}
