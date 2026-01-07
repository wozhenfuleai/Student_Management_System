/*
export module TeachingTask;
import std;
export class Grade{
public:
    Grade(string gradeId,float score, string studentId,string taskId);
    // 核心业务逻辑方法：
    bool isPass();        // 是否及格
    void updateGrade(float newScore);   // 更新成绩
    string getId();
    string getScore();
private:
    string gradeId;
    float score;
    //关联
    string studentId;
    string taskId;
};

bool Grade::isPass(){   return score >= 60.0f; }
Grade::Grade(string gradeId,float score, string studentId,string taskId)
:gradeId(gradeId),score(score),studentId(studentId),taskId(taskId)
{}

void Grade::updateGrade(float newScore){
    score = newScore;
}
string Grade::getId(){ return gradeId;}
string Grade::getScore(){ return score;}
*/
