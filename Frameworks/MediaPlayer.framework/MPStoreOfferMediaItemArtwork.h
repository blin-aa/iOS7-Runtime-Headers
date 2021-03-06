/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSArray;

@interface MPStoreOfferMediaItemArtwork : MPMediaItemArtwork  {
    long long _itemPersistentID;
    NSArray *_screenshotDictionaries;
    NSArray *_itemArtworkDictionaries;
    NSArray *_containerArtworkDictionaries;
    unsigned int _hash;
    NSString *_cacheID;
}

@property(readonly) NSString * cacheID;


- (id)_bestImageURLForSize:(struct CGSize { float x1; float x2; })arg1 artworkDictionaries:(id)arg2;
- (id)_imageWithURL:(id)arg1;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;
- (id)cacheID;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 artworkCacheID:(id)arg2;
- (id)imageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize { float x1; float x2; })arg2 artworkCacheID:(id)arg3;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(int)arg2 artworkCacheID:(id)arg3;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasArtworkAvailable;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (unsigned int)hash;
- (void).cxx_destruct;

@end
