#include "observer.h"

class Subject {
public:
    virtual void register_observer(Observer*) = 0;
};