/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIButton, <PlacesMapViewDelegateDetailsDelegate>, PLPlaces, NSMutableArray, PLAnnotationPen;

@interface PLPlacesMapViewDelegate : NSObject <MKMapViewDelegate> {
    BOOL _didFirstAdjustment;
    UIButton *_moreDetailsButton;
    PLPlaces *_places;
    NSMutableArray *_delegatePlaces;
    unsigned int _activeDeletes;
    unsigned int _activeSplits;
    PLAnnotationPen *_pendingAdds;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _previousRegion;
    float _previousZoomLevel;
    <PlacesMapViewDelegateDetailsDelegate> *_detailsDelegate;
    BOOL _displayMoreDetails;
}

@property BOOL displayMoreDetails;


- (BOOL)displayMoreDetails;
- (void)_updatePlaces:(id)arg1 inMapView:(id)arg2;
- (void)_updateVisibleAnnotationsAfterUpdatingMapView:(id)arg1;
- (BOOL)_displaysAlbumPosterOnLeft;
- (BOOL)_displayMoreDetailsButton;
- (id)_createAnnotationViewWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)_updateAnnotationsInMapView:(id)arg1;
- (void)_setupMapViewCenteredOnAllPlaces:(id)arg1;
- (void)setDisplayMoreDetails:(BOOL)arg1;
- (void)_flushAnnotation:(id)arg1 fromMap:(id)arg2;
- (id)initWithPlaces:(id)arg1;
- (void)updateMapView:(id)arg1 WithAddedAssets:(id)arg2 deletedAssets:(id)arg3 updatedAssets:(id)arg4;
- (void)fullResetOfMapView:(id)arg1;
- (void)setDetailsDelegate:(id)arg1;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;

@end
