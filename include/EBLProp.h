/***************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  ODPath Properties
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

#ifndef EBLPROP_H
#define EBLPROP_H

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

//#include "PathProp.h"
#include "ODPathPropertiesDialogImpl.h"

class EBL;

class EBLProp : public ODPathPropertiesDialogImpl
{
    public:
        EBLProp();
        EBLProp( wxWindow* parent, wxWindowID id = SYMBOL_PATHPROP_IDNAME, const wxString& caption = SYMBOL_PATHPROP_TITLE, const wxPoint& pos = SYMBOL_PATHPROP_POSITION,
                        const wxSize& size = SYMBOL_PATHPROP_SIZE, long style = SYMBOL_PATHPROP_STYLE );
        virtual ~EBLProp();

        void OnRotateWithBoat( wxCommandEvent& event );
        void OnFixedEndPosition( wxCommandEvent& event );
        void OnSetFocus( wxFocusEvent& event );
        void OnKillFocus( wxFocusEvent& event );
        bool UpdateProperties( EBL *pInEBL );
        bool UpdateProperties( void );
        bool SaveChanges( void );
        
        void OnOK( wxCommandEvent& event );
        void OnClose( wxCloseEvent& event );
        void OnCancel( wxCommandEvent& event );
        void OnChoiceLineWidth( wxCommandEvent& event );
        void OnChoiceLineStyle( wxCommandEvent& event );
        void OnSetFocusChoiceLineWidth( wxFocusEvent& event );
        void OnKillFocusChoiceLineWidth( wxFocusEvent& event );
        void OnSetFocusChoiceLineStyle( wxFocusEvent& event );
        void OnKillFocusChoiceLineStyle( wxFocusEvent& event );
        
    protected:
        
    private:
        double  m_dODEBLAngleValidator;
        double  m_dODEBLLengthValidator;
        bool    m_bLockEBLAngle;
        bool    m_bLockEBLLength;
        bool    m_bSetLocale;
        bool    m_bLockUpdate;
        
};

#endif // EBLPROP_H
