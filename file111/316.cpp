#include<iostream>
#include<string>
class GPT4{
private:
	std::string question;
public:
/*构造函数*/	
    GPT4():question("please ask a question"){
    }
    GPT4(const char fau[]):question(fau){
    }
	void ask(char quest[]){
		question= std::string(quest); 		
	}
/*函数重载*/
	void ask(const char quest[]){
		question= std::string(quest); 		
	}
	std::string answer(){
		return question;
	}
};
int main(){
	GPT4 gpt("haha");
	//或GPT4 gpt;19对应9行,20行对应7行 
	gpt.ask("hello world");
	std::string ans=gpt.answer();
	std::cout<<ans<<std::endl; 
	return 0;
}

