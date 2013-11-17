/***************************************************************
 * Name:      new_labirentMain.h
 * Purpose:   Defines Application Frame
 * Author:    labirent oyunu nef ()
 * Created:   2012-03-22
 * Copyright: labirent oyunu nef ()
 * License:
 **************************************************************/

#ifndef NEW_LABIRENTMAIN_H
#define NEW_LABIRENTMAIN_H

//(*Headers(new_labirentFrame)
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
class new_labirentFrame: public wxFrame
{
    public:

        new_labirentFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~new_labirentFrame();

    private:

        //(*Handlers(new_labirentFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnBitmapButton4Click(wxCommandEvent& event);
        //*)
        void OnYazarlar(wxCommandEvent& event);
        void OnYeniOyun(wxCommandEvent& event);

        //(*Identifiers(new_labirentFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        static const long idMenuOyunuYazanlar;
        //(*Declarations(new_labirentFrame)
        wxStaticBitmap* StaticBitmap1;
        wxPanel* Panel1;
        wxBitmapButton* BitmapButton2;
        wxBitmapButton* BitmapButton1;
        wxStatusBar* StatusBar1;
        wxBitmapButton* BitmapButton4;
        wxBitmapButton* BitmapButton3;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // NEW_LABIRENTMAIN_H
