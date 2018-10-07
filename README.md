# dmmd5

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[dmmd5 GitHub](https://github.com/brinkqiang/dmmd5)

## Build status
| [Linux][lin-link] | [MacOSX][osx-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![osx-badge]       | ![win-badge]        |

[lin-badge]: https://travis-ci.org/brinkqiang/dmmd5.svg?branch=master "Travis build status"
[lin-link]:  https://travis-ci.org/brinkqiang/dmmd5 "Travis build status"
[osx-badge]: https://travis-ci.org/brinkqiang/dmmd5.svg?branch=master "Travis build status"
[osx-link]:  https://travis-ci.org/brinkqiang/dmmd5 "Travis build status"
[win-badge]: https://ci.appveyor.com/api/projects/status/github/brinkqiang/dmmd5?branch=master&svg=true "AppVeyor build status"
[win-link]:  https://ci.appveyor.com/project/brinkqiang/dmmd5 "AppVeyor build status"

## Intro
dmmd5
```
#include "dmmd5.h"
#include <string>
#include <iostream>

int main( int argc, char* argv[] ) {
	
    std::string strData = "1";
    std::string strMD5 = CDMMD5::GetMD5(strData);

    std::cout << strMD5 << std::endl;

    return 0;
}

```

```
$ echo -n 1 | md5sum
c4ca4238a0b923820dcc509a6f75849b  -
$ ./dmmd5
$ ./bin/dmmd5test  
c4ca4238a0b923820dcc509a6f75849b
```
## Contacts
[![Join the chat](https://badges.gitter.im/brinkqiang/dmmd5/Lobby.svg)](https://gitter.im/brinkqiang/dmmd5)

## Thanks
