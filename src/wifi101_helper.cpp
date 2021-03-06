/*
    Copyright (c) 2018 Patrick Moffitt

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
 */

#include "wifi101_helper.hpp"

String ipv4_int_to_str(const uint32_t ip) {
    std::stringstream str_buf;
    unsigned char bytes[4];
    bytes[0] = ip & 0xFF;
    str_buf << (int) bytes[0] << '.';
    bytes[1] = (ip >> 8) & 0xFF;
    str_buf << (int) bytes[1] << ".";
    bytes[2] = (ip >> 16) & 0xFF;
    str_buf << (int) bytes[2] << ".";
    bytes[3] = (ip >> 24) & 0xFF;
    str_buf << (int) bytes[3] << std::ends;
    return String(str_buf.str().c_str());
}