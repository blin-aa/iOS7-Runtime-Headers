/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebFixedPositionContent : NSObject  {
    struct WebFixedPositionContentData { id x1; struct HashMap<WTF::RetainPtr<CALayer>, WTF::OwnPtr<ViewportConstrainedLayerData>, WTF::PtrHash<WTF::RetainPtr<CALayer> >, WTF::HashTraits<WTF::RetainPtr<CALayer> >, WTF::HashTraits<WTF::OwnPtr<ViewportConstrainedLayerData> > > { struct HashTable<WTF::RetainPtr<CALayer>, WTF::KeyValuePair<WTF::RetainPtr<CALayer>, WTF::OwnPtr<ViewportConstrainedLayerData> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<CALayer>, WTF::OwnPtr<ViewportConstrainedLayerData> > >, WTF::PtrHash<WTF::RetainPtr<CALayer> >, WTF::HashMapValueTraits<WTF::HashTraits<WTF::RetainPtr<CALayer> >, WTF::HashTraits<WTF::OwnPtr<ViewportConstrainedLayerData> > >, WTF::HashTraits<WTF::RetainPtr<CALayer> > > { struct KeyValuePair<WTF::RetainPtr<CALayer>, WTF::OwnPtr<ViewportConstrainedLayerData> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; } *_private;
}


- (float)minimumOffsetFromFixedPositionLayersToAnchorEdge:(int)arg1 ofRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inLayer:(id)arg3;
- (id)initWithWebView:(id)arg1;
- (void)setViewportConstrainedLayers:(struct HashMap<CALayer *, WTF::OwnPtr<WebCore::ViewportConstraints>, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<WTF::OwnPtr<WebCore::ViewportConstraints> > > { struct HashTable<CALayer *, WTF::KeyValuePair<CALayer *, WTF::OwnPtr<WebCore::ViewportConstraints> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<CALayer *, WTF::OwnPtr<WebCore::ViewportConstraints> > >, WTF::PtrHash<CALayer *>, WTF::HashMapValueTraits<WTF::HashTraits<CALayer *>, WTF::HashTraits<WTF::OwnPtr<WebCore::ViewportConstraints> > >, WTF::HashTraits<CALayer *> > { struct KeyValuePair<CALayer *, WTF::OwnPtr<WebCore::ViewportConstraints> > {} *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; }*)arg1 stickyContainerMap:(struct HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> > { struct HashTable<CALayer *, WTF::KeyValuePair<CALayer *, CALayer *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<CALayer *, CALayer *> >, WTF::PtrHash<CALayer *>, WTF::HashMapValueTraits<WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >, WTF::HashTraits<CALayer *> > { struct KeyValuePair<CALayer *, CALayer *> {} *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; }*)arg2;
- (void)dealloc;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint { float x1; float x2; })arg2;
- (void)didFinishScrollingOrZooming;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasFixedOrStickyPositionLayers;

@end
