//
//  GetAddressBookResponse.h
//  ProtocolBuilder
//
//  Created by Pichaya Srifar on 9/1/11.
//  Copyright 2011 Vervata. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseData.h"

@interface GetAddressBookResponse : ResponseData {
	NSArray *addressBookList;
}
@property (nonatomic, retain) NSArray *addressBookList;

@end