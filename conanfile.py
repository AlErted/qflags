from conans import ConanFile, CMake

class QflagsConan(ConanFile):
    name = "qflags"
    version = "0.1"
    license = "MIT"
    url = "https://github.com/AlErted/qflags"
    description = "Simple cross-platform C++ command-line parsing library"
    exports_sources = "include/*"
    generators = "cmake"

    def package(self):
        self.copy("*", dst="include", src="include")