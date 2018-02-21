#ifndef IRACE_H
#define IRACE_H

#include <QString>

///
/// \brief IRace раса персонажа
///
class IRace
{
private:
    QString _name;

public:
    IRace();

    void setName(QString value) { _name = value; }
    QString getName() { return _name; }

    bool operator ==(QString name) { return _name == name; }
    bool operator ==(const IRace &other) { return _name == other._name; }
    bool operator ==(const IRace *other) { return _name == other->_name; }
};

#endif // IRACE_H
