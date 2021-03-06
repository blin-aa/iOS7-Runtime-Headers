/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData *_occurrenceRouteID;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData *_switchedToRouteID;
    NSString *_synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int occurrenceResponseIndex : 1; 
        unsigned int occurrenceStepIndex : 1; 
        unsigned int switchedToResponseIndex : 1; 
        unsigned int synthesizedStepManeuverType : 1; 
        unsigned int type : 1; 
    } _has;
}

@property BOOL hasType;
@property int type;
@property BOOL hasOccurrenceResponseIndex;
@property unsigned int occurrenceResponseIndex;
@property(readonly) BOOL hasOccurrenceRouteID;
@property(retain) NSData * occurrenceRouteID;
@property BOOL hasOccurrenceStepIndex;
@property unsigned int occurrenceStepIndex;
@property(readonly) BOOL hasOccurrenceLatLng;
@property(retain) GEOLatLng * occurrenceLatLng;
@property BOOL hasSwitchedToResponseIndex;
@property unsigned int switchedToResponseIndex;
@property(readonly) BOOL hasSwitchedToRouteID;
@property(retain) NSData * switchedToRouteID;
@property BOOL hasSynthesizedStepManeuverType;
@property int synthesizedStepManeuverType;
@property(readonly) BOOL hasSynthesizedStepInstructions;
@property(retain) NSString * synthesizedStepInstructions;
@property(readonly) BOOL hasErrorDomain;
@property(retain) NSString * errorDomain;
@property BOOL hasErrorCode;
@property long long errorCode;


- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasSynthesizedStepManeuverType:(BOOL)arg1;
- (void)setHasSwitchedToResponseIndex:(BOOL)arg1;
- (void)setHasOccurrenceStepIndex:(BOOL)arg1;
- (void)setHasOccurrenceResponseIndex:(BOOL)arg1;
- (BOOL)hasErrorCode;
- (id)errorDomain;
- (BOOL)hasErrorDomain;
- (id)synthesizedStepInstructions;
- (BOOL)hasSynthesizedStepInstructions;
- (void)setSynthesizedStepManeuverType:(int)arg1;
- (int)synthesizedStepManeuverType;
- (BOOL)hasSynthesizedStepManeuverType;
- (id)switchedToRouteID;
- (BOOL)hasSwitchedToRouteID;
- (void)setSwitchedToResponseIndex:(unsigned int)arg1;
- (unsigned int)switchedToResponseIndex;
- (BOOL)hasSwitchedToResponseIndex;
- (id)occurrenceLatLng;
- (BOOL)hasOccurrenceLatLng;
- (void)setOccurrenceStepIndex:(unsigned int)arg1;
- (unsigned int)occurrenceStepIndex;
- (BOOL)hasOccurrenceStepIndex;
- (id)occurrenceRouteID;
- (BOOL)hasOccurrenceRouteID;
- (void)setOccurrenceResponseIndex:(unsigned int)arg1;
- (unsigned int)occurrenceResponseIndex;
- (BOOL)hasOccurrenceResponseIndex;
- (void)setErrorDomain:(id)arg1;
- (void)setSynthesizedStepInstructions:(id)arg1;
- (void)setSwitchedToRouteID:(id)arg1;
- (void)setOccurrenceLatLng:(id)arg1;
- (void)setOccurrenceRouteID:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (BOOL)hasType;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (long long)errorCode;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (id)dictionaryRepresentation;

@end
