/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTable, ESDContainer, OABWriterState;

@interface OABWTable : NSObject  {
    OADTable *mSrcTable;
    ESDContainer *mTgtTable;
    OABWriterState *mState;
    long mRowCount;
    long mColumnCount;
    struct vector<long, std::__1::allocator<long> > { long *x1; long *x2; struct __compressed_pair<long *, std::__1::allocator<long> > { long *x_3_1_1; } x3; } *mpXCoords;
    struct vector<long, std::__1::allocator<long> > { long *x1; long *x2; struct __compressed_pair<long *, std::__1::allocator<long> > { long *x_3_1_1; } x3; } *mpYCoords;
}


- (void)mapVectors;
- (void)mapCells;
- (void)mapCoordinates;
- (void)mapGlobals;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;
- (void)map;
- (void)dealloc;

@end
