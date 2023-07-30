#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
    namespace Applications {
        namespace Screens {
            class TodoistViewer : public Screen {
            public:
                TodoistViewer();
                ~TodoistViewer() override;
            };
        }
    }
}