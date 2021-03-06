/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, NSDictionary;

@interface ML3TrackImporter : NSObject  {
    NSDictionary *_nameOrders;
    ML3MusicLibrary *_library;
    BOOL _updateSmartPlaylists;
}

@property(retain) NSDictionary * nameOrders;
@property BOOL updateSmartPlaylists;


- (void)setUpdateSmartPlaylists:(BOOL)arg1;
- (BOOL)updateSmartPlaylists;
- (void)setNameOrders:(id)arg1;
- (BOOL)updateTrack:(id)arg1 withImportTrack:(id)arg2;
- (void)importTrack:(id)arg1 withCompletionBlock:(id)arg2;
- (id)_addStoreLinkForImportTrackProperties:(id)arg1;
- (id)_addGenreForImportTrackProperties:(id)arg1;
- (id)_addComposerForImportTrackProperties:(id)arg1;
- (id)_addArtistForImportTrackProperties:(id)arg1;
- (id)_addAlbumForImportTrackProperties:(id)arg1;
- (id)_addAlbumArtistForImportTrackProperties:(id)arg1;
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)arg1;
- (id)_newTrackPropertiesByProcessingImportTrack:(id)arg1 insertStringsIntoSortMap:(BOOL)arg2;
- (id)nameOrders;
- (id)initWithMusicLibrary:(id)arg1;
- (void).cxx_destruct;

@end
