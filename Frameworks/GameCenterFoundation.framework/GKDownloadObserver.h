/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class SSDownloadManager;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {
    SSDownloadManager *_downloadManager;
}

@property(retain) SSDownloadManager * downloadManager;

+ (id)sharedObserver;

- (id)downloadManager;
- (void)setDownloadManager:(id)arg1;
- (BOOL)isDownloadingGame:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;

@end
