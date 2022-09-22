  #include <iostream>
  #include <string>
  

int main(){

    std::string str="to be question";
    std::string str2="the ";
    std::string str3="or not to be";
    std::string::iterator it;

    str.insert(6, str2);                 // to be (the )question
    std::cout << str << std::endl;
    
    str.insert(6, str3, 3, 4);             // to be (not )the question
    std::cout << str << std::endl;

    str.insert(10,"that is cool",8);    // to be not (that is )the question
    std::cout << str << std::endl;

    str.insert(10,"to be ");            // to be not (to be )that is the question
    std::cout << str << std::endl;

    str.insert(15,1,':');               // to be not to be(:) that is the question
    std::cout << str << std::endl;

    it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
    std::cout << str << std::endl;

    str.insert(str.end(),3,'.');       // to be, not to be: that is the question(...)
    std::cout << str << std::endl;

    str.insert(it+2,str3.begin(),str3.begin()+3); // to be, (or )not to be: that is the question...
    std::cout << str << '\n';

}
  