#include <sqLite_Cpp/SQLite.h>

SQLite::SQLite(const char filename[]){
    sqlite3_open(filename,&(this->db));
}