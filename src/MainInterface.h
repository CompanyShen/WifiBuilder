/****
	*@PoloShen
	*Title:      WIFI Builder APP
	*File:       MainInterface.h
	*Build:      1.3
	*Build Time: 2014/03/08 08:00
*****/
#ifndef MAININTERFACE_H_INCLUDED
#define MAININTERFACE_H_INCLUDED

/** Public Library **/
#include <iostream>
#include <cstdlib>
using namespace std;

/** Namespace Main Interface **/
namespace MainInterface
{
    bool    ExitFlag = 0;
    int     OptionCh = 0;
    void PrintMainInterface()
    {
        system("title Wifi Builder v1.3 -By Shen");
        cout << "                /***********************\\" << endl;
        cout << "                *      WIFI Builder     *" << endl;
        cout << "                *           By Shen     *" << endl;
        cout << "                \\***********************/" << endl;
        cout << endl;
        cout << "��ӭʹ�ñ�Ӧ�ã�û��ͼ�λ�����ǳ���Ǹ=��=" << endl;
        cout << "���������ѡ�" << endl;
        cout << "    1: �������Wifi�ȵ�" << endl;
        cout << "    2: �鿴WIfi�ȵ���ʷ" << endl;
        cout << "    3: ����" << endl;
        cout << "    4: ����" << endl;
        cout << "    5: �˳�" << endl;
        cout << endl;
    }

    void CallExit()
    {
        ExitFlag = 1;
        cout << "лл����ʹ��" << endl;
        cout << "�ټ���" << endl;
        return;
    }

    void TapInterface()
    {
        cout << "�Ƿ���Ҫ�����������˵���[Y/N]" << endl;
        string op; cin >> op;
        if (op == "Y" || op == "y") { return; }
        else cout << "�Ƿ��˳�������[Y/N]" << endl;
        cin >> op;
        if (op == "Y" || op == "y") { CallExit(); return; }
        return;
    }
}

#endif // MAININTERFACE_H_INCLUDED
