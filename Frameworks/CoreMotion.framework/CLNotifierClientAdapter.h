/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {
    struct CLNotifierClientBase { int (**x1)(); } *_client;
}


- (void)onNotification:(int)arg1 withData:(id)arg2;
- (id)initWithClient:(struct CLNotifierClientBase { int (**x1)(); }*)arg1;
- (id)init;
- (id)debugDescription;
- (void)invalidate;

@end