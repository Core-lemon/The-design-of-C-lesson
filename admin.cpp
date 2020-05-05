#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include "sheng.h"
using namespace std;
int main()
{
	Student s[150];
	Teacher t[100];
	Professor p[150];
	HeadProfessor hp[150];
	Department dp[150];
	string name,sex,post,num;
	int bh;
	string de; 
	int xz1;
	int xz2;
	string xz3;
	int i=0;
	cout<<"*****************************************"<<endl;
	cout<<"1.输入学校人员信息"<<endl;
	cout<<"2.输出学校人员信息"<<endl;
	cout<<"输入其他任意字符退出本系统"<<endl;	
	cout<<"*****************************************"<<endl;
	cout<<"请输入编号进行操作:"<<endl;
	cin>>xz1;
	if(xz1==1)
	{ 
	cout<<"*****************************************"<<endl;
	cout<<"1.输入学生信息"<<endl; 
	cout<<"2.输入讲师信息"<<endl;
	cout<<"3.输入教授信息"<<endl;
	cout<<"4.输入系主任信息"<<endl;
	cout<<"5.输入系成员信息"<<endl;
	cout<<"6.输入所有人员信息"<<endl;	
	cout<<"*****************************************"<<endl;
	cout<<"请输入编号进行操作:"<<endl;
	cin>>xz2;
	switch(xz2)
	{
		case 1:{
			ofstream ofile;
			ofile.open(stext,ios::in);
			if(!ofile)
			{
				ofile.open(stext,ios::app); 
				ofile<<setw(4)<<"姓名"<<setw(8)<<"性别"<<setw(10)<<"身份"<<setw(12)<<"编号"<<endl;
				ofile.close();
			}
			ofile.close();
			ofile.open(stext,ios::app);//app表示每次操作前定位至文件末尾，即便于储存多行数据 
	        cout<<"-----------------------------------------"<<endl;
			cout<<"输入格式：姓名，性别，身份，编号"<<endl;
			cout<<"每输入一项后，按回车输入下一项" <<endl; 
			cout<<"-----------------------------------------"<<endl;
		while(1)
		{
			cin>>name;
			cin>>sex;
			cin>>post;
			cin>>num;
			s[i]=Student(name,sex,post,num);
	        ofile<<setw(4)<<s[i].getname()<<setw(6)<<s[i].getsex()<<setw(8)<<s[i].getpost()<<setw(10)<<s[i].getnum()<<endl;
	        ofstream file;
	        file.open(sntext,ios::app);
	        file<<s[i].getname()<<endl;
	        cout<<"-----------------------------------------"<<endl;
			cout<<"是否继续输入？Yes/No"<<endl;
	        cin>>xz3;
	        cout<<"-----------------------------------------"<<endl;
			if(xz3=="Yes")
			{
				i++;
			}
			else 
			{
				i=0;
				cout<<"-----------------------------------------"<<endl;
				cout<<"所有信息录入完毕！"<<endl;
				cout<<"本次录入信息已经保存至 student.txt 感谢您的使用！"<<endl; 
				cout<<"如需继续输入或者输出录入信息请重新打开本程序(=^-ω-^=)！" <<endl;
				cout<<"-----------------------------------------"<<endl;
				ofile.close();
				file.close();
			    break;
			}
		}	
		}break;
		case 2:{
			ofstream ofile;
			ofile.open(ttext,ios::in);
			if(!ofile)
			{
				ofile.open(ttext,ios::app); 
				ofile<<setw(4)<<"姓名"<<setw(8)<<"性别"<<setw(10)<<"身份"<<setw(12)<<"编号"<<endl;
				ofile.close();
			}
			ofile.close();
			ofile.open(ttext,ios::app);
	        cout<<"-----------------------------------------"<<endl;
	        cout<<"输入格式：姓名，性别，身份，编号"<<endl;
			cout<<"每输入一项后，按回车输入下一项" <<endl; 
			cout<<"-----------------------------------------"<<endl;
		while(1)
		{
			cin>>name;
			cin>>sex;
			cin>>post;
			cin>>num;
			t[i]=Teacher(name,sex,post,num);
	        ofile<<setw(4)<<t[i].getname()<<setw(6)<<t[i].getsex()<<setw(8)<<t[i].getpost()<<setw(10)<<t[i].getnum()<<endl;
	        ofstream file;
	        file.open(tntext,ios::app);
	        file<<t[i].getname()<<endl;
	        cout<<"-----------------------------------------"<<endl;
			cout<<"是否继续输入？Yes/No"<<endl;
			cin>>xz3;
			cout<<"-----------------------------------------"<<endl;
			if(xz3=="Yes")
			{
				i++;
			}
			else 
			{
				i=0;
				cout<<"-----------------------------------------"<<endl;
				cout<<"所有信息录入完毕！"<<endl;
				cout<<"本次录入信息已经保存至 teacher.txt 感谢您的使用！"<<endl; 
				cout<<"如需继续输入或者输出录入信息请重新打开本程序(=^-ω-^=)！" <<endl;
				cout<<"-----------------------------------------"<<endl;
				ofile.close();
				file.close();
			    break;
			}
		}
		}break;
		case 3:
		{
		ofstream ofile;
			ofile.open(ptext,ios::in);
			if(!ofile)
			{
				ofile.open(ptext,ios::app); 
				ofile<<setw(4)<<"姓名"<<setw(8)<<"性别"<<setw(10)<<"身份"<<setw(12)<<"编号"<<endl;
				ofile.close();
			}
			ofile.close();
			ofile.open(ptext,ios::app);
	        cout<<"-----------------------------------------"<<endl;
	        cout<<"输入格式：姓名，性别，身份，编号"<<endl;
			cout<<"每输入一项后，按回车输入下一项" <<endl; 
			cout<<"-----------------------------------------"<<endl;
		while(1)
		{
			cin>>name;
			cin>>sex;
			cin>>post;
			cin>>num;
			p[i]=Professor(name,sex,post,num);
	        ofile<<setw(4)<<p[i].getname()<<setw(6)<<p[i].getsex()<<setw(8)<<p[i].getpost()<<setw(10)<<p[i].getnum()<<endl;
	        ofstream file;
	        file.open(pntext,ios::app);
	        file<<p[i].getname()<<endl;
	        cout<<"-----------------------------------------"<<endl;
			cout<<"是否继续输入？Yes/No"<<endl;
			cin>>xz3;
			cout<<"-----------------------------------------"<<endl;
			if(xz3=="Yes")
			{
				i++;
			}
			else 
			{
				i=0;
				cout<<"-----------------------------------------"<<endl;
				cout<<"所有信息录入完毕！"<<endl;
				cout<<"本次录入信息已经保存至 professor.txt 感谢您的使用！"<<endl; 
				cout<<"如需继续输入或者输出录入信息请重新打开本程序(=^-ω-^=)！" <<endl;
				cout<<"-----------------------------------------"<<endl;
				ofile.close();
				file.close();
			    break;
			}
		}
		}break;
		case 4:
		{
		ofstream ofile;
			ofile.open(hptext,ios::in);
			if(!ofile)
			{
				ofile.open(hptext,ios::app); 
				ofile<<setw(4)<<"姓名"<<setw(8)<<"性别"<<setw(10)<<"身份"<<setw(12)<<"编号"<<endl;
				ofile.close();
			}
			ofile.close();
			ofile.open(hptext,ios::app);
	        cout<<"-----------------------------------------"<<endl;
	        cout<<"输入格式：姓名，性别，身份，编号"<<endl;
			cout<<"每输入一项后，按回车输入下一项" <<endl; 
			cout<<"-----------------------------------------"<<endl;
		while(1)
		{
			cin>>name;
			cin>>sex;
			cin>>post;
			cin>>num;
			hp[i]=HeadProfessor(name,sex,post,num);
	        ofile<<setw(4)<<hp[i].getname()<<setw(6)<<hp[i].getsex()<<setw(8)<<hp[i].getpost()<<setw(10)<<hp[i].getnum()<<endl;
	        ofstream file;
	        file.open(hpntext,ios::app);
	        file<<hp[i].getname()<<endl;
	        cout<<"-----------------------------------------"<<endl;
			cout<<"是否继续输入？Yes/No"<<endl;
			cin>>xz3;
			cout<<"-----------------------------------------"<<endl;
			if(xz3=="Yes")
			{
				i++;
			}
			else 
			{
				i=0;
				cout<<"-----------------------------------------"<<endl;
				cout<<"所有信息录入完毕！"<<endl;
				cout<<"本次录入信息已经保存至 headprofessor.txt 感谢您的使用！"<<endl; 
				cout<<"如需继续输入或者输出录入信息请重新打开本程序(=^-ω-^=)！" <<endl;
				cout<<"-----------------------------------------"<<endl;
				ofile.close();
				file.close();
			    break;
			}
		}
		}break;
		case 5:
		{
		ofstream ofile;
			ofile.open(dptext,ios::in);
			if(!ofile)
			{
				ofile.open(dptext,ios::app); 
				ofile<<setw(4)<<"姓名"<<setw(8)<<"性别"<<setw(10)<<"身份"<<setw(12)<<"编号"<<endl;
				ofile.close();
			}
			ofile.close();
			ofile.open(dptext,ios::app);
	        cout<<"-----------------------------------------"<<endl;
	        cout<<"输入格式：姓名，性别，身份，编号"<<endl;
			cout<<"每输入一项后，按回车输入下一项" <<endl; 
			cout<<"-----------------------------------------"<<endl;
		while(1)
		{
			cin>>name;
			cin>>sex;
			cin>>post;
			cin>>num;
			dp[i]=Department(name,sex,post,num);
	        ofile<<setw(4)<<dp[i].getname()<<setw(6)<<dp[i].getsex()<<setw(8)<<dp[i].getpost()<<setw(10)<<dp[i].getnum()<<endl;
	        ofstream file;
	        file.open(dpntext,ios::app);
	        file<<dp[i].getname()<<endl;
	        cout<<"-----------------------------------------"<<endl;
			cout<<"是否继续输入？Yes/No"<<endl;
			cin>>xz3;
			cout<<"-----------------------------------------"<<endl;
			if(xz3=="Yes")
			{
				i++;
			}
			else 
			{
				i=0;
				cout<<"-----------------------------------------"<<endl;
				cout<<"所有信息录入完毕！"<<endl;
				cout<<"本次录入信息已经保存至 department.txt 感谢您的使用！"<<endl; 
				cout<<"如需继续输入或者输出录入信息请重新打开本程序(=^-ω-^=)！" <<endl;
				cout<<"-----------------------------------------"<<endl;
				ofile.close();
				file.close();
		    	break;
			}
		}
		}break;
		case 6:
		{
		ofstream ofile;
			ofile.open(alltext,ios::in);
			if(!ofile)
			{
				ofile.open(alltext,ios::app); 
				ofile<<setw(4)<<"姓名"<<setw(8)<<"性别"<<setw(10)<<"身份"<<setw(12)<<"编号"<<endl;
				ofile.close();
			}
			ofile.close();
			ofile.open(alltext,ios::app);
	        ofile<<setw(4)<<"姓名"<<setw(6)<<"性别"<<setw(8)<<"身份"<<setw(10)<<"编号"<<endl;
	        cout<<"-----------------------------------------"<<endl;
	        cout<<"输入格式：姓名，性别，身份，编号"<<endl;
			cout<<"每输入一项后，按回车输入下一项" <<endl; 
			cout<<"-----------------------------------------"<<endl;
		while(1)
		{
			cin>>name;
			cin>>sex;
			cin>>post;
			cin>>num;
			dp[i]=Department(name,sex,post,num); 
	        ofile<<setw(4)<<dp[i].getname()<<setw(6)<<dp[i].getsex()<<setw(8)<<dp[i].getpost()<<setw(10)<<dp[i].getnum()<<endl;
	        ofstream file;
	        file.open(allntext,ios::app);
	        file<<dp[i].getname()<<endl;
	        cout<<"-----------------------------------------"<<endl;
			cout<<"是否继续输入？Yes/No"<<endl;
			cin>>xz3;
			cout<<"-----------------------------------------"<<endl;
			if(xz3=="Yes")
			{
				i++;
			}
			else 
			{
				i=0;
				cout<<"-----------------------------------------"<<endl;
				cout<<"所有信息录入完毕！"<<endl;
				cout<<"本次录入信息已经保存至 all.txt 感谢您的使用！"<<endl; 
				cout<<"如需继续输入或者输出录入信息请重新打开本程序(=^-ω-^=)！" <<endl;
				cout<<"-----------------------------------------"<<endl;
				ofile.close();
				file.close();
			    break;
			}
		}
		}break;
		default:break;
	}
	} 
	else if(xz1==2) 
	{
	cout<<"*****************************************"<<endl;
	cout<<"1.输出学生信息"<<endl; 
	cout<<"2.输出讲师信息"<<endl;
	cout<<"3.输出教授信息"<<endl;
	cout<<"4.输出系主任信息"<<endl;
	cout<<"5.输出系成员信息"<<endl;
	cout<<"6.输出指定或着所有人员信息"<<endl;
	cout<<"*****************************************"<<endl;
	cout<<"请输入编号进行操作:"<<endl;
	cin>>bh;
	cout<<"-----------------------------------------"<<endl;
	i=0; 
	switch(bh)
	{
		case 1:{
			char file1[30];
		strcpy(file1,stext);
		ifstream infile;
		infile.open(file1);
		string s;
		while(getline(infile,s))//获取文件行数，并把每一行转化为string型输出 
		{
			cout<<s<<endl;
		}
		infile.close();}
		break;
		case 2:
	    {char file2[30];
		strcpy(file2,ttext);
		ifstream infile;
		infile.open(file2);
		string s;
		while(getline(infile,s))
		{
			cout<<s<<endl;
		}
		infile.close();
		}break;
		case 3:
		{char file3[30];
		strcpy(file3,ptext);
		ifstream infile;
		infile.open(file3);
		string s;
		while(getline(infile,s))
		{
			cout<<s<<endl;
		}
		infile.close();
		}break;
		case 4:
		{char file4[30];
		strcpy(file4,hptext);
		ifstream infile;
		infile.open(file4);
		string s;
		while(getline(infile,s))
		{
			cout<<s<<endl;
		}
		infile.close();
		}break;
		case 5:
		{	char file5[30];
		strcpy(file5,dptext);
	    ifstream infile;
		infile.open(file5);
		string s;
		while(getline(infile,s))
		{
			
			cout<<s<<endl;
		}
		infile.close();
		}break;
		case 6:
		{char file6[30];
		strcpy(file6,alltext);
		ifstream infile;
		infile.open(file6);
		string s;
		while(getline(infile,s))
		{
			cout<<s<<endl;
		}
		infile.close();
		}break;
		default:break;
	}
	cout<<"*****************************************"<<endl;
	cout<<"是否召集输出成员开会"<<endl;
	cout<<"Yes"<<endl<<"No"<<endl; 
	cout<<"输入区分大小写"<<endl; 
	cout<<"*****************************************"<<endl; 
	cin>>de;
		cout<<"-----------------------------------------"<<endl; 
	if(de=="Yes")
	{
	switch(bh)
	{
		case 1:
		{
			ifstream infile;
			infile.open(sntext);
	        i=0;
	        string n;
			while(1)
			{
				infile>>n;
				if(infile.eof())//因为eof()在执行下次内容后才会返回上次的布尔值，即在本循环中会多执行一次构造函数和meeting函数，!infile.eof判断文件末尾是否为空，即判断行是否结束，该返回值为布尔类型.
				{
					infile.close();
					break;
				}
				s[i]=Student(n);
				s[i].meeting();
				i++;
			 } 
			 infile.close();
		};break;
		case 2:{
			ifstream infile;
			infile.open(tntext);
	        i=0;
	        string n;
			while(1)
			{
				infile>>n;
				if(infile.eof())//因为eof()在执行下次内容后才会返回上次的布尔值，即在本循环中会多执行一次构造函数和meeting函数，!infile.eof判断文件末尾是否为空，即判断行是否结束，该返回值为布尔类型.
				{
					infile.close();
					break;
				}
				t[i]=Teacher(n);
				t[i].meeting();
				i++;
			 } 
			 infile.close();
		};break;
		case 3:{
			ifstream infile;
			infile.open(pntext);
	        i=0;
	        string n;
			while(1)
			{
				infile>>n;
				if(infile.eof())//因为eof()在执行下次内容后才会返回上次的布尔值，即在本循环中会多执行一次构造函数和meeting函数，!infile.eof判断文件末尾是否为空，即判断行是否结束，该返回值为布尔类型.
				{
					infile.close();
					break;
				}
				p[i]=Professor(n);
				p[i].meeting();
				i++;
			 } 
			 infile.close();
		};break;
		case 4:{
			ifstream infile;
			infile.open(hpntext);
	        i=0;
	        string n;
			while(1)
			{
				infile>>n;
				if(infile.eof())//因为eof()在执行下次内容后才会返回上次的布尔值，即在本循环中会多执行一次构造函数和meeting函数，!infile.eof判断文件末尾是否为空，即判断行是否结束，该返回值为布尔类型.
				{
					infile.close();
					break;
				}
				hp[i]=HeadProfessor(n);
				hp[i].meeting();
				i++;
			 } 
			 infile.close();
		};break;
		case 5:{
			ifstream infile;
			infile.open(dpntext);
	        i=0;
	        string n;
			while(1)
			{
				infile>>n;
				if(infile.eof())//因为eof()在执行下次内容后才会返回上次的布尔值，即在本循环中会多执行一次构造函数和meeting函数，!infile.eof判断文件末尾是否为空，即判断行是否结束，该返回值为布尔类型.
				{
					infile.close();
					break;
				}
				dp[i]=Department(n);
				dp[i].meeting();
				i++;
			 } 
			 infile.close();
		};break;
		case 6:{
			ifstream infile;
			infile.open(alltext);
	        i=0;
	        string n;
			while(1)
			{
				infile>>n;
				if(infile.eof())//因为eof()在执行下次内容后才会返回上次的布尔值，即在本循环中会多执行一次构造函数和meeting函数，!infile.eof判断文件末尾是否为空，即判断行是否结束，该返回值为布尔类型.
				{
					infile.close();
					break;
				}
				dp[i]=Department(n);
				dp[i].meeting();
				i++;
			 } 
			 infile.close();
		};break;
		default:break;
	}
	}
	else
	{
		cout<<"感谢你的使用！"<<endl;
	}
}
else 
{
	return 0;
}
	return 0;
}

