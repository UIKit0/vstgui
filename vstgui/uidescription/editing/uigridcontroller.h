#ifndef __uigridcontroller__
#define __uigridcontroller__

#include "../uidescription.h"

#if VSTGUI_LIVE_EDITING

#include "uigrid.h"
#include "../../lib/controls/ctextedit.h"

namespace VSTGUI {

//----------------------------------------------------------------------------------------------------
class UIGridController : public UIGrid, public DelegationController
{
public:
	UIGridController (IController* baseController, UIDescription* description);
	~UIGridController ();

protected:
	void valueChanged (CControl* pControl);
	CView* verifyView (CView* view, const UIAttributes& attributes, IUIDescription* description);
	CControlListener* getControlListener (UTF8StringPtr name);

	SharedPointer<UIDescription> editDescription;
	SharedPointer<CTextEdit> gridControls[2];

	static bool valueToString (float value, char utf8String[256], void* userData);
	static bool stringToValue (UTF8StringPtr txt, float& result, void* userData);

	enum {
		kGridXTag,
		kGridYTag
	};
};

} // namespace

#endif // VSTGUI_LIVE_EDITING

#endif // __uigridcontroller__
