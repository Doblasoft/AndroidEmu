//============================================================================
//
//   SSSS    tt          lll  lll
//  SS  SS   tt           ll   ll
//  SS     tttttt  eeee   ll   ll   aaaa
//   SSSS    tt   ee  ee  ll   ll      aa
//      SS   tt   eeeeee  ll   ll   aaaaa  --  "An Atari 2600 VCS Emulator"
//  SS  SS   tt   ee      ll   ll  aa  aa
//   SSSS     ttt  eeeee llll llll  aaaaa
//
// Copyright (c) 1995-2010 by Bradford W. Mott, Stephen Anthony
// and the Stella Team
//
// See the file "License.txt" for information on usage and redistribution of
// this file, and for a DISCLAIMER OF ALL WARRANTIES.
//
// Windows CE Port by Kostas Nakos
// $Id: OSystemWinCE.hxx 2001 2010-04-10 21:37:23Z stephena $
//============================================================================

#ifndef OSYSTEM_WINCE_HXX
#define OSYSTEM_WINCE_HXX

#include "bspf.hxx"
#include "OSystem.hxx"

class OSystemWinCE : public OSystem
{
  public:
    OSystemWinCE(const string& path);
    virtual ~OSystemWinCE();

  public:
    virtual void mainLoop();
	virtual uInt32 getTicks(void) const;
    virtual void setFramerate(uInt32 framerate);
	virtual void getScreenDimensions(int& width, int& height);
};

#endif
