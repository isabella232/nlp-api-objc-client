#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranNerSegmentAnnotation.h"
#import "SystranErrorResponse.h"


@protocol SystranNerExtractAnnotationsResponse
@end

@interface SystranNerExtractAnnotationsResponse : SystranObject

/* Error at request level [optional]
 */
@property(nonatomic) SystranErrorResponse* error;
/* Entities per text segment 
 */
@property(nonatomic) NSArray<SystranNerSegmentAnnotation>* annotations;

@end