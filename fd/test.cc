#include <iostream>
#include <assert.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class Date
{
  friend ofstream& operator<<(ofstream& ofs,Date& d);
public:
  Date(int year = 1,int month = 1,int day = 1)
    :_year(year)
    ,_month(month)
    ,_day(day)
  {}

private:
  int _year;
  int _month;
  int _day;
};

ofstream& operator<<(ofstream& ofs,Date& d)
{
  ofs << d._year <<" " << d._month << " " << d._day << endl;
  return ofs;
}

struct ServerInfo
{
  char _ip[32];//ip
  int _port;//端口
  Date _d;//日期类成员变量
};

/*void TestC_W_Bin()
{
  ServerInfo info = {"127.0.0.1",80};
  //fopen/fclose
  //二进制读写 fwrite/fread 写出来的东西，文件中看不见
  //文本读写 fpritnf/fscanf 
  FILE* fout = fopen("test.bin","w");
  assert(fout);

  fwrite(&info,sizeof(info),1,fout);
  
  fclose(fout);
}

void TestC_R_Bin()
{
  FILE* fin = fopen("test.bin","r");

  assert(fin);

  ServerInfo info;

  fread(&info,sizeof(info),1,fin);

  fclose(fin);

  printf("%s:%d\n",info._ip,info._port);
}*/

void TestC_R_Text()
{
  //fopen/fclose
  //二进制读写 fwrite/fread 写出来的东西，文件中看不见
  //文本读写 fpritnf/fscanf 
  FILE* fin = fopen("test.txt","r");
  
  assert(fin);
  
  ServerInfo info;
  
  fscanf(fin,"%s%d",info._ip,&info._port);//数组名就是地址，不用去地址&
  
  fclose(fin);
}

void TestC_W_Text()
{
  FILE* fout = fopen("test.txt","w");

  assert(fout);

  ServerInfo info = {"127.0.0.1",80};
  
  fprintf(fout,"%s:%d",info._ip,info._port);

  fclose(fout);
}

class ConfigManager
{
public:
  ConfigManager(const char* filename)
    :_filename(filename)
  {}

  void WriteBin(ServerInfo& info)
  {
    ofstream ofs(_filename.c_str(),ios_base::out | ios_base::binary);
    
    ofs.write((const char*)&info,sizeof(ServerInfo));   
  }

  void ReadBin(const ServerInfo& info)
  {
    ifstream ifs(_filename.c_str(),ios_base::in | ios_base::binary);
    
    ifs.read((char*)&info,sizeof(ServerInfo));    
  }

  void WriteText(ServerInfo& info)
  {
    ofstream ofs(_filename.c_str());
    
    //ofs << info._ip <<" " << info._port <<" " << info._d;
    ofs << info._d;
  }

  void ReadText(ServerInfo& info)
  {
    ifstream ifs(_filename.c_str());
    
    ifs >> info._ip >> info._port;
    //ifs >> info._d
  }

private:
  string _filename;

};

/*int main()
{
  //TestC_W_Bin();
  //TestC_R_Bin();
  
  //TestC_W_Text();
  //TestC_R_Text();

  //cout << ios_base::in << endl;
  //cout << ios_base::out << endl;
  //cout << ios_base::binary << endl;
  
  //ServerInfo info = {"127.0.0.1",80};
  
  //ConfigManager cm("config.bin");
  
  //cm.WriteBin(info);
  //cm.ReadBin(info);
  
  //cout << info._ip << ":" << info._port << endl;
  
  ServerInfo info = {"127.0.0.1",80};
  
  ConfigManager cm("config.txt");
  
  cm.WriteText(info);
  //cm.ReadText(info);
  
  //cout << info._ip << " " << info._port << endl;

  return 0;
}*/

struct PersonInfo
{
  string _name;
  int _age;
};

int main()
{
  //序列化
  PersonInfo info = {"张三",18};
  
  ostringstream oss;
  
  oss << info._name <<" " << info._age;
  
  //反序列化
  string str = oss.str();
  
  istringstream iss(str);

  string name;
  int age;

  iss >> name >> age;

  return 0;
}

