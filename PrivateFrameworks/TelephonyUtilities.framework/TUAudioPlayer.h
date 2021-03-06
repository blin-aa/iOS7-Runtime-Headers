/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class <TUAudioPlayerDelegateProtocol>;

@interface TUAudioPlayer : NSObject  {
    <TUAudioPlayerDelegateProtocol> *_delegate;
}

@property <TUAudioPlayerDelegateProtocol> * delegate;
@property(readonly) BOOL playingSound;


- (BOOL)playingSound;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3;
- (void)playSelectedSound;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)stop;

@end
