#include <cnoid/Plugin>
#include <cnoid/ItemManager>

#include <choreonoid_viewer/choreonoid_viewer.h>

namespace structual_motion_level_controller{
  // void sample1_vnoid();
  // class sample1_vnoidItem : public choreonoid_viewer::ViewerBaseItem {
  // public:
  //   static void initializeClass(cnoid::ExtensionManager* ext){ ext->itemManager().registerClass<sample1_vnoidItem>("sample1_vnoidItem"); }
  // protected:
  //   virtual void main() override{ sample1_vnoid(); return; }
  // };
  // typedef cnoid::ref_ptr<sample1_vnoidItem> sample1_vnoidItemPtr;

  class StructualMotionLevelControllerPlugin : public cnoid::Plugin
  {
  public:

    StructualMotionLevelControllerPlugin() : Plugin("StructualMotionLevelController")
    {
      require("Body");
    }
    virtual bool initialize() override
    {
      //sample1_vnoidItem::initializeClass(this);
      return true;
    }
  };


}

CNOID_IMPLEMENT_PLUGIN_ENTRY(structual_motion_level_controller::StructualMotionLevelControllerPlugin)
