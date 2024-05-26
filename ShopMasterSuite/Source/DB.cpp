#include "../Include/DB.h"


Db::Db(sqlite3* db)
{
    this->db = db;
    this->error_message = nullptr;
    this->rc = 0;
    this->db_name = "";
    this->query = "";
}


Db::~Db()
{
    this->close();
}

bool DB::open(const std::string& db_name)
{
    this->db_name = db_name;
    this->rc = sqlite3_open(this->db_name.c_str(), &this->db);

    if (this->rc)
    {
        std::cerr << "Can't open database: " << sqlite3_errmsg(this->db) << std::endl;
        return false;
    }

    return true;
}

void DB::close()
{
    if (this->db)
    {
        sqlite3_close(this->db);
    }
}

bool DB::createTable(const std::string& table_name, const std::vector<std::string>& columns)
{
    this->query = "CREATE TABLE " + table_name + " (";

    for (size_t i = 0; i < columns.size(); i++)
    {
        this->query += columns[i];

        if (i < columns.size() - 1)
        {
            this->query += ", ";
        }
    }

    this->query += ");";

    return this->executeQuery(this->query);
}

bool DB::dropTable(const std::string& table_name)
{
    this->query = "DROP TABLE " + table_name + ";";

    return this->executeQuery(this->query);
}

bool DB::insert(const std::string& table_name, const std::vector<std::string>& columns, const std::vector<std::string>& values)
{
    this->query = "INSERT INTO " + table_name + " (";

    for (size_t i = 0; i < columns.size(); i++)
    {
        this->query += columns[i];

        if (i < columns.size() - 1)
        {
            this->query += ", ";
        }
    }

    this->query += ") VALUES (";

    for (size_t i = 0; i < values.size(); i++)
    {
        this->query += "'" + values[i] + "'";

        if (i < values.size() - 1)
        {
            this->query += ", ";
        }
    }

    this->query += ");";

    return this->executeQuery(this->query);
}

bool DB::update(const std::string& table_name, const std::vector<std::string>& columns, const std::vector<std::string>& values, const std::string& condition)
{
    this->query = "UPDATE " + table_name + " SET ";

    for (size_t i = 0; i < columns.size(); i++)
    {
        this->query += columns[i] + " = '" + values[i] + "'";

        if (i < columns.size() - 1)
        {
            this->query += ", ";
        }
    }

    this->query += " WHERE " + condition + ";";

    return this->executeQuery(this->query);
}

bool DB::remove(const std::string& table_name, const std::string& condition)
{
    this->query = "DELETE FROM " + table_name + " WHERE " + condition + ";";

    return this->executeQuery(this->query);
}

std::vector<std::vector<std::string>> DB::select(const std::string& table_name, const std::vector<std::string>& columns, const std::string& condition)
{
    this->query = "SELECT ";

    for (size_t i = 0; i < columns.size(); i++)
    {
        this->query += columns[i];

        if (i < columns.size() - 1)
        {
            this->query += ", ";
        }
    }

    this->query += " FROM " + table_name;

    if (!condition.empty())
    {
        this->query += " WHERE " + condition;
    }

    this->query += ";";

    this->executeQuery(this->query);

    return this->result;
}

bool DB::executeQuery(const std::string& query)
{
    this->clearResult();

    this->rc = sqlite3_exec(this->db, query.c_str(), [](void* data, int argc, char** argv, char** azColName) -> int
    {
        auto self = static_cast<Db*>(data);

        self->row.clear();

        for (int i = 0; i < argc; i++)
        {
            self->row.push_back(argv[i]);
        }

        self->result.push_back(self->row);

        return 0;
    }, this, &this->error_message);

    if (this->rc != SQLITE_OK)
    {
        std::cerr << "SQL error: " << this->error_message << std::endl;
        sqlite3_free(this->error_message);
        return false;
    }

    return true;
}

void DB::clearResult()
{
    this->result.clear();
    this->row.clear();
}


