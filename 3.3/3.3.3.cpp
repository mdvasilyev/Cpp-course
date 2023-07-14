#include <iostream>
#include <string>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
using namespace std;

// struct String {
// 	String(const char *str = ""){
//         int length = strlen(str);
//         this->size = length;
//         char *copy = new char[length + 1];
//         strcpy(copy, str);
//         this->str = copy;
//         delete []copy;
//     }
	// String(size_t n, char c){
    //     char *str = new char[n + 1];
    //     for (int i = 0; i < n; i++)
    //     {
    //         str[i] = c;
    //     }
    //     str[n] = '\0';
    //     this->size = n;
    //     this->str = str;
    // }

	// ~String(){
    //     delete [] str;
    // }

    // /* Реализуйте этот метод. */
	// void append(String &other){
    //     int other_size = strlen(other.str);
    //     int new_len = this->size + other_size + 1;
    //     char *new_str = new char[new_len];
    //     strcpy(new_str, this->str);
    //     strcpy(new_str + this->size - 1, other.str);
    //     // new_str[new_len - 1] = '\0';
    //     this->str = new_str;
    //     delete [] new_str;
    // }

// 	size_t size;
// 	char *str;
// };

int main() {
    // const char *str = "Hello, ";
    // String s1(str);
    // String s2("World!");
    int a = 1;
    cout << a << endl;

    // s1.append(s2);
    // std::cout << s1 << std::endl;

    // const size_t ntest = 10;
    
    // std::string tests[ntest][2] = {
    //                             {"", ""},
    //                             {"", "test"},
    //                             {"test", ""},
    //                             {"test", "test"},
    //                             {"Hello ", " world!"},
    //                             {"Supercalifragilistic", "expialidocious"}
    //                           };
    
    // for (size_t i=0; i<ntest; ++i) {
    //     String t1(tests[i][0].c_str());
    //     String t2(tests[i][1].c_str());
        
    //     t1.append(t2);
        
    //     std::string res(t1.str);
    //     if (res != tests[i][0]+tests[i][1]) {
    //         std::cout << "Test " << i+1 << " failed!" << std::endl;
    //         std::cout << "Must be " << tests[i][0]+tests[i][1] << std::endl;
    //         std::cout << "But result is " << res << std::endl;
    //     } else {
    //         std::cout << "Test " << i+1 << " passed!" << std::endl;
    //     }
        
    // }
    
    // std::string last = "Same pointer test";
    // String t(last.c_str());
    // t.append(t);
    
    // std::string res(t.str);
    
    // if (res != last+last) {
    //     std::cout << "Test " << ntest+1 << " failed!" << std::endl;
    //     std::cout << "Must be " << last+last << std::endl;
    //     std::cout << "But result is " << res << std::endl;
    // } else {
    //     std::cout << "Test " << ntest+1 << " passed!" << std::endl;
    // }
        
    return 0;
}