#include<iostream>
#include<string>
#define stext "student.txt"//为学生信息文件 
#define sntext "stuname.txt"//为学生名单 
#define ttext "teacher.txt"
#define tntext "tname.txt"
#define ptext "professor.txt"
#define pntext "ptname.txt"
#define hptext "headprofessor.txt"
#define hpntext "hpname.txt"
#define dptext "department.txt"
#define dpntext "dpname.txt"
#define alltext "all.txt"
#define allntext "allname.txt"
using namespace std;
class CPerson
{protected:
	string name;
	string sex;
	public:
	string getname()
		{
			return name;
		}
	CPerson(string n,string s)
	{
		name=n;
		sex=s;
	}
	CPerson(string n)
	{
	name=n;
	}
	CPerson(){} 
	~CPerson(){}
	virtual void meeting()
	{
	cout<<name<<" is in a meeting!"<<endl;	
	}	
 };
 
class Department:public CPerson
{
	protected:
		string post;
		string num;
		public:
			string getpost()
			{
				return post;
			}
			string getsex()
			{
				return sex;
			}
			string getnum()
			{
				return num;
			}
			Department(string n,string s,string p,string num):CPerson(n,s),post(p),num(num){}
			Department(string n):CPerson(n){}
			Department(){} 
			~Department(){}
		 void meeting()
		 {
		 cout<<name<<" is in a meeting!" <<endl;
		 }
};

class Teacher:public Department
{
	protected:
		string num;
		public:
			string getpost()
			{
				return post;
			}
			string getsex()
			{
				return sex;
			}
			string getnum()
			{
				return num;
			}
			Teacher(string n,string s,string p,string num):Department(n,s,p,num),num(num){}
			Teacher(string n):Department(n){}
			Teacher(){} 
			~Teacher(){}
			void meeting()
			{
			
				cout<<name<<" is in a meeting!"<<endl;
			}
};

class Professor:public Teacher
{
	public:
		string getname()
			{
				return name;
			}
			string getnum()
			{
				return num;
			}
			string getpost()
			{
				return post;
			}
			string getsex()
			{
				return sex;
			}
		Professor(string n,string s,string p,string num):Teacher(n,s,p,num){}
		Professor(string n):Teacher(n){} 
		Professor(){} 
		~Professor(){}
		void meeting()
			{
				Teacher::meeting();
			}
};

class HeadProfessor:public Professor
{
	public:
		string getname()
			{
				return name;
			}
			string getnum()
			{
				return num;
			}
			string getpost()
			{
				return post;
			}
			string getsex()
			{
				return sex;
			}
		HeadProfessor(string n,string s,string p,string num):Professor(n,s,p,num){}
		HeadProfessor(string n):Professor(n){}
		HeadProfessor(){}
		~HeadProfessor(){}
		void meeting()
			{
				Teacher::meeting();
			}
};

class Student:public Department
{
	protected:
		string num;
		public:
			string getname()
			{
				return name;
			}
			string getnum()
			{
				return num;
			}
			string getpost()
			{
				return post;
			}
			string getsex()
			{
				return sex;
			}
			Student(string n,string s,string p,string num):Department(n,s,p,num),num(num){}
			Student(string n):Department(n){}
			Student(){}
			~Student(){}
			void meeting()
			{
				cout<<name<<" is in a meeting!"<<endl;
			}
};

