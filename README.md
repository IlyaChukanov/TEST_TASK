# TEST_TASK

In modern operating systems, everyone is accustomed to sharing: when you can somehow transfer a file/data to another application for processing.
Usually we see a list of applications that can work with a file, and by selecting one of them, it opens and continues working with the data.

It is necessary to create a DBUS-based framework with an API that will allow, at a minimum:
- the application registers which formats can be transferred
- register how to call/start it

The task is formulated quite abstractly, leaving room for creativity. Therefore, not only the quality of the code and the functionality/performance of the project will be assessed, but also the initiative and friendliness of both the user and the developer.

You need to make a demo application in C++, preferably in Qt.
It will be a plus to wrap the framework in rpm/deb.

Restrictions:
  • The project must be built and run on Linux and in Linux-style (so it will not work under Visual Studio on Windows).
  • Must be built and run on a “clean” system (say, on Ubuntu 20.04/22.04, and preferably in a Docker image of Ubuntu (“docker pull ubuntu”); and if on some other system, it must be specified explicitly ),
  • without presets (not counting standard g++, make, cmake). Everything that is required for assembly/work besides this, all dependencies, must be specified explicitly.
  • The project must be located in some git repository.
