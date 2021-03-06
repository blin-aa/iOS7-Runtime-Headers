/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUGradient;

@interface SUScriptGradient : SUScriptObject  {
    SUGradient *_nativeGradient;
}

@property(readonly) NSString * type;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)patternColorWithWidth:(float)arg1 height:(float)arg2 opaque:(BOOL)arg3;
- (id)initRadialGraidentWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (id)initLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (void)addColorStopWithOffset:(float)arg1 color:(id)arg2;
- (id)copyNativeGradient;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)initWithGradient:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)type;

@end
