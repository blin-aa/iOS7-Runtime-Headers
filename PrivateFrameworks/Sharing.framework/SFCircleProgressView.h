/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class UIColor;

@interface SFCircleProgressView : UIView  {
}

@property int progressStartPoint;
@property(readonly) UIColor * progressColor;
@property float progressLineWidth;
@property BOOL showProgressTray;
@property float progress;

+ (Class)layerClass;

- (void)animateProgressCompletedWithCompletion:(id)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (float)progressPresentationValue;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(id)arg4;
- (BOOL)showProgressTray;
- (float)progressLineWidth;
- (id)progressColor;
- (int)progressStartPoint;
- (void)setShowProgressTray:(BOOL)arg1;
- (void)setProgressLineWidth:(float)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressStartPoint:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)progress;
- (void)setProgress:(float)arg1;
- (void)layoutSubviews;

@end
