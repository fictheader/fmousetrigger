#include "fmousetrigger.h"


FMouseTrigger::FMouseTrigger()
{
    trigger_tuple = std::make_tuple(fmt::RightClick(), fmt::LeftClick(), fmt::MiddleClick(), fmt::BackClick());
}


FMouseTrigger::FMouseTrigger(const fmt::RightClick& right_click)
{
    trigger_tuple = std::make_tuple(right_click, fmt::LeftClick(), fmt::MiddleClick(), fmt::BackClick());
}


FMouseTrigger::FMouseTrigger(const fmt::LeftClick& left_click)
{
    trigger_tuple = std::make_tuple(fmt::RightClick(), left_click, fmt::MiddleClick(), fmt::BackClick());
}


FMouseTrigger::FMouseTrigger(const fmt::MiddleClick& middle_click)
{
    trigger_tuple = std::make_tuple(fmt::RightClick(), fmt::LeftClick(), middle_click, fmt::BackClick());
}


FMouseTrigger::FMouseTrigger(const fmt::BackClick& back_click)
{
    trigger_tuple = std::make_tuple(fmt::RightClick(), fmt::LeftClick(), fmt::MiddleClick(), back_click);
}


FMouseTrigger::FMouseTrigger(const fmt::RightClick &right_click, const fmt::LeftClick &left_click, const fmt::MiddleClick &middle_click, const fmt::BackClick &back_click)
{
    trigger_tuple = std::make_tuple(right_click, left_click, middle_click, back_click);
}


const fmt::RightClick FMouseTrigger::get_right_click_trigger() const
{
    return std::get<0>(trigger_tuple);
}


const fmt::LeftClick FMouseTrigger::get_left_click_trigger() const
{
    return std::get<1>(trigger_tuple);
}


const fmt::MiddleClick FMouseTrigger::get_middle_click_trigger() const
{
    return std::get<2>(trigger_tuple);
}


const fmt::BackClick FMouseTrigger::get_back_click_trigger() const
{
    return std::get<3>(trigger_tuple);
}
