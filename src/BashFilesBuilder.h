/****
	*@PoloShen
	*Title:      WIFI Builder APP
	*File:       BashFilesBuilder.h
	*Build:      1.3
	*Build Time: 2014/03/08 08:00
*****/
#ifndef BASHFILESBUILDER_H_INCLUDED
#define BASHFILESBUILDER_H_INCLUDED

/** Public Library **/
#include <iostream>
#include <fstream>
using namespace std;

/** Namespace Files Exporter**/
namespace FilesExporter
{
    void ExportWifiBuilderCmdFile(string SSID, string PSWD)
    {
        ofstream outf1("����WIFI.bat");
        outf1 << "@echo off" << endl;
        outf1 << "title Build Wifi    v" << VERSION << endl;
        outf1 << "Elevate netsh wlan stop hostednetwork" << endl;
        outf1 << "Elevate netsh wlan set hostednetwork mode=allow ssid=" << SSID;
        outf1 << " key=" << PSWD << endl;
        outf1 << "Elevate netsh wlan start hostednetwork" << endl;
        outf1 << "@echo �Ѿ��ɹ�����WIFI�����ֻ����� " << SSID << " ���ɡ�" << endl;
        outf1 << "pause" << endl;
        outf1.close();
        return;
    }

    void ExportWifiSwitcherCmdFile(string SSID)
    {
        ofstream outf2("����WIFI.bat");
        outf2 << "@echo off" << endl;
        outf2 << "title ���� Wifi    v" << VERSION << endl;
        outf2 << "Elevate netsh wlan start hostednetwork" << endl;
        outf2 << "@echo WIFI�Ѿ����������ֻ����� " << SSID << " ���ɡ�\n" << endl;
        outf2 << "pause" << endl;
        outf2.close();

        ofstream outf3("�ر�WIFI.bat");
        outf3 << "@echo off" << endl;
        outf3 << "title �ر� Wifi    v" << VERSION << endl;
        outf3 << "Elevate netsh wlan stop hostednetwork" << endl;
        outf3 << "@echo WIFI�Ѿ��رգ��㽫�޷������� " << SSID << " ��\n" << endl;
        outf3 << "pause" << endl;
        outf3.close();
        return;
    }

    void ExportWifiICSCmdFile(string VirtualWireless, string CurrentWireless)
    {
        ofstream outf4("ICS.bat");
        outf4 << "@echo off" << endl;
        outf4 << "title ���ӹ���    v" << VERSION << endl;
        outf4 << "Elevate cscript /nologo %~dp0\\ics.vbs ";
        outf4 << "\"" << VirtualWireless << "\" ";
        outf4 << "\"" << CurrentWireless << "\" ";
        outf4 << "\"on\"" << endl;
        outf4 << "@echo ����������ɣ�" << endl;
        outf4 << "pause" << endl;
        outf4.close();
    }
}

#endif // BASHFILESBUILDER_H_INCLUDED
