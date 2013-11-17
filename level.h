#ifndef LEVEL_H
#define LEVEL_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(level)
	#include <wx/panel.h>
	#include <wx/statbmp.h>
	#include <wx/frame.h>
	//*)
#endif
//(*Headers(level)
//*)

#include <wx/timer.h>
using namespace std;
class level: public wxFrame
{
	public:

		level(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~level();
		wxStaticBitmap* StaticBitmap3;

		//(*Declarations(level)
		wxStaticBitmap* StaticBitmap2;
		wxStaticBitmap* StaticBitmap1;
		wxPanel* Panel1;
		//*)

	protected:

		static const long ID_STATICBITMAP3;
		//(*Identifiers(level)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICBITMAP2;
		static const long ID_PANEL1;
		//*)
          void OnKeyDown(wxKeyEvent& event);
          void ilerle(float x,float y,string Karakter);

	private:

 void OnTimer1Trigger(wxTimerEvent& event);
        wxTimer *timer;
         static const long ID_TIMER1;

		DECLARE_EVENT_TABLE()
};

#endif
