#pragma once

#include "sqLite_C/sqlite3.h"
#include "Query.h"

class SQLite
{
private:
    sqlite3* db;
    sqlite3_stmt* stmt;

public:
    SQLite(const char filename[]);
    
    ~SQLite();

    //Operators
    //const char* operator[](const char[] fieldName); 
};

