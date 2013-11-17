#include "wx_pch.h"
#include "level.h"
#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(level)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(level)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)
    int x=12;//resmin x koordinatı
    int y=19;//resmin y koordinatı
    int so=0;//karakter oynatma için
    int sa=0;//karakter oynatma için
    int us=0;//karakter oynatma için
    int al=0;//karakter oynatma için
#include <wx/event.h>
//(*IdInit(level)
const long level::ID_STATICBITMAP1 = wxNewId();
const long level::ID_STATICBITMAP2 = wxNewId();
const long level::ID_STATICBITMAP3 = wxNewId();
const long level::ID_PANEL1 = wxNewId();
//*)

const long level::ID_TIMER1 = wxNewId();
BEGIN_EVENT_TABLE(level,wxFrame)
	//(*EventTable(level)
	//*)
END_EVENT_TABLE()

level::level(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
x=12;y=19;
	Create(parent, id, _("Labirent Yeni Oyun"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	  {
    	SetIcon(wxIcon(wxT("images/simge.ico")));
        Centre();
    }
    SetClientSize(wxSize(450,500));
    SetMinSize(wxSize(466,535));
    SetMaxSize(wxSize(466,535));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(450,500), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("images\\Maze001b.jpg")).Rescale(wxSize(450,500).GetWidth(),wxSize(450,500).GetHeight())), wxPoint(0,0), wxSize(450,500), 0, _T("ID_STATICBITMAP1"));
	StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\on1.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
    StaticBitmap3 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP3, wxBitmap(wxImage(_T("images\\kapi.jpg"))), wxPoint(415,460), wxSize(24,24), 0, _T("ID_STATICBITMAP3"));
    timer = new wxTimer(this, 1);
    timer->SetOwner(this, ID_TIMER1);
    timer->Start(60000,wxTIMER_ONE_SHOT);
    Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(level::OnKeyDown));
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&level::OnTimer1Trigger);
}

level::~level()
{
 timer->Stop();

	//(*Destroy(level)
	//*)
}
void level::OnTimer1Trigger(wxTimerEvent& event)
{

     wxString msg = _("1 Dakika İçinde Oyunu Tamamlayamadınız.\n Lütfen Tekrar Deneyiniz.");
    wxMessageBox(msg, _("1 Dakika İçinde Oyunu Tamamlayamadınız."));
     if(timer->IsRunning()==false){x=12;y=19;Close();}

}




    void level::OnKeyDown(wxKeyEvent& event)
{
    float deger=31;
 int keycode = event.GetKeyCode();
  if (keycode == 'w' || keycode == 'W'|| keycode == WXK_UP) {
	   if(x<15&&y<28){
         }
         else if(x>39&&x<133&&y>204&&y<235){}
         else if(x>69&&x<194&&y>79&&y<111){}
          else if(x>100&&x<133&&y>111&&y<141){}
          else if(x>69&&x<100&&y>173&&y<204){}
         else if(x>69&&x<100&&y>141&&y<173){}
         else if(x>39&&x<443&&y>17&&y<48){}
else if(x>287&&x<411&&y>48&&y<79){}
else if(x>318&&x<443&&y>79&&y<111){}
else if(x>287&&x<411&&y>111&&y<141){}
else if(x>69&&x<287&&y>48&&y<79){}
else if(x>225&&x<318&&y>297&&y<327){}
else if(x>287&&x<349&&y>203&&y<235){}
else if(x>256&&x<287&&y>265&&y<297){}
else if(x>256&&x<287&&y>203&&y<235){}
else if(x>225&&x<256&&y>79&&y<111){}
else if(x>194&&x<380&&y>421&&y<451){}
else if(x>194&&x<349&&y>327&&y<359){}
else if(x>194&&x<225&&y>359&&y<389){}
else if(x>287&&x<380&&y>173&&y<203){}
else if(x>256&&x<443&&y>141&&y<173){}
else if(x>380&&x<411&&y>173&&y<203){}
else if(x>287&&x<411&&y>389&&y<421){}
else if(x>256&&x<443&&y>359&&y<389){}
else if(x>71&&x<380&&y>451&&y<483){}
else if(x>39&&x<101&&y>265&&y<297){}
else if(x>101&&x<133&&y>421&&y<451){}
else if(x>8&&x<163&&y>235&&y<265){}

         else{y-=deger;}
     us++;
     ilerle(x,y,"ust");
    }
    if (keycode == 's' || keycode == 'S'|| keycode == WXK_DOWN) {
         if(x>5&&x<39&&y>204&&y<235){

         }
         else if(x>5&&x<163&&y>204&&y<235){}
          else if(x>100&&x<133&&y>79&&y<111){}
          else if(x>69&&x<100&&y>111&&y<141){}
          else if(x>39&&x<133&&y>173&&y<204){}
         else if(x>69&&x<100&&y>141&&y<173){}
         else if(x>69&&x<411&&y>17&&y<48){}
 else if(x>318&&x<443&&y>48&&y<79){}
 else if(x>287&&x<411&&y>79&&y<111){}
 else if(x>256&&x<443&&y>111&&y<141){}
 else if(x>225&&x<256&&y>48&&y<79){}
 else if(x>69&&x<194&&y>48&&y<79){}
 else if(x>194&&x<349&&y>297&&y<327){}
 else if(x>225&&x<318&&y>265&&y<297){}
 else if(x>256&&x<287&&y>235&&y<265){}
 else if(x>163&&x<380&&y>421&&y<451){}
 else if(x>194&&x<225&&y>327&&y<359){}
 else if(x>194&&x<256&&y>389&&y<421){}
 else if(x>256&&x<380&&y>327&&y<359){}
 else if(x>256&&x<349&&y>173&&y<203){}
 else if(x>287&&x<411&&y>141&&y<173){}
 else if(x>380&&x<443&&y>327&&y<359){}
 else if(x>256&&x<380&&y>389&&y<421){}
 else if(x>287&&x<411&&y>359&&y<389){}
 else if(x>39&&x<411&&y>451&&y<483){}
 else if(x>71&&x<163&&y>421&&y<451){}
else if(x>101&&x<133&&y>389&&y<421){}
else if(x>39&&x<101&&y>235&&y<265){}
else if(x>8&&x<39&&y>451&&y<483){}
         else{y+=deger;}
     al++;
     ilerle(x,y,"alt");
    }
    if (keycode == 'a' || keycode == 'A'||keycode==WXK_LEFT) {
        if(x<15&&x>5&&y<210){
         }
         else if(x>133&&x<163&&y>111&&y<204){}
          else if(x>69&&x<100&&y>79&&y<141){}
            else if(x>100&&x<133&&y>141&&y<173){}
            else if(x>39&&x<69&&y>17&&y<204){}
else if(x>287&&x<318&&y>48&&y<111){}
else if(x>256&&x<287&&y>79&&y<141){}
else if(x>69&&x<100&&y>48&&y<79){}
else if(x>194&&x<225&&y>79&&y<327){}
else if(x>318&&x<349&&y>235&&y<297){}
else if(x>287&&x<318&&y>203&&y<265){}
else if(x>225&&x<256&&y>79&&y<297){}
else if(x>256&&x<287&&y>235&&y<265){}
else if(x>163&&x<194&&y>111&&y<451){}
else if(x>225&&x<256&&y>359&&y<389){}
else if(x>194&&x<225&&y>359&&y<421){}
else if(x>349&&x<380&&y>203&&y<327){}
else if(x>256&&x<287&&y>141&&y<203){}
else if(x>411&&x<443&&y>173&&y<327){}
else if(x>380&&x<411&&y>173&&y<359){}
else if(x>256&&x<287&&y>359&&y<421){}
else if(x>411&&x<443&&y>389&&y<483){}
else if(x>39&&x<71&&y>265&&y<483){}
else if(x>71&&x<101&&y>297&&y<451){}
else if(x>133&&x<163&&y>265&&y<421){}
else if(x>101&&x<133&&y>265&&y<421){}
else if(x>8&&x<39&&y>235&&y<483){}


         else{
	   x-=deger;}
     so++;
     ilerle(x,y,"sol");
    }
    if (keycode == 'd' || keycode == 'D'|| keycode == WXK_RIGHT) {
        if(x>5&&x<39&&y<190){
         }
         else if(x>133&&x<163&&y>102&&y<235){}
         else if(x>100&&x<133&&y>111&&y<204){}
         else if(x>39&&x<69&&y>48&&y<141){}
         else if(x>69&&x<100&&y>141&&y<173){}
 else if(x>411&&x<443&&y>17&&y<79){}
else if(x>411&&x<443&&y>79&&y<141){}
else if(x>256&&x<287&&y>48&&y<111){}
else if(x>194&&x<225&&y>79&&y<297){}
else if(x>318&&x<349&&y>203&&y<327){}
else if(x>287&&x<318&&y>235&&y<297){}
else if(x>225&&x<256&&y>235&&y<265){}
else if(x>256&&x<287&&y>203&&y<265){}
else if(x>225&&x<256&&y>79&&y<204){}
else if(x>163&&x<194&&y>79&&y<327){}
else if(x>380&&x<411&&y>389&&y<483){}
else if(x>163&&x<194&&y>359&&y<421){}
else if(x>225&&x<256&&y>359&&y<421){}
else if(x>194&&x<225&&y>359&&y<389){}
else if(x>349&&x<380&&y>173&&y<359){}
else if(x>411&&x<443&&y>141&&y<359){}
else if(x>380&&x<411&&y>173&&y<327){}
else if(x>411&&x<443&&y>359&&y<483){}
else if(x>39&&x<71&&y>297&&y<451){}
else if(x>71&&x<101&&y>265&&y<421){}
else if(x>133&&x<163&&y>235&&y<451){}
else if(x>101&&x<133&&y>265&&y<421){}
else if(x>8&&x<39&&y>265&&y<483){}
         else{
	   x+=deger;}
	   sa++;
     ilerle(x,y,"sag");

    }




}
 void level::ilerle(float x,float y,string Karakter){
     delete StaticBitmap2;
     if(x>411&&x<443&&y>451){
         wxString msg = _("Tebrikler...\n 1 Dakika İçinde Oyunu Bitirebildiniz.");
    wxMessageBox(msg, _("Tebrikler"));
   x=12;
   y=19;
    so=0;
    sa=0;
    us=0;
    al=0;
    timer->Stop();
    Close();
        }

        else{
       if(Karakter=="sag"){
           if(sa%4==0)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sag1.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
        if(sa%4==1)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sag2.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));

           if(sa%4==2)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sag3.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));

           if(sa%4==3)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sag4.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));



       }
else if(Karakter=="alt"){
    if(al%4==0)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\on1.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
   if(al%4==1)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\on2.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
  if(al%4==2)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\on3.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
 if(al%4==3)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\on4.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));

}else if(Karakter=="ust")
{
    if(us%4==0)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\arka1.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
  if(us%4==1)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\arka2.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
if(us%4==2)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\arka3.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
if(us%4==3)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\arka4.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
}

else if(Karakter=="sol"){
if(so%4==0)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sol1.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
if(so%4==1)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sol2.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
if(so%4==2)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sol3.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
if(so%4==3)
StaticBitmap2 = new wxStaticBitmap(StaticBitmap1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("images\\sol4.png"))), wxPoint(x,y), wxSize(24,24), 0, _T("ID_STATICBITMAP2"));
}
     }
 }
