/*
FUNCTION_NAME: FUN_0360dc74
ENTRY_POINT: 0360dc74
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_0360dc74(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_StreamWriter_<FlushAsyncInternal>d__74>__
  ;
  if ((DAT_0453806a & 1) == 0) {
                    /* try { // try from 0360dc90 to 0370dcab has its CatchHandler @ 0360de2c */
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_StreamWriter_<FlushAsyncInternal>d__74>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
                    /* try { // try from 0360dcac to 0370dcaf has its CatchHandler @ 0360ddb8 */
    DAT_0453806a = 1;
  }
                    /* try { // try from 0360dcb0 to 0370dcb3 has its CatchHandler @ 0360ddb4 */
                    /* try { // try from 0360dcb4 to 0370dcb7 has its CatchHandler @ 0360ddb0 */
                    /* try { // try from 0360dcb8 to 0370dcbb has its CatchHandler @ 0360ddac */
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0360dcbc to 0370dcbf has its CatchHandler @ 0360dda4 */
  if (lVar2 == 0) {
                    /* try { // try from 0360dcc0 to 0370dcc3 has its CatchHandler @ 0360dd98 */
                    /* try { // try from 0360dcc4 to 0370dccb has its CatchHandler @ 0360dd90 */
    uVar3 = FUN_01c5d2fc(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                         ,0x20);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
    lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  }
  return lVar2;
}


