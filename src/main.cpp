#include <Geode/Geode.hpp>
#include <Geode/Modify/ProfilePage.hpp>
#include <dasshu.badgified/include/Badgified.hpp>

using namespace geode::prelude;
using namespace dasshu::badgified;

$execute {
    registerBadge(
        "soggy"_spr,
        "Soggy",
        "soogert",
        [] (const Badge& badge) {
            if (badge.modStatus == ModStatus::Regular) showBadge(badge, CCSprite::create("soggyBadge.png"_spr));
        }
    );

    setProfileCallback(
        "soggy"_spr,
        [] (const Badge& badge) {
        showBadge(badge, CCSprite::create("soggyBadge.png"_spr));
    });
}