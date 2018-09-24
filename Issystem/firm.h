#ifndef FIRM_H
#define FIRM_H

#include <QObject>
#include <string>
#include <arraylist>
#include <user.h>


class firm
{
public:
    firm();
    boolean Firststartup();
    string name;
    string org_number;
    int sentralphone;
    arraylist<user> userlist;


};

#endif // FIRM_H
