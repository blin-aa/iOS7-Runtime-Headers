/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableData, NSData;

@interface SUDataBufferConsumer : NSObject <SUCollectingDataConsumer> {
    NSMutableData *_buffer;
}

@property(readonly) NSData * consumedData;


- (int)consumeData:(id)arg1;
- (id)consumedData;
- (id)init;
- (void)finish;

@end
