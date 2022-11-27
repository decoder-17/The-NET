#include "string"
using namespace sqlite_orm;
using namespace sqlite_orm;

class Users
{
public:
    struct User
    {
        int id = -1;
        std::string firebaseId;
        std::string courseName;
        std::string email;
        std::string name;
    };

    int insert_user(User u, auto &storage)
    {
        int id = storage.insert(u);
        return id;
    }
};