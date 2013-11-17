#include "wx_pch.h"
#include "NewScrollingDialog.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(NewScrollingDialog)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(NewScrollingDialog)
//*)

//(*IdInit(NewScrollingDialog)
//*)

BEGIN_EVENT_TABLE(NewScrollingDialog,wxScrollingDialog)
	//(*EventTable(NewScrollingDialog)
	//*)
END_EVENT_TABLE()

NewScrollingDialog::NewScrollingDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(NewScrollingDialog)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

NewScrollingDialog::~NewScrollingDialog()
{
	//(*Destroy(NewScrollingDialog)
	//*)
}

