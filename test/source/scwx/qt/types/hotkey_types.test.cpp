#include <scwx/qt/types/hotkey_types.hpp>

#include <gtest/gtest.h>

namespace scwx
{
namespace qt
{
namespace types
{

TEST(HotkeyTypesTest, ToggleFullScreenShortName)
{
   EXPECT_EQ(GetHotkeyShortName(Hotkey::ToggleFullScreen), "toggle_full_screen");
}

TEST(HotkeyTypesTest, ToggleFullScreenLongName)
{
   EXPECT_EQ(GetHotkeyLongName(Hotkey::ToggleFullScreen), "Toggle Full Screen");
}

TEST(HotkeyTypesTest, ToggleFullScreenFromShortName)
{
   EXPECT_EQ(GetHotkeyFromShortName("toggle_full_screen"),
             Hotkey::ToggleFullScreen);
}

TEST(HotkeyTypesTest, ToggleFullScreenFromLongName)
{
   EXPECT_EQ(GetHotkeyFromLongName("Toggle Full Screen"),
             Hotkey::ToggleFullScreen);
}

TEST(HotkeyTypesTest, HotkeyIteratorIncludesToggleFullScreen)
{
   bool found = false;
   for (auto hotkey : HotkeyIterator())
   {
      if (hotkey == Hotkey::ToggleFullScreen)
      {
         found = true;
         break;
      }
   }
   EXPECT_TRUE(found);
}

} // namespace types
} // namespace qt
} // namespace scwx
