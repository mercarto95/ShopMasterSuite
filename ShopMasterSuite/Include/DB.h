//
// by Ahmed Rodriguez
// den 19-05-2024
//
// an implementation of a database class that could be used to interact with a database
// using sqlite3 library.
//

#pragma once

#include <sqlite3.h>
#include <string>
#include <vector>
#include <iostream>


class Db
{
public:
    Db(sqlite3* db);
    ~Db();

    bool open(const std::string& db_name);
    void close();

    bool createTable(const std::string& table_name, const std::vector<std::string>& columns);
    bool dropTable(const std::string& table_name);

    bool insert(const std::string& table_name, const std::vector<std::string>& columns, const std::vector<std::string>& values);
    bool update(const std::string& table_name, const std::vector<std::string>& columns, const std::vector<std::string>& values, const std::string& condition);
    bool remove(const std::string& table_name, const std::string& condition);

    std::vector<std::vector<std::string>> select(const std::string& table_name, const std::vector<std::string>& columns, const std::string& condition);

private:
    sqlite3* db;
    char* error_message;
    int rc;
    std::string db_name;
    std::string query;
    std::vector<std::vector<std::string>> result;
    std::vector<std::string> row;

    bool executeQuery(const std::string& query);
    void clearResult();
};

