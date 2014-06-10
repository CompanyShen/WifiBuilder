/****
	*@PoloShen
	*Title:      WIFI Builder APP
	*File:       SubInterface.h
	*Build:      1.3
	*Build Time: 2014/03/08 08:00
*****/
#ifndef SUBINTERFACE_H_INCLUDED
#define SUBINTERFACE_H_INCLUDED

/** Public Library **/
#include <iostream>
#include <cstdlib>
using namespace std;

/** Namespace Sub Interface **/
namespace SubInterface
{
    void CallAbout()
    {
        cout << "                                                          " << endl;
        cout << "+---------------------------++---------------------------+" << endl;
        cout << "|                           ||                           |" << endl;
        cout << "|                           || ������  ��           Shen |" << endl;
        cout << "|                           || �������ڣ�     2014/03/08 |" << endl;
        cout << "|                           || �汾��                1.3 |" << endl;
        cout << "|                           || ��ϵ��ʽ��polossk@126.com |" << endl;
        cout << "|                           || �������ͣ�                |" << endl;
        cout << "|                           ||     blog.csdn.net/polossk |" << endl;
        cout << "|                           ||                           |" << endl;
        cout << "+---------------------------++---------------------------+" << endl;
        cout << "                                                          " << endl;
        MainInterface::TapInterface(); return;
    }

    void CallHelp()
    {
        cout << "                                                          " << endl;
        cout << "    ��ӭʹ�ð�������������Ҫ�ܰ���������������������ĵ���" << endl;
        cout << "�������Լ���WIFI���Ӷ����������豸����������������Щ������" << endl;
        cout << "Ҫ����ǰ�˽⣺                                            " << endl;
        cout << "                                                          " << endl;
        cout << "     *�����򲢲���ʵ��һ�������������Ѿ����������Ĳ�����" << endl;
        cout << "     *��������Ҫ��һ̨���������������Ĳ��ҿ���������������" << endl;
        cout << "      �������С�                                          " << endl;
        cout << "     *����ע�⣬��Ȼ�ܹ�����WIFI������ʵ������Ȼ������ԭ��" << endl;
        cout << "      �������ӵ������������ԭ�����������ǰ��������Ʒѵģ�" << endl;
        cout << "      �����������ʹ�á�                                  " << endl;
        cout << "                                                          " << endl;
        cout << "    ��������Ҫ��ͨ�������򵥵Ľű���ʵ�ֹ���WIFI��WIFI�Ŀ�" << endl;
        cout << "����رյģ����������û��Ĳ����Ѷȡ�                      " << endl;
        cout << "                                                          " << endl;
        cout << "    ������������ʾ���������������������Ӱ������ʹ�á�    " << endl;
        cout << "                                                          " << endl;
        cout << "    ������Ѿ����������Լ���WIFI����ô������ҪWIFIʱֻ��Ҫ" << endl;
        cout << "ִ�� ����WIFI.bat ���ɣ���������ǣ��һ���ѡ���Թ���Ա���" << endl;
        cout << "���У��Ϳ����ˡ��ر�WIFIʱִ�� �ر�WIFI.bat ���ɣ�ͬ���һ�" << endl;
        cout << "ѡ���Թ���Ա������С�                                    " << endl;
        cout << "                                                          " << endl;
        cout << "    �������δ�������Լ���WIFI������������ʾ���й������ɡ�" << endl;
        cout << "                                                          " << endl;
        MainInterface::TapInterface();
        return;
    }

    void CallWrongInput()
    {
        cout << "�Բ����������˴����ָ��ܱ�Ǹ����Ϊ������" << endl;
        cout << "�������Ƿ���Ҫ������[Y/N]" << endl;
        string op; cin >> op;
        if (op == "Y" || op == "y") { CallHelp(); return; }
        else MainInterface::TapInterface();
        return;
    }
}

#endif // SUBINTERFACE_H_INCLUDED
