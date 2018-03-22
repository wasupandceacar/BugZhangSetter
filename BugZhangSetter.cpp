#include "BugZhangSetter.h"

#include <QtWidgets/QApplication>
#include <Windows.h> 
#include <tlhelp32.h>
#include <psapi.h>

BugZhangSetter *BZS;

PROCESSENTRY32 pe;
HANDLE hSnapshot;

//修改数据
void BugZhangSetter::SetData(int choice, int num){
    DWORD dwNumberOfBytesRead;
    //为适配xp，使用若干小权限
    hSnapshot = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE | SYNCHRONIZE | READ_CONTROL
            , false, (DWORD)pe.th32ProcessID);
    int var1 = 185;
    int var2 = 144;
    int zero = 0;
    int var3 = 72;
    int one = 1;
    int three = 3;
    int var4 = 71;
    int var5 = 65;
    int nop1 = 2425393296;
    int nop2 = 37008;
    int var6 = 1476922761;
    int var7 = 1474563465;
    int var8 = 74;
    int var9 = 1247283363;
    int eax = 184;
    int var10 = 2283;
    int var11 = 186;
    int max = num * 100;
    int var12 = 41911311;
    int var13 = 41059343;
    int four = 4;
    int var14 = 157;
    int var15 = 140;
    int five = 5;
    int var16 = 141;
    switch (choice){
        case 1:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CDF4, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE09, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CDC9, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004A57F4, &num, 4, &dwNumberOfBytesRead);
            break;
        case 2:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042E5B1, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CDD3, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004A5800, &num, 4, &dwNumberOfBytesRead);
            break;
        case 3:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE27, &var1, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE28, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CEE7, &eax, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CEE8, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CEDD, &var10, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE4C, &eax, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE4D, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE42, &var10, 2, &dwNumberOfBytesRead);

            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE99, &var11, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE9A, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE9E, &var2, 1, &dwNumberOfBytesRead);

            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE2C, &var2, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004A57E4, &num, 4, &dwNumberOfBytesRead);
            break;
        case 4:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CE61, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CEFD, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CF01, &nop2, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CECC, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004a5808, &num, 4, &dwNumberOfBytesRead);
            break;
        case 5:
            WriteProcessMemory(hSnapshot, (LPVOID)0x00443D39, &var2, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004A57F4, &num, 4, &dwNumberOfBytesRead);
            break;
        case 6:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DB85, &zero, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00442927, &num, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00443D45, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00442918, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004A5800, &num, 4, &dwNumberOfBytesRead);
            break;
        case 7:
            WriteProcessMemory(hSnapshot, (LPVOID)0x004302B3, &var2, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253CE, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253D2, &nop2, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00442749, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0044274D, &nop2, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004A57E4, &num, 4, &dwNumberOfBytesRead);
            break;
        case 8:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0043DE7F, &var2, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DCAE, &num, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0043DE7F, &var2, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253C1, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253C5, &nop2, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DCCC, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DCD0, &var2, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004a5808, &num, 4, &dwNumberOfBytesRead);
            break;
        case 9:
            WriteProcessMemory(hSnapshot, (LPVOID)0x00443D39, &var3, 1, &dwNumberOfBytesRead);
            break;
        case 10:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DB85, &one, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00442927, &three, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00443D45, &three, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00442918, &three, 4, &dwNumberOfBytesRead);
            break;
        case 11:
            WriteProcessMemory(hSnapshot, (LPVOID)0x004302B3, &var4, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253CE, &var7, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253D2, &var8, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x00442749, &var7, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0044274D, &var8, 2, &dwNumberOfBytesRead);
            break;
        case 12:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0043DE7F, &var5, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253C1, &var6, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004253C5, &var8, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DCCC, &var9, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DCD0, &zero, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0040DCAE, &zero, 4, &dwNumberOfBytesRead);
            break;
            //修改最大得点
        case 13:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CD90, &eax, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CD91, &max, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CD95, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CD99, &nop2, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0042CD9B, &var2, 1, &dwNumberOfBytesRead);
            break;
        case 14:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0044279B, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0044279F, &nop2, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004427A8, &nop1, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004427AC, &nop2, 2, &dwNumberOfBytesRead);
            break;
        case 15:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0044279B, &var12, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0044279F, &zero, 2, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004427A8, &var13, 4, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x004427AC, &zero, 2, &dwNumberOfBytesRead);
            break;
        case 16:
            WriteProcessMemory(hSnapshot, (LPVOID)0x00443FE1, &one, 4, &dwNumberOfBytesRead);
            break;
        case 17:
            WriteProcessMemory(hSnapshot, (LPVOID)0x00443FE1, &four, 4, &dwNumberOfBytesRead);
            break;
        case 18:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0041D4EF, &five, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0041D4F0, &var16, 1, &dwNumberOfBytesRead);
            break;
        case 19:
            WriteProcessMemory(hSnapshot, (LPVOID)0x0041D4EF, &var14, 1, &dwNumberOfBytesRead);
            WriteProcessMemory(hSnapshot, (LPVOID)0x0041D4F0, &var15, 1, &dwNumberOfBytesRead);
    }
}

void BugZhangSetter::SetPlayer(){
    if (checkprog()){
        int data = playeredit->text().toInt();
        if (data >= 0 && data <= 255){
            SetData(1, data);
        }
    }
}
void BugZhangSetter::SetBomb(){
    if (checkprog()){
        int data = bombedit->text().toInt();
        if (data >= 0 && data <= 255){
            SetData(2, data);
        }
    }
}
void BugZhangSetter::SetPower(){
    if (checkprog()){
        int data = poweredit->text().toInt();
        if (data >= 0 && data <= 2147483647){
            SetData(3, data);
        }
    }
}
void BugZhangSetter::SetSubpower(){
    if (checkprog()){
        int data = subpoweredit->text().toInt();
        if (data >= 0 && data <= 2147483647){
            SetData(4, data);
        }
    }
}
/*void BugZhangSetter::SetMax(){
  if (checkprog()){
  int data = maxedit->text().toInt();
  if (data >= 0 && data <= 2147483647){
  SetData(13, data);
  }
  }
  }*/

//检查进程
int BugZhangSetter::checkprog(){
    PROCESSENTRY32 tmppe;
    DWORD id = 0;
    LPCTSTR name = L"th16.exe";
    HANDLE tmphSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    tmppe.dwSize = sizeof(PROCESSENTRY32);
    if (!Process32First(tmphSnapshot, &tmppe))
        return 0;
    do
    {
        tmppe.dwSize = sizeof(PROCESSENTRY32);
        if (Process32Next(tmphSnapshot, &tmppe) == FALSE)
            return 0;
        if (lstrcmp(tmppe.szExeFile, name) == 0){
            pe = tmppe;
            hSnapshot = tmphSnapshot;
            return 1;
        }
    } while (1);
}

//检查单选框
void BugZhangSetter::checkbox(){
    if (checkprog()){
        this->setWindowTitle("运行中");
        if (playerbox->isChecked()){
            QString player = playeredit->text();
            if (player.length() != 0){
                SetData(5, player.toInt());
            }
        }
        else{
            SetData(9, 0);
        }
        if(TLbox->isChecked()){
              SetData(18, 0);
        }
        else{
              SetData(19, 0);
        }
        if (ABbox->isChecked()){
            SetData(14, 0);
        }
        else{
            SetData(15, 0);
        }
        if (NDbox->isChecked()){
            SetData(16, 0);
        }
        else{
            SetData(17, 0);
        }
        if (bombbox->isChecked()){
            QString bomb = bombedit->text();
            if (bomb.length() != 0){
                SetData(6, bomb.toInt());
            }
        }
        else{
            SetData(10, 0);
        }
        if (powerbox->isChecked()){
            QString power = poweredit->text();
            if (power.length() != 0){
                SetData(7, power.toInt());
            }
        }
        else{
            SetData(11, 0);
        }
        if (subpowerbox->isChecked()){
            QString subpower = subpoweredit->text();
            if (subpower.length() != 0){
                SetData(8, subpower.toInt());
            }
        }
        else{
            SetData(12, 0);
        }
    }
    else{
        this->setWindowTitle("无游戏");
    }
}

BugZhangSetter::BugZhangSetter(QWidget *parent)
    : QWidget(parent)
{
    BZS = this;

    //窗口初始化
    int width = GetSystemMetrics(SM_CXFULLSCREEN);
    int height = GetSystemMetrics(SM_CYFULLSCREEN);

    this->setWindowTitle("无游戏");
    this->setWindowFlags(Qt::WindowCloseButtonHint);
    this->setFixedSize(205, 140);
    this->move((width - 205) / 2, (height - 140) / 2);

    //标签初始化
    playerlabel = new QLabel("Player：", this);
    playerlabel->setGeometry(QRect(10, 10, 40, 25));
    bomblabel = new QLabel("Bomb：", this);
    bomblabel->setGeometry(QRect(10, 35, 40, 25));
    powerlabel = new QLabel("Power：", this);
    powerlabel->setGeometry(QRect(10, 60, 40, 25));
    subpowerlabel = new QLabel("SubP：", this);
    subpowerlabel->setGeometry(QRect(10, 85, 40, 25));
    //maxlabel = new QLabel("MaxPo：", this);
    //maxlabel->setGeometry(QRect(10, 110, 40, 25));

    //文本框初始化
    playeredit = new QLineEdit(this);
    playeredit->setGeometry(QRect(60, 13, 35, 19));
    playeredit->setValidator(new QIntValidator(0, 9, this));
    bombedit = new QLineEdit(this);
    bombedit->setGeometry(QRect(60, 38, 35, 19));
    bombedit->setValidator(new QIntValidator(0, 9, this));
    poweredit = new QLineEdit(this);
    poweredit->setGeometry(QRect(60, 63, 35, 19));
    poweredit->setValidator(new QIntValidator(0, 400, this));
    subpoweredit = new QLineEdit(this);
    subpoweredit->setGeometry(QRect(60, 88, 35, 19));
    subpoweredit->setValidator(new QIntValidator(0, 1140, this));
    //maxedit = new QLineEdit(this);
    //maxedit->setGeometry(QRect(60, 113, 35, 19));
    //maxedit->setValidator(new QIntValidator(10000, 500000, this));

    //按钮初始化
    playerbutton = new QPushButton("修改", this);
    playerbutton->setGeometry(QRect(105, 12, 35, 21));
    bombbutton = new QPushButton("修改", this);
    bombbutton->setGeometry(QRect(105, 37, 35, 21));
    powerbutton = new QPushButton("修改", this);
    powerbutton->setGeometry(QRect(105, 62, 35, 21));
    subpowerbutton = new QPushButton("修改", this);
    subpowerbutton->setGeometry(QRect(105, 87, 35, 21));
    //maxbutton = new QPushButton("修改", this);
    //maxbutton->setGeometry(QRect(105, 112, 35, 21));

    //单选框初始化
    playerbox = new QCheckBox("锁定", this);
    playerbox->setGeometry(QRect(150, 14, 50, 17));
    bombbox = new QCheckBox("锁定", this);
    bombbox->setGeometry(QRect(150, 39, 50, 17));
    powerbox = new QCheckBox("锁定", this);
    powerbox->setGeometry(QRect(150, 64, 50, 17));
    subpowerbox = new QCheckBox("锁定", this);
    subpowerbox->setGeometry(QRect(150, 89, 50, 17));
    ABbox = new QCheckBox("自动雷", this);
    ABbox->setGeometry(QRect(85, 114, 70, 17));
    NDbox = new QCheckBox("无敌", this);
    NDbox->setGeometry(QRect(150, 114, 50, 17));
    TLbox = new QCheckBox("锁时间", this);
    TLbox->setGeometry(QRect(20, 114, 50, 17));

    //设置信号槽
    connect(playerbutton, SIGNAL(clicked()), this, SLOT(SetPlayer()));
    connect(bombbutton, SIGNAL(clicked()), this, SLOT(SetBomb()));
    connect(powerbutton, SIGNAL(clicked()), this, SLOT(SetPower()));
    connect(subpowerbutton, SIGNAL(clicked()), this, SLOT(SetSubpower()));
    //connect(maxbutton, SIGNAL(clicked()), this, SLOT(SetMax()));

    //计数器初始化
    timer = new QTimer(this);
    timer->start(100);
    connect(timer, SIGNAL(timeout()), this, SLOT(checkbox()));
}
