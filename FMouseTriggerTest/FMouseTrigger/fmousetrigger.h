#ifndef FMOUSETRIGGER_H
#define FMOUSETRIGGER_H

#include <functional>
#include <tuple>


namespace fmt {

    struct RightClick {
        RightClick() : right_click_trigger([]()->void{}) {}
        RightClick(const std::function<void ()>& right_click_trigger) : right_click_trigger(right_click_trigger) {}
        std::function<void()> right_click_trigger;
    };


    struct LeftClick {
        LeftClick() : left_click_trigger([]()->void{}) {}
        LeftClick(const std::function<void ()>& left_click_trigger) : left_click_trigger(left_click_trigger) {}
        std::function<void()> left_click_trigger;
    };


    struct MiddleClick {
        MiddleClick() : middle_click_trigger([]()->void{}) {}
        MiddleClick(const std::function<void ()>& middle_click_trigger) : middle_click_trigger(middle_click_trigger) {}
        std::function<void()> middle_click_trigger;
    };


    struct BackClick {
        BackClick() : back_click_trigger([]()->void{}) {}
        BackClick(const std::function<void ()>& back_click_trigger) : back_click_trigger(back_click_trigger) {}
        std::function<void()> back_click_trigger;
    };

}


class FMouseTrigger {

public:
    explicit FMouseTrigger();
    explicit FMouseTrigger(const fmt::RightClick& right_click);
    explicit FMouseTrigger(const fmt::LeftClick& left_click);
    explicit FMouseTrigger(const fmt::MiddleClick& middle_click);
    explicit FMouseTrigger(const fmt::BackClick& back_click);
    explicit FMouseTrigger(const fmt::RightClick& right_click, const fmt::LeftClick& left_click, const fmt::MiddleClick& middle_click, const fmt::BackClick& back_click);
    virtual ~FMouseTrigger() = default;
    FMouseTrigger(const FMouseTrigger&) = default;

    virtual const fmt::RightClick get_right_click_trigger() const;
    virtual const fmt::LeftClick get_left_click_trigger() const;
    virtual const fmt::MiddleClick get_middle_click_trigger() const;
    virtual const fmt::BackClick get_back_click_trigger() const;

private:
    std::tuple<fmt::RightClick, fmt::LeftClick, fmt::MiddleClick, fmt::BackClick> trigger_tuple;
};

#endif // FMOUSETRIGGER_H
