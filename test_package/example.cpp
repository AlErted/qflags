#include <qflags/qflags.h>
#include <cstdio>
#include <string>

int main(int argc, char* argv[]) {
    auto command_line = qflags::command_line(argc, argv);
    auto parser = qflags::parser();
    
    auto foo = qflags::flag("foo");
    auto bar = qflags::string_option("bar");
    
    parser.add_argument(&foo);
    parser.add_argument(&bar);
    
    std::string errors;
    if (parser.parse(command_line, &errors)) {
        fprintf(stdout, "'foo' is '%s'\n", foo.value_boolean() ? "true" : "false");
        fprintf(stdout, "'bar' is '%s'\n", bar.value_string().c_str());
    } else {
        fprintf(stdout, "%s", errors.c_str());
    }
    return 0;
}
