/**
 * Copyright (c) 2016 Mick van Duijn, Koen Visscher and Paul Visscher
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include <boost/mpl/if.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/aux_/test.hpp>

#include "gtest/gtest.h"

#include <stdint.h>

TEST( Test, Example )
{
    typedef if_<true_, char, long>::type t1;
    typedef if_c<true, char, long>::type t2;
    typedef if_<false_, char, long>::type t3;
    typedef if_c<false, char, long>::type t4;

    EXPECT_TRUE( ( is_same<t1, char> ) );
    EXPECT_TRUE( ( is_same<t2, char> ) );
    EXPECT_TRUE( ( is_same<t3, long> ) );
    EXPECT_TRUE( ( is_same<t4, long> ) );
}

int main( int argc, char **argv )
{
    testing::InitGoogleTest( &argc, argv );

    int32_t result = RUN_ALL_TESTS();

    return result;
}