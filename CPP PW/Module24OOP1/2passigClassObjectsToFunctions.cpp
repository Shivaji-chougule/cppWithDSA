#include<iostream>
#include<string>
using namespace std;

class players
{
private:
    string name;
    int health;
    int age;
    int score;
    bool alive;
public:
    void setName(string name){
        this->name = name;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAlive(bool alive){
        this->alive = alive;
    }

    string getName(){
        return name;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getAlive(){
        return alive;
    }
};
    //here in this function we are passing class as data type
    void compare(players one , players two){ 
        cout<<one.getScore()<<" "<<"vs"<<" "<<two.getScore()<<endl;
    }

    players getMaxScorePlayre(players one, players two){
        if(one.getScore()>two.getScore())
        return one;
        else
        return two;
    }

int main(){
    players rock; // compile time , static memory allocation
    rock.setName("rock");
    rock.setHealth(100);
    rock.setAge(35);
    rock.setScore(65);
    rock.setAlive(true);

    players edge;
    edge.setName("edge");
    edge.setHealth(100);
    edge.setAge(45);
    edge.setScore(75);
    edge.setAlive(true);

    compare(rock,edge);
   players winner = getMaxScorePlayre(rock,edge);
   cout<<"winner is "<<winner.getName()<<endl;

    players* john = new players; //run time , dynamic memory allocation

    john->setScore(99);
    cout<<john->getScore()<<endl;
}