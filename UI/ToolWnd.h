// -*- C++ -*-
//ToolWnd.h
#ifndef _ToolWnd_h_
#define _ToolWnd_h_

#ifndef _GGWnd_h_
#include "GGWnd.h"
#endif

#ifndef _GGTextControl_h_
#include "GGTextControl.h"
#endif
//!Implements a Tooltip window containing a string.
//!This window appears when the mouse hovers over its
//!parent window for a specified amount of time.

class ToolWnd : public GG::Wnd
{
public:
//! \name Structors
//!@{
    
    //! Main Construction
    
    //! Constructs a Tooltip window at (x,y) containing text with the specified background color.
    
    //! @param x the x coordinate of the tooltip.
    //! @param y the y coordinate of the tooltip.
    //! @param text the string that the tooltip will display
    //! @param clr the background color of the window.  Text is always black.
    
    ToolWnd(int x, int y, const std::string& text, const GG::Clr& clr, const std::string& font_name = "arial.ttf", int pts = 10);
    
//!@} 

public:
    //! \name Overrides
    //!@{
    
    //! Called to render the window.
    bool Render();
    
    //!@}
    
protected:
    //! \name Member Vars
    //!@{
    
    GG::TextControl *textwnd;    //!< where the text is contained
    GG::Clr color;              //!< the color of the tool window

    //!@}
};//ToolWnd

inline std::pair<std::string, std::string> ToolWndRevision()
{return std::pair<std::string, std::string>("$RCSfile$", "$Revision$");}

#endif // _ToolWnd_h_
