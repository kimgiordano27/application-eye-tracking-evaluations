/*
FUNCTION_NAME: FUN_0360dde0
ENTRY_POINT: 0360dde0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_0360dde0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushAsyncInternal>d__38>__
  ;
                    /* try { // try from 0360dde8 to 0370ddeb has its CatchHandler @ 0360de00 */
  if ((DAT_0453806d & 1) == 0) {
                    /* catch() { ... } // from try @ 0360dde8 with catch @ 0360de00 */
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushAsyncInternal>d__38>__
                );
                    /* try { // try from 0360de0c to 0370de17 has its CatchHandler @ 0360de2c */
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
                    /* try { // try from 0360de18 to 0370de23 has its CatchHandler @ 0360d528 */
    DAT_0453806d = 1;
  }
                    /* try { // try from 0360de24 to 0370de2b has its CatchHandler @ 0360de2c */
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 0360dc90 with catch @ 0360de2c
                       catch() { ... } // from try @ 0360dd08 with catch @ 0360de2c
                       catch() { ... } // from try @ 0360de0c with catch @ 0360de2c
                       catch() { ... } // from try @ 0360de24 with catch @ 0360de2c */
    uVar3 = FUN_01c5d2fc(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                         ,0x20);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
    lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  }
  return lVar2;
}


