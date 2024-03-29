//-----------------------------------------------------------------------------
// VST Plug-Ins SDK
// VSTGUI: Graphical User Interface Framework for VST plugins
//
// Version 4.2
//
//-----------------------------------------------------------------------------
// VSTGUI LICENSE
// (c) 2013, Steinberg Media Technologies, All Rights Reserved
//-----------------------------------------------------------------------------
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name of the Steinberg Media Technologies nor the names of its
//     contributors may be used to endorse or promote products derived from this
//     software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE  OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------

#ifndef __vstguifwd__
#define __vstguifwd__

#include "vstguibase.h"

namespace VSTGUI {

// simple structs
struct CColor;
struct CPoint;
struct CRect;
struct CButtonState;
struct CDrawMode;
struct CGraphicsTransform;

// interfaces
class IViewListener;
class IDataPackage;
class IDependency;
class IFocusDrawing;
class IScaleFactorChangedListener;
#if VSTGUI_TOUCH_EVENT_HANDLING
class ITouchEvent;
#endif
class IDataBrowserDelegate;
class IMouseObserver;
class IKeyboardHook;
class IViewAddedRemovedObserver;
class ISplitViewController;
class ISplitViewSeparatorDrawer;
class IScrollbarDrawer;
class IControlListener;

// classes
class CBitmap;
class CNinePartTiledBitmap;
class CResourceDescription;
class CLineStyle;
class CDrawContext;
class COffscreenContext;
class CDropSource;
class CFileExtension;
class CNewFileSelector;
class CFontDesc;
class VSTGUIEditorInterface;
class CTooltipSupport;
class CGraphicsPath;
class CGradient;
class UTF8String;
class UTF8StringView;
class CVSTGUITimer;
class CMenuItem;
class CCommandMenuItem;
class GenericStringListDataBrowserSource;

// views
class CFrame;
class CDataBrowser;
class CGradientView;
class CLayeredViewContainer;
class CAutoLayoutContainerView;
class CRowColumnView;
class CScrollView;
class CShadowViewContainer;
class CSplitView;
class CTabView;
class CView;
class CViewContainer;
#if VSTGUI_OPENGL_SUPPORT
class COpenGLView;
#endif

// controls
class CAutoAnimation;
class COnOffButton;
class CCheckBox;
class CKickButton;
class CTextButton;
class CColorChooser;
class CControl;
class CFontChooser;
class CKnob;
class CAnimKnob;
class CMovieBitmap;
class CMovieButton;
class COptionMenu;
class CParamDisplay;
class CScrollbar;
class CSegmentButton;
class CSlider;
class CVerticalSlider;
class CHorizontalSlider;
class CSpecialDigit;
class CSplashScreen;
class CAnimationSplashScreen;
class CVerticalSwitch;
class CHorizontalSwitch;
class CRockerSwitch;
class CTextEdit;
class CTextLabel;
class CVuMeter;
class CXYPad;

// animation
namespace Animation {
class IAnimationTarget;
class ITimingFunction;
class AlphaValueAnimation;
class ViewSizeAnimation;
class ExchangeViewAnimation;
class ControlValueAnimation;
class Animator;
class TimingFunctionBase;
class LinearTimingFunction;
class PowerTimingFunction;
class InterpolationTimingFunction;
class RepeatTimingFunction;
}

template <class I> class SharedPointer;

// platform
class IPlatformString;
class IPlatformBitmap;
class IPlatformBitmapPixelAccess;
class IPlatformFont;
class IFontPainter;

}

#endif // __vstguifwd__
