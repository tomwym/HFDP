#pragma once

class Observer {
public:
    virtual void update(const float&, const float&, const float&) = 0;
};