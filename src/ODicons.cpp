/******************************************************************************
 * 
 * Project:  OpenCPN
 *
 ***************************************************************************
 *   Copyright (C) 2013 by David S. Register                               *
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
 ***************************************************************************
 */

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <wx/mstream.h>
#include <wx/filename.h>
#include "ODicons.h"
#include "ocpn_plugin.h"

extern const wxBitmap *_img_Bullet_green;
extern const wxBitmap *_img_Bullet_red;
extern const wxBitmap *_img_Bullet_yellow;
extern wxString g_SData_Locn;
extern wxString *g_pHome_locn;
extern wxString *g_pData;
extern wxString *g_pImage;;

void initialize_images(void)
{
    wxFileName fn;
    fn.SetPath(*GetpSharedDataLocation());
    fn.AppendDir(_T("plugins"));
    fn.AppendDir(_T("ocpn_draw_pi"));
    fn.AppendDir(_T("data"));

    fn.SetFullName(_T("OCPNDrawManager.png"));
    _img_ocpn_draw_pi = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    fn.SetFullName(_T("OCPNDrawManagerGray.png"));
    _img_ocpn_draw_gray_pi = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    
    fn.SetFullName(_T("button1.png"));
    _img_ocpn_draw_boundary = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    fn.SetFullName(_T("button2.png"));
    _img_ocpn_draw_boundary_gray = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    
    fn.SetFullName(_T("pointbutton.png"));
    _img_ocpn_draw_point = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    fn.SetFullName(_T("pointbuttongray.png"));
    _img_ocpn_draw_point_gray = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    
    fn.SetFullName(_T("textpointbutton.png"));
    _img_ocpn_draw_textpoint = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    fn.SetFullName(_T("textpointbuttongray.png"));
    _img_ocpn_draw_textpoint_gray = new wxBitmap( fn.GetFullPath(), wxBITMAP_TYPE_PNG );
    

static unsigned char Bullet_green[] = {
0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 
0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 
0x08, 0x06, 0x00, 0x00, 0x00, 0x8d, 0x32, 0xcf, 0xbd, 0x00, 0x00, 0x00, 
0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 
0x12, 0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x01, 0x1f, 0x49, 0x44, 
0x41, 0x54, 0x78, 0x9c, 0x65, 0xd0, 0xbf, 0x4b, 0x02, 0x01, 0x18, 0xc6, 
0xf1, 0xf7, 0x4f, 0xba, 0x45, 0x04, 0xa7, 0x13, 0x6e, 0x53, 0x04, 0xd1, 
0xe5, 0xe4, 0x14, 0xe1, 0xe0, 0xce, 0x93, 0x3b, 0x3c, 0x75, 0x90, 0x14, 
0x17, 0x91, 0x86, 0x96, 0xc0, 0x2d, 0x08, 0x21, 0x68, 0x88, 0xa4, 0x9a, 
0x43, 0x9d, 0x84, 0x08, 0x21, 0x84, 0x44, 0x70, 0x88, 0x82, 0x70, 0x28, 
0x10, 0x02, 0xa1, 0x1f, 0x74, 0xc5, 0xb7, 0xc1, 0x0c, 0x42, 0x1e, 0xde, 
0xe9, 0xf9, 0xf0, 0x0e, 0x8f, 0x00, 0x02, 0x48, 0x40, 0xc0, 0x94, 0x29, 
0x83, 0xaf, 0x01, 0xa3, 0xb7, 0x11, 0xcb, 0xcf, 0x25, 0x9b, 0x0e, 0x10, 
0x01, 0x64, 0xc6, 0x8c, 0x06, 0x0d, 0x5c, 0x5c, 0x6c, 0x6c, 0xf2, 0x2f, 
0x79, 0xd2, 0x37, 0x69, 0x3a, 0x93, 0x0e, 0xc1, 0x77, 0x00, 0x20, 0x32, 
0x67, 0x4e, 0xf9, 0x37, 0x25, 0x4a, 0xd8, 0x81, 0x8d, 0xb1, 0x30, 0x48, 
0x4d, 0x52, 0x44, 0x8f, 0xa3, 0xd4, 0x2f, 0xea, 0x6b, 0xd8, 0xa2, 0x85, 
0x8f, 0x4f, 0x95, 0x2a, 0x3e, 0x3e, 0x56, 0x60, 0xa1, 0xdf, 0xeb, 0xc4, 
0x2e, 0x63, 0xa8, 0x5d, 0x15, 0xa5, 0xa6, 0x30, 0xbe, 0x1b, 0x23, 0x0e, 
0x0e, 0x1e, 0x1e, 0x65, 0xca, 0x54, 0xa8, 0x50, 0x78, 0x2d, 0x90, 0xbc, 
0x4e, 0xa2, 0x1e, 0xa9, 0x84, 0xda, 0x21, 0x94, 0x9a, 0x42, 0xfb, 0xbc, 
0x8d, 0x98, 0x1f, 0x26, 0x56, 0x60, 0x51, 0xa4, 0x88, 0x87, 0x87, 0xf5, 
0x64, 0x11, 0xda, 0x5d, 0x83, 0xcd, 0xb9, 0x5d, 0x17, 0xd1, 0x1f, 0x74, 
0x32, 0x8f, 0x19, 0xb2, 0xcf, 0x59, 0x8c, 0x85, 0xb1, 0x85, 0x94, 0x9a, 
0x42, 0xf3, 0xb4, 0x89, 0xe4, 0xae, 0x72, 0x24, 0x46, 0x09, 0xe2, 0xc3, 
0x38, 0xda, 0x99, 0x46, 0x78, 0x2f, 0xbc, 0x05, 0xfb, 0xb7, 0x7d, 0x64, 
0xb8, 0x18, 0xa2, 0x9d, 0x68, 0x44, 0xf6, 0x23, 0xeb, 0x62, 0xe7, 0x3f, 
0x32, 0x0f, 0x4c, 0xfe, 0x76, 0xec, 0x4d, 0x7a, 0x84, 0x1b, 0xdb, 0x9f, 
0x9c, 0x43, 0x87, 0xd5, 0xfb, 0x0a, 0x40, 0x7e, 0x00, 0x57, 0x28, 0x02, 
0x1e, 0xf4, 0x28, 0xf9, 0x10, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 
0x44, 0xae, 0x42, 0x60, 0x82, 
};


    {
        wxMemoryInputStream sm(Bullet_green,sizeof(Bullet_green));
        _img_Bullet_green = new wxBitmap(wxImage(sm));
    }

static unsigned char Bullet_red[] = {
0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 
0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 
0x08, 0x06, 0x00, 0x00, 0x00, 0x8d, 0x32, 0xcf, 0xbd, 0x00, 0x00, 0x00, 
0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 
0x12, 0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00, 0xe1, 0x49, 0x44, 
0x41, 0x54, 0x78, 0x9c, 0x6d, 0xd0, 0xbf, 0x4a, 0x42, 0x71, 0x14, 0xc0, 
0xf1, 0x2f, 0xe8, 0xe2, 0x23, 0xdc, 0x07, 0xf0, 0x3d, 0xdc, 0x04, 0x9f, 
0xc0, 0xd1, 0x51, 0x7c, 0x01, 0x89, 0xd6, 0x68, 0x68, 0x09, 0xc1, 0x25, 
0x08, 0x31, 0x6c, 0x90, 0xb0, 0x5a, 0x74, 0x08, 0xcc, 0x25, 0x88, 0x96, 
0xb8, 0xd0, 0x1c, 0x05, 0xe9, 0x50, 0x53, 0x2e, 0x95, 0xde, 0x8a, 0x6f, 
0xc3, 0xfd, 0xdd, 0x4b, 0x58, 0xc3, 0x81, 0xf3, 0xe7, 0xc3, 0xe1, 0x70, 
0x50, 0x51, 0x71, 0xbd, 0xd6, 0xf1, 0xd8, 0xaf, 0x4e, 0xc7, 0xf7, 0x7e, 
0xdf, 0x64, 0x3e, 0x37, 0x9f, 0x29, 0x69, 0x32, 0x99, 0x68, 0x14, 0xa5, 
0x25, 0xf8, 0x0a, 0xde, 0x16, 0x0a, 0xc6, 0xad, 0x96, 0xdf, 0x49, 0x62, 
0x0a, 0xa7, 0x53, 0x2d, 0x16, 0x73, 0xf4, 0x09, 0x2e, 0xc0, 0x18, 0x3c, 
0x06, 0xcf, 0xeb, 0xf5, 0x00, 0xcb, 0xe5, 0x1c, 0x65, 0xf0, 0x01, 0xbc, 
0x00, 0x7b, 0x60, 0x1b, 0xbc, 0x9f, 0xcd, 0xe4, 0x37, 0x12, 0x7c, 0x03, 
0x6f, 0xc0, 0x23, 0x70, 0x27, 0xc0, 0xb3, 0x66, 0x53, 0x56, 0x61, 0x4b, 
0x06, 0x9f, 0xc1, 0xdd, 0x00, 0xb2, 0xe8, 0xd5, 0x6a, 0xf2, 0x08, 0x3e, 
0x81, 0x2f, 0xe1, 0xb6, 0x4d, 0xd4, 0x06, 0x4f, 0x1a, 0x0d, 0xb9, 0x8e, 
0x22, 0xaf, 0xc0, 0x4b, 0xf0, 0x14, 0xdc, 0xfb, 0x07, 0xde, 0x8d, 0x46, 
0xb2, 0x18, 0x0c, 0x1c, 0x82, 0xfb, 0xa1, 0xb9, 0xb5, 0x81, 0x0e, 0x2a, 
0x15, 0xf3, 0x3f, 0xc6, 0xdd, 0xae, 0xdb, 0xa5, 0xd2, 0x9f, 0x4d, 0x87, 
0xd5, 0xaa, 0x1f, 0xcb, 0xa5, 0x2a, 0x3f, 0x8b, 0xc0, 0xd5, 0x5b, 0x5f, 
0xfb, 0xcc, 0xea, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 
0x42, 0x60, 0x82, 
};

    {
        wxMemoryInputStream sm(Bullet_red,sizeof(Bullet_red));
        _img_Bullet_red = new wxBitmap(wxImage(sm));
    }

static unsigned char Bullet_yellow[] = {
0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 
0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 
0x08, 0x06, 0x00, 0x00, 0x00, 0x8d, 0x32, 0xcf, 0xbd, 0x00, 0x00, 0x00, 
0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 
0x12, 0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x01, 0x20, 0x49, 0x44, 
0x41, 0x54, 0x78, 0x9c, 0x65, 0xd0, 0xb1, 0x4b, 0x02, 0x71, 0x18, 0xc6, 
0xf1, 0xdf, 0x9f, 0x74, 0x4b, 0x04, 0x4d, 0x06, 0x6e, 0x45, 0x10, 0xb5, 
0x18, 0x16, 0x81, 0x70, 0x66, 0x28, 0x59, 0x5d, 0x5c, 0x25, 0x41, 0x94, 
0x38, 0x44, 0x10, 0x34, 0x04, 0x89, 0x48, 0x81, 0x83, 0x54, 0xd6, 0xd2, 
0x50, 0x94, 0x04, 0x09, 0x21, 0x92, 0x1c, 0x15, 0x41, 0x52, 0x29, 0xd8, 
0x41, 0x09, 0x41, 0x20, 0x6a, 0xa7, 0x67, 0x7c, 0x1b, 0x3c, 0x0b, 0x71, 
0x78, 0xe0, 0x81, 0xf7, 0xc3, 0x33, 0xbc, 0x02, 0x10, 0xad, 0x98, 0xc0, 
0x03, 0xcd, 0xc6, 0x25, 0xb5, 0x4a, 0x8a, 0x46, 0xfd, 0x93, 0xff, 0x1b, 
0xc2, 0x2a, 0x8f, 0x40, 0x00, 0xf0, 0x42, 0xdd, 0xcd, 0x57, 0x69, 0x92, 
0x6c, 0x7a, 0x14, 0xed, 0x76, 0x9b, 0x9f, 0xa6, 0x89, 0x05, 0x9f, 0x80, 
0x59, 0x2b, 0x33, 0x98, 0x86, 0x1b, 0xbd, 0xe0, 0x44, 0xcb, 0x8c, 0x10, 
0xdb, 0xeb, 0xe7, 0x24, 0xb1, 0xdc, 0x86, 0x6b, 0x80, 0x1f, 0x98, 0x07, 
0xfc, 0x98, 0x86, 0x4c, 0x3e, 0xe7, 0xe0, 0xfc, 0x74, 0x80, 0x68, 0xd8, 
0x86, 0xaa, 0x48, 0xbc, 0x3c, 0x67, 0x10, 0xe0, 0x01, 0x7c, 0xd6, 0xe2, 
0x1c, 0xd5, 0xca, 0x14, 0xe9, 0xd4, 0x30, 0xfb, 0x51, 0x1b, 0xc1, 0xd5, 
0x1e, 0x54, 0x45, 0xe2, 0xf8, 0x28, 0x88, 0x30, 0xca, 0x2e, 0xcc, 0xaa, 
0x0c, 0xe6, 0x34, 0xe0, 0xe3, 0xe3, 0x5d, 0x26, 0xb4, 0xde, 0x02, 0xed, 
0x44, 0x23, 0x5e, 0x44, 0x21, 0xe7, 0xa0, 0xf8, 0x3a, 0x46, 0xe9, 0x6d, 
0x1c, 0x3d, 0xef, 0x24, 0x14, 0xec, 0x44, 0xaa, 0x22, 0x71, 0x10, 0x5f, 
0x41, 0xdc, 0x5c, 0x4f, 0x90, 0xba, 0x1a, 0x22, 0x79, 0x36, 0x48, 0x22, 
0x6e, 0x67, 0x23, 0xd4, 0xdb, 0x05, 0xef, 0xef, 0x2e, 0x10, 0x7a, 0x31, 
0x49, 0x3c, 0x66, 0x67, 0x6b, 0xb3, 0x0f, 0x55, 0x91, 0x58, 0x5a, 0xe8, 
0x44, 0xbb, 0x3b, 0x2e, 0xfe, 0xfe, 0xa8, 0x65, 0x0f, 0x09, 0x2c, 0x76, 
0x2f, 0x45, 0xc2, 0x1e, 0xbe, 0x6b, 0x65, 0x00, 0xf1, 0x0b, 0xfb, 0x12, 
0x21, 0x2e, 0x20, 0xdf, 0x1c, 0xdd, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 
};

    {
        wxMemoryInputStream sm(Bullet_yellow,sizeof(Bullet_yellow));
        _img_Bullet_yellow = new wxBitmap(wxImage(sm));
    }

    return;
}
