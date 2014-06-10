/****
	*@PoloShen
	*Title:      WIFI Builder APP
	*File:       CoreProcess.h
	*Build:      1.3
	*Build Time: 2014/03/08 08:00
*****/
#ifndef COREPROCESS_H_INCLUDED
#define COREPROCESS_H_INCLUDED

/** Public Library **/
#include <iostream>
#include <cstdlib>
using namespace std;

/** Namespace Wifi **/
namespace Wifi
{
    string getSSID()
    {
        string SSID;
        cout << "    �������WIFI������Ӣ�ģ���Сд���ɣ��м䲻Ҫ�пո�  " << endl;
        cin >> SSID;
        return SSID;
    }

    string getPSWD()
    {
        string PSWD;
        cout << "    ��������WIFI�����룬ע�⣬���ȴ���8λ����Ҫ�пո�   " << endl;
        cin >> PSWD;
        return PSWD;
    }

    string getCW()
    {
        string CurrentWireless;
        getchar();
        while (1)
        {
            cout << "    �����뵱ǰ����ʹ�õ������������ƣ�һ��Ϊ�������ӣ����" << endl;
            cout << "�û�һ��Ϊ������ӣ����Իس�������                        " << endl;
            getline(cin, CurrentWireless);
            cout << "���ո�������ǣ�\n" << endl;
            cout << CurrentWireless << endl << endl;
            cout << "�Ƿ���ȷ��[Y/N]" << endl;
            string op; cin >> op;
            if (op == "Y" || op == "y") { break; }
        }
        return CurrentWireless;
    }

	string getVW()
	{
		string VirtualWireless;
		getchar();
		while (1)
		{
			cout << "    ���������������������������ƣ�һ��Ϊ �������� 2 ������" << endl;
			cout << "�����ȷ���룬�Իس�������                                " << endl;
			getline(cin, VirtualWireless);
			cout << "���ո�������ǣ�\n" << endl;
			cout << VirtualWireless << endl << endl;
			cout << "�Ƿ���ȷ��[Y/N]" << endl;
			string op; cin >> op;
			if (op == "Y"|| op == "y") {
				break;
			}
        }
        return VirtualWireless;
    }

    void BuildData(string s, string p)
    {
        Database::Datatype d(s, p);
        Database::ExportDatabaseFiles(d);
    }

    void BuildWifi(string SSID, string PSWD)
    {
        cout << "    ���ڹ����������ļ�...                                 " << endl;
        FilesExporter::ExportWifiBuilderCmdFile(SSID, PSWD);
        FilesExporter::ExportWifiSwitcherCmdFile(SSID);
        BuildData(SSID, PSWD);
        cout << "    ���������������ļ�...                                 " << endl;
        system("����WIFI.bat");
        cout << "    �������                                              " << endl;
        cout << "                                                          " << endl;
    }

    void BuildICS()
    {
        cout << "    ���һ��������ϵ���������ͼ�꣬�������빲�����ģ�����" << endl;
        cout << "�����ҵ��������������ã�����Կ�������ʹ�õ������������ƺ�" << endl;
        cout << "�����ӵ�WIFI�������ơ�                                    " << endl;
        string CurrentWireless = getCW();
        string VirtualWireless = getVW();
        cout << "    ����Ϊ���������繲�����ã����Ժ�...                   " << endl;
        FilesExporter::ExportWifiICSCmdFile(VirtualWireless, CurrentWireless);
        system("ICS.bat");
        cout << "    �������                                              " << endl;
        cout << "                                                          " << endl;
    }

    void CallBuildWifi()
    {
        cout << "    ��ʼ��������WIFI��                                    " << endl;
        string SSID = getSSID();
        string PSWD = getPSWD();
        BuildWifi(SSID, PSWD);
        BuildICS();
        cout << "                                                          " << endl;
        cout << "WIFI�ȫ����ɣ�                                        " << endl;
        cout << "    * ʹ��WIFI��ѡ�� ����WIFI.bat �Ҽ��Թ���Ա������У�  " << endl;
        cout << "    * �ر�WIFI��ѡ�� �ر�WIFI.bat �Ҽ��Թ���Ա������У�  " << endl;
        cout << "��������������" << endl; system("pause"); return;
    }
}

#endif // COREPROCESS_H_INCLUDED
