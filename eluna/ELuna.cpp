/*////////////////////////////////////////////////////////////////////////////////////
ELuna - Extended Luna

ELuna is a simple and light library to bind C/C++ and Lua, which just
depends on Lua library. It provides some simple API to bind cpp class,
method, function or to bind lua function, table. You can include ELuna
and Lua in your project to use.

Mail: radiotail86@gmail.com
 
The MIT License

Copyright (C) 2012 rick

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/////////////////////////////////////////////////////////////////////////////////////


#include "ELuna.h"

namespace ELuna
{
	_CPPGarbageDataMap CPPGarbage::m_CPPDataMap;
} // namespace ELuna

