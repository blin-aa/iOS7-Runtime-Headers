/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoControllerProtocol>, UIView, UILabel, NSString, MPInlineAudioTransportControls;

@interface MPInlineAudioOverlay : MPPlaybackControlsView  {
    <MPVideoControllerProtocol> *_videoViewController;
    int _style;
    UIView *_backgroundView;
    MPInlineAudioTransportControls *_transportControls;
    UILabel *_streamingLabel;
    NSString *_playbackErrorDescription;
    UILabel *_playbackErrorDescriptionLabel;
}

@property <MPVideoControllerProtocol> * videoViewController;
@property int style;
@property(copy) NSString * playbackErrorDescription;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_updateVisiblePartsForAvailableRoutes;
- (id)newProgressIndicator;
- (void)reloadView;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (id)videoViewController;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (id)playbackErrorDescription;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end
