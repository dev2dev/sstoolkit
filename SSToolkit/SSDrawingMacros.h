//
//  SSDrawingMacros.h
//  SSToolkit
//
//  Created by Sam Soffes on 4/22/10.
//  Copyright 2010 Sam Soffes. All rights reserved.
//

#ifndef SSDRAWINGMACROS
#define SSDRAWINGMACROS

#define DEGREES_TO_RADIANS(d) ((d) * 0.0174532925199432958)
#define RADIANS_TO_DEGREES(r) ((r) * 57.29577951308232)

#endif

extern CGRect CGRectSetX(CGRect rect, CGFloat x);

extern CGRect CGRectSetY(CGRect rect, CGFloat y);

extern CGRect CGRectSetWidth(CGRect rect, CGFloat width);

extern CGRect CGRectSetHeight(CGRect rect, CGFloat height);

extern CGRect CGRectSetOrigin(CGRect rect, CGSize size);

extern CGRect CGRectSetSize(CGRect rect, CGPoint origin);

extern CGRect CGRectSetZeroOrigin(CGRect rect);

extern CGRect CGRectSetZeroSize(CGRect rect);
