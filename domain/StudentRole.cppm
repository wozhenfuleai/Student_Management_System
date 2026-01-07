export module StudentRole;
import std;
import Role;
export class StudentRole: public Role{
public:
    StudentRole(string id,string name,string gender,float currentGPA,vector<string> vec);
    virtual string getRoleType();
    //选课前检查检查时间冲突
    bool canEnroll(const string& newTime,const vector<string>& enrolledTime);
    Student::hasTask(string taskId); //是否选了某门课
    bool enrollInTask(string taskId);     // 选课
    bool dropTask(string taskId);              // 退课


};
private:
    vector<string> enrolledTasksId;  // 已选课程，用于用于时间冲突检查和课程管理
};

StudentRole::StudentRole(string id,string name,string gender,float currentGPA,vector<string> vec)
:Role(id,name,gender),currentGPA(currentGPA),enrolledTasksId(vec)
{}

string Role::getRoleType(){
    return std::format("student");
}

//参数:要选的新课程时间段，已选课程的时间段
//规则：一个学生不能在同一时间段上两门不同的课
bool Student::canEnroll(const string& newTime,const vector<string>& enrolledTime){
    for(auto&& time :enrolledTime){
        if(newTime == enrolledTime){
            return false;
        }
    }
    return true;
}
bool StudentRole::hasTask(string taskId){
    return find(enrolledTaskIds.begin(), enrolledTaskIds.end(), taskId) != enrolledTaskIds.end();
}

bool Student::enrollInTask(string taskId){
//查找是否已选
    if (hasTask(taskId)) return false;
//若未选
    enrolledTasksId.emplace_back(taskId);
    return true;
}

bool dropTask(string taskId){
    auto it = find(enrolledTasksId.begin(), enrolledTasksId.end(), taskId);
    if (it != enrolledTasksId.end()){
        enrolledTasksId.erase(it);
        return true;
    }
    return false;
}
