/****
	*@PoloShen
	*Title:      WIFI Builder APP
	*File:       HistoryInterface.h
	*Build:      1.3
	*Build Time: 2014/03/08 08:00
*****/
#ifndef HISTORYINTERFACE_H_INCLUDED
#define HISTORYINTERFACE_H_INCLUDED

/** Public Library **/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/** Namespace History Interface **/
namespace HistoryInterface
{
    bool    ExitFlag = 0;
    int     OptionCh = 0;
    void PrintInterface()
    {
        cout << "    ���������ѡ�" << endl;
        cout << "        1: �鿴��ǰ��Wifi��������" << endl;
        cout << "        2: �޸�Wifi����" << endl;
        cout << "        3: �޸�Wifi����" << endl;
        cout << "        4: �˳�" << endl;
        return;
    }

    void CallExit(){ ExitFlag = 1; return; }

    void CallShow(){ ExitFlag = Database::ReadDatabaseFiles(); }

    void CallEditSSID()
    {
        cout << "        �������µ�Wifi���ƣ�" << endl;
        string SSID, PSWD;
        ifstream fin(Database::FileName.c_str());
        if (fin.fail())
        {
            cout << "        ����û��ʹ�ù���������ʱû����ʷ���ݡ�" << endl;
            cout << "        ��ֱ�ӷ����������档" << endl;
            CallExit();
            return;
        }
        else
        {
            string s, p;
            fin >> s >> p; fin.close();
            cin >> SSID;
            cout << "        �������¹��������Ժ�" << endl;
            PSWD = Cipher::DeCodeString(p);
            Wifi::BuildWifi(SSID, PSWD);
            Wifi::BuildData(SSID, PSWD);
        }
        cout << "        ������ɣ�����Wifi�����Ѿ�����" << endl;
        return;
    }

    void CallEditPSWD()
    {
        cout << "        �������µ�Wifi���룺" << endl;
        string SSID, PSWD;
        ifstream fin(Database::FileName.c_str());
        if (fin.fail())
        {
            cout << "        ����û��ʹ�ù���������ʱû����ʷ���ݡ�" << endl;
            cout << "        ��ֱ�ӷ����������档" << endl;
            CallExit();
            return;
        }
        else
        {
            string s, p;
            fin >> s >> p; fin.close();
            cin >> PSWD;
            cout << "        �������¹��������Ժ�" << endl;
            SSID = Cipher::DeCodeString(s);
            Wifi::BuildWifi(SSID, PSWD);
            Wifi::BuildData(SSID, PSWD);
        }
        cout << "        ������ɣ�����Wifi�����Ѿ�����" << endl;
        return;
    }

    void CallHistory()
    {
        while (1)
        {
            PrintInterface();
            cin >> OptionCh;
            switch (OptionCh)
            {
                case 1:{ CallShow(); break; }
                case 2:{ CallEditSSID(); break; }
                case 3:{ CallEditPSWD(); break; }
                case 4:{ CallExit(); break; }
                default :{ SubInterface::CallWrongInput(); break; }
            }
            if (ExitFlag) break;
        }
    }
}

#endif // HISTORYINTERFACE_H_INCLUDED
