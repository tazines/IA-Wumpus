//
// Created by Ines Tazi on 2023-01-28.
//

#ifndef AGENT_CASE_H
#define AGENT_CASE_H


class Case {
    public:
        Case(int rec);
        friend bool operator< (const Case & a, const Case & b);
        friend bool operator> (const Case & a, const Case & b);
    private:
        int recompense;
        bool visite;
};


#endif //AGENT_CASE_H
