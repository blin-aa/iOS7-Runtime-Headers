/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class _GKBubbleFlowPseudoModalViewController;

@interface _GKBubbleFlowOnDemandFormSheetViewController : GKBubbleFlowRootViewController  {
    BOOL _falseDismissSkippedOrCompleted;
    _GKBubbleFlowPseudoModalViewController *_pseudoModalViewController;
}

@property(retain) _GKBubbleFlowPseudoModalViewController * pseudoModalViewController;
@property BOOL falseDismissSkippedOrCompleted;


- (void)setFalseDismissSkippedOrCompleted:(BOOL)arg1;
- (BOOL)falseDismissSkippedOrCompleted;
- (void)setPseudoModalViewController:(id)arg1;
- (id)pseudoModalViewController;
- (BOOL)_obscuringContentUnderneath;
- (void)_cleanUpOurPresentedModalSetupRootViewControllerIfNecessaryAnimated:(BOOL)arg1;
- (void)_ensureWeHaveAPresentedModalSetupRootViewControllerToPresent:(id)arg1 andThen:(id)arg2 animated:(BOOL)arg3;
- (BOOL)isCoveringContentUnderneath;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)viewDidLoad;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;

@end