#include<iostream>
#include<list>
#include<iterator>

using namespace std;

enum flag { m_RChannel, m_GChannel, m_BChannel, m_General, m_Adaptive};

int main()
{
    flag filterFlag;

    list<flag>filterList;
    filterList.push_front(m_GChannel);
    filterList.push_front(m_General);
    filterList.push_back(m_RChannel);
    list<flag> ::iterator it;

    for(it=filterList.begin();it!=filterList.end();++it)
    {
        cout<<*it<<'\t';
        switch(*it)
        {
            case 0:
                cout<<"RChannel"<<endl;
                break;
            case 1:
                cout<<"GChannel"<<endl;
                break;
            case 2:
                cout<<"BChannel"<<endl;
                break;
            case 3:
                cout<<"General"<<endl;
                break;
            case 4:
                cout<<"Adaptive"<<endl;
                break;
            default:
                cout<<"Default"<<endl;


        }
    }
}
