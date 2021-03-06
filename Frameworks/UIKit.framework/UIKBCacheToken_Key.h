/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken  {
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 16; 
        } styling; 
        int intValue; 
    } _style;
    NSString *_cacheDisplayString;
    int _displayTypeHint;
    int _displayRowHint;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _state;
    int _clipCorners;
    BOOL _usesInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _displayInsets;
}

+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2;

- (struct CGSize { float x1; float x2; })size;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)string;
- (void)dealloc;
- (id)_stringWithAdditionalValues:(id)arg1;
- (id)_initWithKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (void)setDisplayHint:(int)arg1;
- (int)displayHint;
- (void)setRowHint:(int)arg1;
- (int)rowHint;
- (id)stringForRenderFlags:(int)arg1 lightKeyboard:(BOOL)arg2;
- (BOOL)hasKey;

@end
