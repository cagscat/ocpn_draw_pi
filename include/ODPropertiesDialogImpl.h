/***************************************************************************
*
* Project:  OpenCPN
* Purpose:  OCPN Draw Properties Dialog support
* Author:   Jon Gough
*
***************************************************************************
*   Copyright (C) 2010 by David S. Register                               *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
**************************************************************************/

#ifndef __ODPropertiesDialogImpl__
#define __ODPropertiesDialogImpl__

/**
@file
Subclass of ODPropertiesForm, which is generated by wxFormBuilder.
*/

#include "ODPropertiesDialogDef.h"
#include <wx/bmpcbox.h>

// Forward declare class
class wxFontDialog;


/** Implementing ODPropertiesForm */
class ODPropertiesDialogImpl : public ODPropertiesDialogDef
{
protected:
    // Handlers for ODPropertiesForm events.
    void OnODPointComboboxSelected( wxCommandEvent& event );
    void OnTextPointIconComboboxSelected( wxCommandEvent& event );
    void OnEBLEndIconComboboxSelected( wxCommandEvent& event );
    void OnEBLStartIconComboboxSelected( wxCommandEvent& event );
    void OnEBLRotateWithBoat( wxCommandEvent& event );
    void OnEBLFixedEndPosition( wxCommandEvent& event );
    void OnDRPointIconComboboxSelected( wxCommandEvent& event );
    void OnButtonClickFonts( wxCommandEvent& event );
    void OnDrawPropertiesOKClick( wxCommandEvent& event );
    void OnDrawPropertiesCancelClick( wxCommandEvent& event );
    void OnDrawPropertiesApplyClick( wxCommandEvent& event );
    
    void SaveChanges();
    
    wxSize              m_defaultClientSize;

    
public:
    /** Constructor */
    ODPropertiesDialogImpl( wxWindow* parent );
    void UpdateProperties( void );
    void SetDialogSize( void );
    wxFontDialog  *m_pfdDialog;
    
private:
    void        SetTableCellBackgroundColours(void);
    
    double      m_dValidator;
    double      m_dODPointRangRingStepValidator;
    double      m_dSOGValidator;
    double      m_dODPointArrivalRadiusValidator;
    double      m_dDRPathLengthValidator;
    double      m_dODPointIntervalValidator;
    double      m_dDRPointRangRingStepValidator;
    int         m_iCOGValidator;
    wxColour    m_cRed;
    wxColour    m_cGreen;
    
};

#endif // __ODPropertiesDialogImpl__
