/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;

@interface PBDataReader : NSObject  {
    unsigned int _pos;
    BOOL _error;
    const char *_bytes;
    NSData *_data;
    unsigned int _length;
}

@property unsigned int length;
@property unsigned int position;


- (id)readString;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)arg1;
- (void)recall:(const struct { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)mark:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (id)readData;
- (BOOL)readBOOL;
- (long long)readSfixed64;
- (int)readSfixed32;
- (unsigned long long)readFixed64;
- (unsigned int)readFixed32;
- (long long)readSint64;
- (int)readSint32;
- (unsigned long long)readUint64;
- (unsigned int)readUint32;
- (long long)readInt64;
- (int)readInt32;
- (float)readFloat;
- (double)readDouble;
- (long long)readVarInt;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (unsigned long long)readBigEndianFixed64;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (BOOL)seekToOffset:(unsigned int)arg1;
- (void)updateData:(id)arg1;
- (BOOL)hasMoreData;
- (BOOL)hasError;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned int)offset;
- (void)setPosition:(unsigned int)arg1;
- (unsigned int)length;
- (id)data;
- (void)setLength:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)position;
- (id)initWithData:(id)arg1;
- (BOOL)isAtEnd;

@end
