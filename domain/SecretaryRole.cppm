export module SecretaryRole;
import std;
import Role;
import TaskInfo;
using std::sting;
export class SecretaryRole: public Role{
public:
    SecretaryRole(string id,string name,string gender, string department);
    virtual string getRoleType()override;

};

SecretaryRole::SecretaryRole(string id,string name,string gender)
:Role(id,name,gender)
{}
string SecretaryRole::getRoleType(){
    return std::format("secretary");
}

