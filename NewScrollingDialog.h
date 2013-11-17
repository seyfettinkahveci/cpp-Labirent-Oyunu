#ifndef NEWSCROLLINGDIALOG_H
#define NEWSCROLLINGDIALOG_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(NewScrollingDialog)
	#include "scrollingdialog.h"
	//*)
#endif
//(*Headers(NewScrollingDialog)
//*)

class NewScrollingDialog: public wxScrollingDialog
{
	public:

		NewScrollingDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~NewScrollingDialog();

		//(*Declarations(NewScrollingDialog)
		//*)

	protected:

		//(*Identifiers(NewScrollingDialog)
		//*)

	private:

		//(*Handlers(NewScrollingDialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
