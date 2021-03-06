/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIColorScheme, NSString, SKUISegmentedControl;

@interface SKUIPillsControl : UIControl  {
    SKUIColorScheme *_colorScheme;
    int _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_titles;
}

@property(copy) SKUIColorScheme * colorScheme;
@property int maximumNumberOfVisiblePills;
@property(copy) NSString * moreListTitle;
@property int selectedIndex;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectedPillFrame;
@property(copy) NSArray * titles;


- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (void)setMaximumNumberOfVisiblePills:(int)arg1;
- (int)maximumNumberOfVisiblePills;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectedPillFrame;
- (void)reloadPills;
- (void)_segmentedControlAction:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titles;
- (void)setSelectedIndex:(int)arg1;
- (int)selectedIndex;
- (void)setTitles:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
