#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SalientCoreKotlinCancellationException, SalientCoreKotlinThrowable, SalientCoreKotlinArray<T>, SalientCoreKotlinException, SalientCoreKotlinRuntimeException, SalientCoreKotlinIllegalStateException, SalientCoreKotlinx_coroutines_coreAtomicDesc, SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SalientCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, SalientCoreKotlinx_coroutines_coreOpDescriptor, SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode, SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol SalientCoreKotlinx_coroutines_coreJob, SalientCoreKotlinCoroutineContext, SalientCoreKotlinSuspendFunction1, SalientCoreKotlinx_coroutines_coreStateFlow, SalientCoreKotlinx_coroutines_coreChildHandle, SalientCoreKotlinx_coroutines_coreChildJob, SalientCoreKotlinx_coroutines_coreDisposableHandle, SalientCoreKotlinSequence, SalientCoreKotlinx_coroutines_coreSelectClause0, SalientCoreKotlinCoroutineContextKey, SalientCoreKotlinCoroutineContextElement, SalientCoreKotlinFunction, SalientCoreKotlinx_coroutines_coreFlowCollector, SalientCoreKotlinx_coroutines_coreFlow, SalientCoreKotlinx_coroutines_coreSharedFlow, SalientCoreKotlinx_coroutines_coreParentJob, SalientCoreKotlinIterator, SalientCoreKotlinx_coroutines_coreSelectInstance, SalientCoreKotlinSuspendFunction0, SalientCoreKotlinContinuation;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SalientCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SalientCoreBase (SalientCoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SalientCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SalientCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSalientCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SalientCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SalientCoreByte : SalientCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SalientCoreUByte : SalientCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SalientCoreShort : SalientCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SalientCoreUShort : SalientCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SalientCoreInt : SalientCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SalientCoreUInt : SalientCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SalientCoreLong : SalientCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SalientCoreULong : SalientCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SalientCoreFloat : SalientCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SalientCoreDouble : SalientCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SalientCoreBoolean : SalientCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Action")))
@protocol SalientCoreAction
@required
@end

__attribute__((swift_name("State")))
@protocol SalientCoreState
@required
@end

__attribute__((swift_name("ViewModel")))
@interface SalientCoreViewModel<S, A> : SalientCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (S)initialState __attribute__((swift_name("initialState()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<SalientCoreKotlinx_coroutines_coreJob>)launchContext:(id<SalientCoreKotlinCoroutineContext>)context block:(id<SalientCoreKotlinSuspendFunction1>)block __attribute__((swift_name("launch(context:block:)")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onViewActionAction:(A)action __attribute__((swift_name("onViewAction(action:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)updateStateTransform:(S (^)(S))transform __attribute__((swift_name("updateState(transform:)")));
@property (readonly) S currentState __attribute__((swift_name("currentState")));
@property (readonly) id<SalientCoreKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SalientCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SalientCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SalientCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<SalientCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SalientCoreKotlinCoroutineContext>)minusKeyKey:(id<SalientCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SalientCoreKotlinCoroutineContext>)plusContext:(id<SalientCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SalientCoreKotlinCoroutineContextElement <SalientCoreKotlinCoroutineContext>
@required
@property (readonly) id<SalientCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SalientCoreKotlinx_coroutines_coreJob <SalientCoreKotlinCoroutineContextElement>
@required
- (id<SalientCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SalientCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SalientCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SalientCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SalientCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SalientCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SalientCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SalientCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SalientCoreKotlinx_coroutines_coreJob>)plusOther:(id<SalientCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SalientCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SalientCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SalientCoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SalientCoreKotlinSuspendFunction1 <SalientCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SalientCoreKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SalientCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SalientCoreKotlinx_coroutines_coreSharedFlow <SalientCoreKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SalientCoreKotlinx_coroutines_coreStateFlow <SalientCoreKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SalientCoreKotlinThrowable : SalientCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SalientCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SalientCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SalientCoreKotlinException : SalientCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SalientCoreKotlinRuntimeException : SalientCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SalientCoreKotlinIllegalStateException : SalientCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SalientCoreKotlinCancellationException : SalientCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SalientCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SalientCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SalientCoreKotlinx_coroutines_coreChildHandle <SalientCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SalientCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SalientCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SalientCoreKotlinx_coroutines_coreChildJob <SalientCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SalientCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SalientCoreKotlinSequence
@required
- (id<SalientCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SalientCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SalientCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<SalientCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SalientCoreKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SalientCoreKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SalientCoreKotlinArray<T> : SalientCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SalientCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SalientCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SalientCoreKotlinx_coroutines_coreParentJob <SalientCoreKotlinx_coroutines_coreJob>
@required
- (SalientCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SalientCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SalientCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SalientCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SalientCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SalientCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SalientCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SalientCoreKotlinSuspendFunction0 <SalientCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SalientCoreKotlinx_coroutines_coreAtomicDesc : SalientCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SalientCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SalientCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SalientCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SalientCoreKotlinx_coroutines_coreOpDescriptor : SalientCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SalientCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SalientCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SalientCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SalientCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SalientCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SalientCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SalientCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : SalientCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SalientCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode : SalientCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SalientCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SalientCoreBoolean *(^)(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SalientCoreBoolean *(^)(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SalientCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SalientCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SalientCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SalientCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SalientCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SalientCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SalientCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SalientCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SalientCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
