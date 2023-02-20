#include <iostream>
#include <vector>
#include <string>

void data_out(bool *check)
{


switch (*check) {
case true:
std::cout « "\nEverything matches\n";
break;
case false:
std::cout « "\nEverything don't matches\n";
break;
default:
break;
}


}

bool check_func(std::vector<char> &if_closed, std::vector<char> &if_opened)
{

if(if_closed.size() == if_opened.size())
{
return true;
}
else
{
return false;
}


}

void save_if_close_open (std::string str, std::vector<char> &if_closed, std::vector<char> &if_opened)
{


for(char c: str)
{
if(c == '{')
{
if_opened.push_back(c);
}
if(c == '}')
{
if_closed.push_back(c);
}
}
}

int main()
{


std::string some_str = "{123} {123} {123} {}";
bool check = NULL;

std::vector<char> if_closed;
std::vector<char> if_opened;

save_if_close_open(some_str, if_closed, if_opened);
check = check_func(if_closed, if_opened);
data_out(&check);


}
