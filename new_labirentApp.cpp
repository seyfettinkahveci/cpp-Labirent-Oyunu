/***************************************************************
 * Name:      new_labirentApp.cpp
 * Purpose:   Code for Application Class
 * Author:    labirent oyunu nef ()
 * Created:   2012-03-22
 * Copyright: labirent oyunu nef ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "new_labirentApp.h"

//(*AppHeaders
#include "new_labirentMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(new_labirentApp);

bool new_labirentApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	new_labirentFrame* Frame = new new_labirentFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
