/***************************************************************
 * Name:      new_labirentMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    labirent oyunu nef ()
 * Created:   2012-03-22
 * Copyright: labirent oyunu nef ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "new_labirentMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(new_labirentFrame)
   #include <wx/icon.h>
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

#include <wx/sound.h>
#include "level.h"
//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(new_labirentFrame)
const long new_labirentFrame::ID_STATICBITMAP1 = wxNewId();
const long new_labirentFrame::ID_BITMAPBUTTON1 = wxNewId();
const long new_labirentFrame::ID_BITMAPBUTTON2 = wxNewId();
const long new_labirentFrame::ID_BITMAPBUTTON3 = wxNewId();
const long new_labirentFrame::ID_BITMAPBUTTON4 = wxNewId();
const long new_labirentFrame::ID_PANEL1 = wxNewId();
const long new_labirentFrame::idMenuQuit = wxNewId();
const long new_labirentFrame::idMenuAbout = wxNewId();
const long new_labirentFrame::ID_STATUSBAR1 = wxNewId();
//*)
const long new_labirentFrame::idMenuOyunuYazanlar = wxNewId();
BEGIN_EVENT_TABLE(new_labirentFrame,wxFrame)
    //(*EventTable(new_labirentFrame)
    //*)
END_EVENT_TABLE()

new_labirentFrame::new_labirentFrame(wxWindow* parent,wxWindowID id)
{
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuItem* MenuItem3;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, _("Labirent 2013"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    {
    	SetIcon(wxIcon(wxT("images/simge.ico")));
        Centre();
    }
    SetClientSize(wxSize(550,580));
    SetMinSize(wxSize(566,615));
    SetMaxSize(wxSize(566,615));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(550,580), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("images\\giris.png"))), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    BitmapButton1 = new wxBitmapButton(StaticBitmap1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("images\\yenioyun.png"))), wxPoint(328,280), wxSize(176,24), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    BitmapButton1->SetBitmapSelected(wxBitmap(wxImage(_T("images\\yenioyun2.png"))));
    BitmapButton1->SetDefault();
    BitmapButton2 = new wxBitmapButton(StaticBitmap1, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("images\\oyunhakkinda.png"))), wxPoint(328,304), wxSize(176,24), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    BitmapButton2->SetBitmapSelected(wxBitmap(wxImage(_T("images\\oyunhakkinda2.png"))));
    BitmapButton2->SetDefault();
    BitmapButton3 = new wxBitmapButton(StaticBitmap1, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("images\\oyunuyazanlar.png"))), wxPoint(328,328), wxSize(176,27), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    BitmapButton3->SetBitmapSelected(wxBitmap(wxImage(_T("images\\oyunuyazanlar2.png"))));
    BitmapButton3->SetDefault();
    BitmapButton4 = new wxBitmapButton(StaticBitmap1, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("images\\cikis.png"))), wxPoint(328,352), wxSize(176,27), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    BitmapButton4->SetBitmapSelected(wxBitmap(wxImage(_T("images\\cikis2.png"))));
    BitmapButton4->SetDefault();
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Kapat\tAlt-F4"), _("Oyunu Kapat"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&Dosya"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("Yardım\tF1"), _("Oyun Yardımı"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuItem3 = new wxMenuItem(Menu2, idMenuOyunuYazanlar, _("Oyunu Yazanlar\tF3"), _("Oyunu Yazanlar"), wxITEM_NORMAL);
    Menu2->Append(MenuItem3);
    MenuBar1->Append(Menu2, _("Oyun Hakkında"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    wxSound test(_T("muzik/a.wav"));//müzik çalıyor
    test.Play(wxSOUND_ASYNC|wxSOUND_LOOP);//müzik çalıyor
    Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&new_labirentFrame::OnBitmapButton4Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&new_labirentFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&new_labirentFrame::OnAbout);
    Connect(idMenuOyunuYazanlar,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&new_labirentFrame::OnYazarlar);
    Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&new_labirentFrame::OnYazarlar);
    Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&new_labirentFrame::OnAbout);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&new_labirentFrame::OnYeniOyun);

}

new_labirentFrame::~new_labirentFrame()
{
    //(*Destroy(new_labirentFrame)
    //*)
}


void new_labirentFrame::OnBitmapButton4Click(wxCommandEvent& event)
{
    Close();
}
void new_labirentFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}


void new_labirentFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = _("1 Dakika İçinde Karakterimizi Meyve Tabağına \nKlavyeden Yön Tuşları veya W-A-S-D Tuşlarını Kullanarak Götürmelisiniz.");
    wxMessageBox(msg, _("Labirent 2013 Ekibi Sunar"));
}
void new_labirentFrame::OnYazarlar(wxCommandEvent& event)
{
    wxString msg = _("Seyfettin KAHVECİ \t ©2012");
    wxMessageBox(msg, _("Labirent 2013 Ekibimiz"));
}
void new_labirentFrame::OnYeniOyun(wxCommandEvent& event)
{

level* dlg = new level(this);//ikinci frame çağırılıyor
dlg->SetIcon(wxICON(aaaa));
    dlg->Show();//ikinci frame çağırılıyor sonu

}
