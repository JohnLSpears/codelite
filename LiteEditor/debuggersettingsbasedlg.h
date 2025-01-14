//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: DebuggerSettings.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_DEBUGGERSETTINGS_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_DEBUGGERSETTINGS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/treebook.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/listctrl.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/spinctrl.h>
#include <wx/choicebk.h>
#include <wx/splitter.h>
#include <wx/stc/stc.h>
#include <wx/dataview.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <map>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/treectrl.h>
#include "cl_treelistctrl.h"
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class DebuggerSettingsBaseDlg : public wxDialog
{
protected:
    wxTreebook* m_treebook2;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnButtonCancel(wxCommandEvent& event) { event.Skip(); }

public:
    wxTreebook* GetTreebook2() { return m_treebook2; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    DebuggerSettingsBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Debugger Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~DebuggerSettingsBaseDlg();
};


class DbgPageStartupCmdsBase : public wxPanel
{
protected:
    wxTextCtrl* m_textCtrlStartupCommands;

protected:

public:
    wxTextCtrl* GetTextCtrlStartupCommands() { return m_textCtrlStartupCommands; }
    DbgPageStartupCmdsBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~DbgPageStartupCmdsBase();
};


class PreDefinedTypesPageBase : public wxPanel
{
protected:
    wxPanel* m_panel2;
    wxListCtrl* m_listCtrl1;
    wxButton* m_buttonNewType;
    wxButton* m_buttonEdit;
    wxButton* m_buttonDelete;

protected:
    virtual void OnItemActivated(wxListEvent& event) { event.Skip(); }
    virtual void OnItemDeselected(wxListEvent& event) { event.Skip(); }
    virtual void OnItemSelected(wxListEvent& event) { event.Skip(); }
    virtual void OnNewShortcut(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditShortcut(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteShortcut(wxCommandEvent& event) { event.Skip(); }

public:
    wxListCtrl* GetListCtrl1() { return m_listCtrl1; }
    wxButton* GetButtonNewType() { return m_buttonNewType; }
    wxButton* GetButtonEdit() { return m_buttonEdit; }
    wxButton* GetButtonDelete() { return m_buttonDelete; }
    wxPanel* GetPanel2() { return m_panel2; }
    PreDefinedTypesPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PreDefinedTypesPageBase();
};


class NewPreDefinedSetBaseDlg : public wxDialog
{
protected:
    wxStaticText* m_staticText3;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticText4;
    wxChoice* m_choiceCopyFrom;
    wxCheckBox* m_checkBoxMakeActive;
    wxButton* m_button9;
    wxButton* m_button10;

protected:

public:
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxChoice* GetChoiceCopyFrom() { return m_choiceCopyFrom; }
    wxCheckBox* GetCheckBoxMakeActive() { return m_checkBoxMakeActive; }
    wxButton* GetButton9() { return m_button9; }
    wxButton* GetButton10() { return m_button10; }
    NewPreDefinedSetBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Create a new 'PreDefined Types' set..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NewPreDefinedSetBaseDlg();
};


class DbgPageGeneralBase : public wxPanel
{
protected:
    wxPanel* m_panel6;
    wxStaticText* m_staticText1;
    wxTextCtrl* m_textCtrDbgPath;
    wxButton* m_buttonBrowse;
    wxCheckBox* m_checkBoxEnablePendingBreakpoints;
    wxCheckBox* m_checkBoxSetBreakpointsAfterMain;
    wxCheckBox* m_checkBreakAtWinMain;
    wxCheckBox* m_catchThrow;
    wxCheckBox* m_raiseOnBpHit;
    wxCheckBox* m_showTooltipsRequiresControl;
    wxCheckBox* m_checkBoxAutoExpand;
    wxStaticText* m_staticText2;
    wxSpinCtrl* m_spinCtrlNumElements;
    wxCheckBox* m_checkBoxExpandLocals;
    wxCheckBox* m_checkBoxCharArrAsPtr;
    wxCheckBox* m_checkBoxUsePrettyPrinting;
    wxCheckBox* m_checkBoxPrintObjectOn;

protected:
    virtual void OnBrowse(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxTextCtrl* GetTextCtrDbgPath() { return m_textCtrDbgPath; }
    wxButton* GetButtonBrowse() { return m_buttonBrowse; }
    wxCheckBox* GetCheckBoxEnablePendingBreakpoints() { return m_checkBoxEnablePendingBreakpoints; }
    wxCheckBox* GetCheckBoxSetBreakpointsAfterMain() { return m_checkBoxSetBreakpointsAfterMain; }
    wxCheckBox* GetCheckBreakAtWinMain() { return m_checkBreakAtWinMain; }
    wxCheckBox* GetCatchThrow() { return m_catchThrow; }
    wxCheckBox* GetRaiseOnBpHit() { return m_raiseOnBpHit; }
    wxCheckBox* GetShowTooltipsRequiresControl() { return m_showTooltipsRequiresControl; }
    wxCheckBox* GetCheckBoxAutoExpand() { return m_checkBoxAutoExpand; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxSpinCtrl* GetSpinCtrlNumElements() { return m_spinCtrlNumElements; }
    wxCheckBox* GetCheckBoxExpandLocals() { return m_checkBoxExpandLocals; }
    wxCheckBox* GetCheckBoxCharArrAsPtr() { return m_checkBoxCharArrAsPtr; }
    wxCheckBox* GetCheckBoxUsePrettyPrinting() { return m_checkBoxUsePrettyPrinting; }
    wxCheckBox* GetCheckBoxPrintObjectOn() { return m_checkBoxPrintObjectOn; }
    wxPanel* GetPanel6() { return m_panel6; }
    DbgPageGeneralBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~DbgPageGeneralBase();
};


class DbgPageMiscBase : public wxPanel
{
protected:
    wxPanel* m_panel7;
    wxCheckBox* m_checkUseRelativePaths;
    wxCheckBox* m_checkBoxEnableLog;
    wxCheckBox* m_checkShowTerminal;
    wxStaticText* m_staticText6;
    wxSpinCtrl* m_maxFramesSpinCtrl;
    wxCheckBox* m_checkBoxDebugAssert;
    wxStaticText* m_staticText5;
    wxTextCtrl* m_textCtrlCygwinPathCommand;

protected:
    virtual void OnDebugAssert(wxCommandEvent& event) { event.Skip(); }
    virtual void OnWindowsUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckUseRelativePaths() { return m_checkUseRelativePaths; }
    wxCheckBox* GetCheckBoxEnableLog() { return m_checkBoxEnableLog; }
    wxCheckBox* GetCheckShowTerminal() { return m_checkShowTerminal; }
    wxStaticText* GetStaticText6() { return m_staticText6; }
    wxSpinCtrl* GetMaxFramesSpinCtrl() { return m_maxFramesSpinCtrl; }
    wxCheckBox* GetCheckBoxDebugAssert() { return m_checkBoxDebugAssert; }
    wxStaticText* GetStaticText5() { return m_staticText5; }
    wxTextCtrl* GetTextCtrlCygwinPathCommand() { return m_textCtrlCygwinPathCommand; }
    wxPanel* GetPanel7() { return m_panel7; }
    DbgPageMiscBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~DbgPageMiscBase();
};


class DbgPagePreDefTypesBase : public wxPanel
{
protected:
    wxPanel* m_panel6;
    wxButton* m_buttonNewSet;
    wxButton* m_buttonDeleteSet;
    wxChoicebook* m_notebookPreDefTypes;

protected:
    virtual void OnNewSet(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteSet(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteSetUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnPageChanged(wxChoicebookEvent& event) { event.Skip(); }

public:
    wxButton* GetButtonNewSet() { return m_buttonNewSet; }
    wxButton* GetButtonDeleteSet() { return m_buttonDeleteSet; }
    wxChoicebook* GetNotebookPreDefTypes() { return m_notebookPreDefTypes; }
    wxPanel* GetPanel6() { return m_panel6; }
    DbgPagePreDefTypesBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~DbgPagePreDefTypesBase();
};


class DebuggerDisassemblyTabBase : public wxPanel
{
protected:
    wxStaticText* m_staticText24;
    wxTextCtrl* m_textCtrlCurFunction;
    wxSplitterWindow* m_splitter51;
    wxPanel* m_splitterPage55;
    wxStyledTextCtrl* m_stc;
    wxPanel* m_splitterPage59;
    wxDataViewListCtrl* m_dvListCtrlRegisters;

protected:
    virtual void OnMarginClicked(wxStyledTextEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText24() { return m_staticText24; }
    wxTextCtrl* GetTextCtrlCurFunction() { return m_textCtrlCurFunction; }
    wxStyledTextCtrl* GetStc() { return m_stc; }
    wxPanel* GetSplitterPage55() { return m_splitterPage55; }
    wxDataViewListCtrl* GetDvListCtrlRegisters() { return m_dvListCtrlRegisters; }
    wxPanel* GetSplitterPage59() { return m_splitterPage59; }
    wxSplitterWindow* GetSplitter51() { return m_splitter51; }
    DebuggerDisassemblyTabBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~DebuggerDisassemblyTabBase();
};


class LocalsTableBase : public wxPanel
{
public:
    enum {
        ID_SORT_LOCALS = 7334,
    };
protected:
    wxAuiToolBar* m_auibar31;
    clTreeListCtrl* m_listTable;

protected:
    virtual void OnRefresh(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRefreshUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnNewWatch(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNewWatchUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDeleteWatch(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteWatchUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSortItems(wxCommandEvent& event) { event.Skip(); }
    virtual void OnListEditLabelBegin(wxTreeEvent& event) { event.Skip(); }
    virtual void OnListEditLabelEnd(wxTreeEvent& event) { event.Skip(); }
    virtual void OnItemRightClick(wxTreeEvent& event) { event.Skip(); }
    virtual void OnListKeyDown(wxTreeEvent& event) { event.Skip(); }
    virtual void OnItemExpanding(wxTreeEvent& event) { event.Skip(); }

public:
    wxAuiToolBar* GetAuibar31() { return m_auibar31; }
    clTreeListCtrl* GetListTable() { return m_listTable; }
    LocalsTableBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~LocalsTableBase();
};

#endif
