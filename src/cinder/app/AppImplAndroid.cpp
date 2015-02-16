/*
 Copyright (c) 2012, The Cinder Project, All rights reserved.

 This code is intended for use with the Cinder C++ library: http://libcinder.org

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that
 the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and
	the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and
	the following disclaimer in the documentation and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
 WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
*/

#include "cinder/app/AppImplAndroid.h"

namespace cinder { namespace app {

WindowImplAndroid::WindowImplAndroid()
{
    mPos = ivec2( 0, 0 );
    mNativeWindow = nullptr;
}

WindowImplAndroid::~WindowImplAndroid()
{
}

void WindowImplAndroid::setFullScreen( bool fullScreen, const app::FullScreenOptions &options )
{
}

void WindowImplAndroid::setSize( const ivec2 &size )
{
}

void WindowImplAndroid::setPos( const ivec2 &pos )
{
}

void WindowImplAndroid::close()
{
}

void WindowImplAndroid::setTitle( const std::string &title )
{
}

void WindowImplAndroid::hide()
{
}

void WindowImplAndroid::show()
{
}

void WindowImplAndroid::setBorderless( bool borderless )
{
}

void WindowImplAndroid::setAlwaysOnTop( bool alwaysOnTop )
{
}

} } // namespace cinder::app
