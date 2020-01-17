// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollingView.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(ScrollingView)
}

#include "ScrollingView.g.cpp"

GlobalDependencyProperty ScrollingViewProperties::s_ComputedHorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_ComputedVerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_HorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_HorizontalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_HorizontalScrollControllerProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_HorizontalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_IgnoredInputKindProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_ScrollingPresenterProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_VerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_VerticalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_VerticalScrollControllerProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_VerticalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_ZoomChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollingViewProperties::s_ZoomModeProperty{ nullptr };

ScrollingViewProperties::ScrollingViewProperties()
    : m_anchorRequestedEventSource{static_cast<ScrollingView*>(this)}
    , m_bringingIntoViewEventSource{static_cast<ScrollingView*>(this)}
    , m_extentChangedEventSource{static_cast<ScrollingView*>(this)}
    , m_scrollAnimationStartingEventSource{static_cast<ScrollingView*>(this)}
    , m_scrollCompletedEventSource{static_cast<ScrollingView*>(this)}
    , m_stateChangedEventSource{static_cast<ScrollingView*>(this)}
    , m_viewChangedEventSource{static_cast<ScrollingView*>(this)}
    , m_zoomAnimationStartingEventSource{static_cast<ScrollingView*>(this)}
    , m_zoomCompletedEventSource{static_cast<ScrollingView*>(this)}
{
    EnsureProperties();
}

void ScrollingViewProperties::EnsureProperties()
{
    if (!s_ComputedHorizontalScrollBarVisibilityProperty)
    {
        s_ComputedHorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedHorizontalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollingView::s_defaultComputedHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnComputedHorizontalScrollBarVisibilityPropertyChanged));
    }
    if (!s_ComputedVerticalScrollBarVisibilityProperty)
    {
        s_ComputedVerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedVerticalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollingView::s_defaultComputedVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnComputedVerticalScrollBarVisibilityPropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnContentPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ContentOrientation>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(ScrollingView::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnContentOrientationPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingView::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnHorizontalAnchorRatioPropertyChanged));
    }
    if (!s_HorizontalScrollBarVisibilityProperty)
    {
        s_HorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollBarVisibility",
                winrt::name_of<winrt::ScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(ScrollingView::s_defaultHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnHorizontalScrollBarVisibilityPropertyChanged));
    }
    if (!s_HorizontalScrollChainingModeProperty)
    {
        s_HorizontalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollingView::s_defaultHorizontalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollChainingModePropertyChanged));
    }
    if (!s_HorizontalScrollControllerProperty)
    {
        s_HorizontalScrollControllerProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollController",
                winrt::name_of<winrt::IScrollController>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::IScrollController>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHorizontalScrollControllerPropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(ScrollingView::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollModePropertyChanged));
    }
    if (!s_HorizontalScrollRailingModeProperty)
    {
        s_HorizontalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(ScrollingView::s_defaultHorizontalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollRailingModePropertyChanged));
    }
    if (!s_IgnoredInputKindProperty)
    {
        s_IgnoredInputKindProperty =
            InitializeDependencyProperty(
                L"IgnoredInputKind",
                winrt::name_of<winrt::InputKind>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::InputKind>::BoxValueIfNecessary(ScrollingView::s_defaultIgnoredInputKind),
                winrt::PropertyChangedCallback(&OnIgnoredInputKindPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingView::s_defaultMaxZoomFactor),
                winrt::PropertyChangedCallback(&OnMaxZoomFactorPropertyChanged));
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingView::s_defaultMinZoomFactor),
                winrt::PropertyChangedCallback(&OnMinZoomFactorPropertyChanged));
    }
    if (!s_ScrollingPresenterProperty)
    {
        s_ScrollingPresenterProperty =
            InitializeDependencyProperty(
                L"ScrollingPresenter",
                winrt::name_of<winrt::ScrollingPresenter>(),
                winrt::name_of<winrt::ScrollingView>(),
                true /* isAttached */,
                ValueHelper<winrt::ScrollingPresenter>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnScrollingPresenterPropertyChanged));
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingView::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnVerticalAnchorRatioPropertyChanged));
    }
    if (!s_VerticalScrollBarVisibilityProperty)
    {
        s_VerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"VerticalScrollBarVisibility",
                winrt::name_of<winrt::ScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(ScrollingView::s_defaultVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnVerticalScrollBarVisibilityPropertyChanged));
    }
    if (!s_VerticalScrollChainingModeProperty)
    {
        s_VerticalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollingView::s_defaultVerticalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollChainingModePropertyChanged));
    }
    if (!s_VerticalScrollControllerProperty)
    {
        s_VerticalScrollControllerProperty =
            InitializeDependencyProperty(
                L"VerticalScrollController",
                winrt::name_of<winrt::IScrollController>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::IScrollController>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnVerticalScrollControllerPropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(ScrollingView::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollModePropertyChanged));
    }
    if (!s_VerticalScrollRailingModeProperty)
    {
        s_VerticalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(ScrollingView::s_defaultVerticalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollRailingModePropertyChanged));
    }
    if (!s_ZoomChainingModeProperty)
    {
        s_ZoomChainingModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollingView::s_defaultZoomChainingMode),
                winrt::PropertyChangedCallback(&OnZoomChainingModePropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ZoomMode>(),
                winrt::name_of<winrt::ScrollingView>(),
                false /* isAttached */,
                ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(ScrollingView::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnZoomModePropertyChanged));
    }
}

void ScrollingViewProperties::ClearProperties()
{
    s_ComputedHorizontalScrollBarVisibilityProperty = nullptr;
    s_ComputedVerticalScrollBarVisibilityProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollBarVisibilityProperty = nullptr;
    s_HorizontalScrollChainingModeProperty = nullptr;
    s_HorizontalScrollControllerProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailingModeProperty = nullptr;
    s_IgnoredInputKindProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_ScrollingPresenterProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollBarVisibilityProperty = nullptr;
    s_VerticalScrollChainingModeProperty = nullptr;
    s_VerticalScrollControllerProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailingModeProperty = nullptr;
    s_ZoomChainingModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollingViewProperties::OnComputedHorizontalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnComputedVerticalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnContentOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnHorizontalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingView>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnHorizontalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnHorizontalScrollChainingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnHorizontalScrollControllerPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnHorizontalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnHorizontalScrollRailingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnIgnoredInputKindPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnMaxZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingView>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnMinZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingView>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnScrollingPresenterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnVerticalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingView>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnVerticalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnVerticalScrollChainingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnVerticalScrollControllerPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnVerticalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnVerticalScrollRailingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnZoomChainingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::OnZoomModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingView>();
    winrt::get_self<ScrollingView>(owner)->OnPropertyChanged(args);
}

void ScrollingViewProperties::ComputedHorizontalScrollBarVisibility(winrt::Visibility const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_ComputedHorizontalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
}

winrt::Visibility ScrollingViewProperties::ComputedHorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_ComputedHorizontalScrollBarVisibilityProperty));
}

void ScrollingViewProperties::ComputedVerticalScrollBarVisibility(winrt::Visibility const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_ComputedVerticalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
}

winrt::Visibility ScrollingViewProperties::ComputedVerticalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_ComputedVerticalScrollBarVisibilityProperty));
}

void ScrollingViewProperties::Content(winrt::UIElement const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ScrollingViewProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_ContentProperty));
}

void ScrollingViewProperties::ContentOrientation(winrt::ContentOrientation const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(value));
}

winrt::ContentOrientation ScrollingViewProperties::ContentOrientation()
{
    return ValueHelper<winrt::ContentOrientation>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollingViewProperties::HorizontalAnchorRatio(double value)
{
    double coercedValue = value;
    static_cast<ScrollingView*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollingView*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingViewProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollingViewProperties::HorizontalScrollBarVisibility(winrt::ScrollBarVisibility const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_HorizontalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(value));
}

winrt::ScrollBarVisibility ScrollingViewProperties::HorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollBarVisibility>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_HorizontalScrollBarVisibilityProperty));
}

void ScrollingViewProperties::HorizontalScrollChainingMode(winrt::ChainingMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_HorizontalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollingViewProperties::HorizontalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_HorizontalScrollChainingModeProperty));
}

void ScrollingViewProperties::HorizontalScrollController(winrt::IScrollController const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_HorizontalScrollControllerProperty, ValueHelper<winrt::IScrollController>::BoxValueIfNecessary(value));
}

winrt::IScrollController ScrollingViewProperties::HorizontalScrollController()
{
    return ValueHelper<winrt::IScrollController>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_HorizontalScrollControllerProperty));
}

void ScrollingViewProperties::HorizontalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollingViewProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollingViewProperties::HorizontalScrollRailingMode(winrt::RailingMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_HorizontalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
}

winrt::RailingMode ScrollingViewProperties::HorizontalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_HorizontalScrollRailingModeProperty));
}

void ScrollingViewProperties::IgnoredInputKind(winrt::InputKind const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_IgnoredInputKindProperty, ValueHelper<winrt::InputKind>::BoxValueIfNecessary(value));
}

winrt::InputKind ScrollingViewProperties::IgnoredInputKind()
{
    return ValueHelper<winrt::InputKind>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_IgnoredInputKindProperty));
}

void ScrollingViewProperties::MaxZoomFactor(double value)
{
    double coercedValue = value;
    static_cast<ScrollingView*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollingView*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingViewProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollingViewProperties::MinZoomFactor(double value)
{
    double coercedValue = value;
    static_cast<ScrollingView*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollingView*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingViewProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_MinZoomFactorProperty));
}


void ScrollingViewProperties::VerticalAnchorRatio(double value)
{
    double coercedValue = value;
    static_cast<ScrollingView*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollingView*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingViewProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollingViewProperties::VerticalScrollBarVisibility(winrt::ScrollBarVisibility const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_VerticalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(value));
}

winrt::ScrollBarVisibility ScrollingViewProperties::VerticalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollBarVisibility>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_VerticalScrollBarVisibilityProperty));
}

void ScrollingViewProperties::VerticalScrollChainingMode(winrt::ChainingMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_VerticalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollingViewProperties::VerticalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_VerticalScrollChainingModeProperty));
}

void ScrollingViewProperties::VerticalScrollController(winrt::IScrollController const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_VerticalScrollControllerProperty, ValueHelper<winrt::IScrollController>::BoxValueIfNecessary(value));
}

winrt::IScrollController ScrollingViewProperties::VerticalScrollController()
{
    return ValueHelper<winrt::IScrollController>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_VerticalScrollControllerProperty));
}

void ScrollingViewProperties::VerticalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollingViewProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollingViewProperties::VerticalScrollRailingMode(winrt::RailingMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_VerticalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
}

winrt::RailingMode ScrollingViewProperties::VerticalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_VerticalScrollRailingModeProperty));
}

void ScrollingViewProperties::ZoomChainingMode(winrt::ChainingMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_ZoomChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollingViewProperties::ZoomChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_ZoomChainingModeProperty));
}

void ScrollingViewProperties::ZoomMode(winrt::ZoomMode const& value)
{
    static_cast<ScrollingView*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(value));
}

winrt::ZoomMode ScrollingViewProperties::ZoomMode()
{
    return ValueHelper<winrt::ZoomMode>::CastOrUnbox(static_cast<ScrollingView*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollingViewProperties::AnchorRequested(winrt::TypedEventHandler<winrt::ScrollingView, winrt::ScrollingAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollingViewProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::BringingIntoView(winrt::TypedEventHandler<winrt::ScrollingView, winrt::ScrollingBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollingViewProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::ExtentChanged(winrt::TypedEventHandler<winrt::ScrollingView, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollingViewProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::ScrollAnimationStarting(winrt::TypedEventHandler<winrt::ScrollingView, winrt::ScrollingScrollAnimationStartingEventArgs> const& value)
{
    return m_scrollAnimationStartingEventSource.add(value);
}

void ScrollingViewProperties::ScrollAnimationStarting(winrt::event_token const& token)
{
    m_scrollAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::ScrollCompleted(winrt::TypedEventHandler<winrt::ScrollingView, winrt::ScrollingScrollCompletedEventArgs> const& value)
{
    return m_scrollCompletedEventSource.add(value);
}

void ScrollingViewProperties::ScrollCompleted(winrt::event_token const& token)
{
    m_scrollCompletedEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::StateChanged(winrt::TypedEventHandler<winrt::ScrollingView, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollingViewProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::ViewChanged(winrt::TypedEventHandler<winrt::ScrollingView, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollingViewProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::ZoomAnimationStarting(winrt::TypedEventHandler<winrt::ScrollingView, winrt::ScrollingZoomAnimationStartingEventArgs> const& value)
{
    return m_zoomAnimationStartingEventSource.add(value);
}

void ScrollingViewProperties::ZoomAnimationStarting(winrt::event_token const& token)
{
    m_zoomAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollingViewProperties::ZoomCompleted(winrt::TypedEventHandler<winrt::ScrollingView, winrt::ScrollingZoomCompletedEventArgs> const& value)
{
    return m_zoomCompletedEventSource.add(value);
}

void ScrollingViewProperties::ZoomCompleted(winrt::event_token const& token)
{
    m_zoomCompletedEventSource.remove(token);
}