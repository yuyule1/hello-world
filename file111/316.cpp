#include<iostream>
#include<string>
class GPT4{
private:
	std::string question;
public:
/*���캯��*/	
    GPT4():question("please ask a question"){
    }
    GPT4(const char fau[]):question(fau){
    }
	void ask(char quest[]){
		question= std::string(quest); 		
	}
/*��������*/
	void ask(const char quest[]){
		question= std::string(quest); 		
	}
	std::string answer(){
		return question;
	}
};
int main(){
	GPT4 gpt("haha");
	//��GPT4 gpt;19��Ӧ9��,20�ж�Ӧ7�� 
	gpt.ask("hello world");
	std::string ans=gpt.answer();
	std::cout<<ans<<std::endl; 
	return 0;
}

