#ifndef COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERERS_GROUP_RENDERER_HPP
#define COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERERS_GROUP_RENDERER_HPP

#include "../../model/items/item.hpp"
#include "item_view.hpp"

namespace rendering {

// TK: In reality if you do not need to visualize group itself you do not need to have GroupView
// And in fasct Group view is the same RectasbgleView (it is invisible rectangle that contains other shapes)
class GroupView : public ItemView {
public:
    void render(IRendererPtr) const override;
    ItemViewPtr clone() const override;

}; // GroupView

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERERS_GROUP_RENDERER_HPP