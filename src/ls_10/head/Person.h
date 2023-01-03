namespace n_Ls_10_01 {
    class CPerson
    {
    public:
        int m_iIndex;
        char m_cName[25];
        short m_shAge;
        double m_dSalary;
        short getAge();
        int setAge(short sAge);
        int getIndex() ;
        int setIndex(int iIndex);
        char* getName() ;
        int setName(char cName[25]);
        double getSalary() ;
        int setSalary(double dSalary);
    };
}

namespace n_Ls_10_02 {
    class CPerson
    {
    public:
        CPerson();
        CPerson(int iIndex,short m_shAge,double m_dSalary);
        int m_iIndex;
        short m_shAge;
        double m_dSalary;
        int getIndex();
        short getAge();
        double getSalary();
    };
}

namespace n_Ls_10_03
{
    class CPerson
    {
    public:
        CPerson(int iIndex,short shAge,double dSalary);//构造函数
        CPerson(CPerson & copyPerson);//复制构造函数
        int m_iIndex;
        short m_shAge;
        double m_dSalary;
        int getIndex();
        short getAge();
        double getSalary() ;
    };
}

namespace n_Ls_10_04 {
        class CPerson
    {
    public:
        CPerson();
        ~CPerson();//析构函数
        char* m_pMessage;
        void ShowStartMessage();
        void ShowFrameMessage();
    };
}


