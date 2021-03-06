/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView, <_UIQueuingScrollViewDataSource>, <_UIQueuingScrollViewDelegate>, NSMutableArray;

@interface _UIQueuingScrollView : UIScrollView  {
    <_UIQueuingScrollViewDelegate> *_qDelegate;
    <_UIQueuingScrollViewDataSource> *_qDataSource;
    int _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    float _pageSpacing;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    BOOL _manualScrollInProgress;
    struct { 
        unsigned int delegateInterestedInPendingScrolls : 1; 
        unsigned int delegateInterestedInCommittedScrolls : 1; 
        unsigned int delegateInterestedInCompletedScrolls : 1; 
        unsigned int delegateInterestedInBailedOutScrolls : 1; 
        unsigned int delegateInterestedFinishedScrolling : 1; 
        unsigned int delegateCanVetoSubviewLayout : 1; 
        unsigned int dataSourceSuppliesBeforeView : 1; 
        unsigned int dataSourceSuppliesAfterView : 1; 
        unsigned int dataSourceInterestedInFlushedViews : 1; 
    } _delegateFlags;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _disabledScrollingRegion;
}

@property(readonly) UIView * visibleView;
@property <_UIQueuingScrollViewDelegate> * qDelegate;
@property <_UIQueuingScrollViewDataSource> * qDataSource;
@property float pageSpacing;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } disabledScrollingRegion;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)qDataSource;
- (id)qDelegate;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_didEndScroll:(BOOL)arg1;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(int)arg3 canComplete:(BOOL)arg4;
- (BOOL)_isDeceleratingInOppositionToNavigationDirection:(int)arg1;
- (int)_navigationDirectionFromCurrentOffset;
- (void)_enqueueAnimatedScrollInDirection:(int)arg1 withView:(id)arg2 completion:(id)arg3;
- (void)_notifyDelegateDidCommitManualScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 canComplete:(BOOL)arg6;
- (void)_notifyDelegateWillManuallyScroll:(BOOL)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(BOOL)arg4;
- (void)_enqueueCompletionState:(id)arg1;
- (void)_notifyDelegateDidEndManualScroll:(BOOL)arg1 toRevealView:(id)arg2 direction:(int)arg3 animated:(BOOL)arg4 didFinish:(BOOL)arg5 didComplete:(BOOL)arg6;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(BOOL)arg2 didComplete:(BOOL)arg3;
- (void)_replaceViews:(id)arg1 updatingContents:(BOOL)arg2 adjustContentInsets:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_requestViewForIndex:(int)arg1;
- (id)_dequeueViewForIndex:(int)arg1;
- (id)_viewAfterView:(id)arg1;
- (id)_viewBeforeView:(id)arg1;
- (void)_setWrappedViewAtIndex:(int)arg1 withView:(id)arg2;
- (void)_flushView:(id)arg1 animated:(BOOL)arg2;
- (id)_viewBefore:(BOOL)arg1 view:(id)arg2;
- (id)_viewAtIndex:(int)arg1 loadingIfNecessary:(BOOL)arg2 updatingContents:(BOOL)arg3 animated:(BOOL)arg4;
- (BOOL)_dataSourceProvidesViews;
- (void)_adjustContentInsets;
- (void)_didEndProgrammaticScroll;
- (void)_didEndDraggingManualScroll;
- (void)_didEndManualScroll;
- (void)_didScrollWithAnimation:(BOOL)arg1 force:(BOOL)arg2;
- (int)_navigationDirectionForActiveScroll:(BOOL)arg1;
- (BOOL)_isScrollInProgress:(BOOL)arg1;
- (void)_boundsDidChangeToSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isManualScrollInProgress;
- (void)setView:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (BOOL)isPreviousScrollCompatibleWithScrollInDirection:(int)arg1;
- (id)visibleView;
- (void)setDisabledScrollingRegion:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })disabledScrollingRegion;
- (void)_invalidateOffscreenViews;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setQDataSource:(id)arg1;
- (void)setQDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 navigationOrientation:(int)arg2;
- (float)pageSpacing;
- (void)setPageSpacing:(float)arg1;
- (id)_visibleView;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDecelerating;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned int)_abuttedPagingEdges;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)layoutSubviews;

@end
