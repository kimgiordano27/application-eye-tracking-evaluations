/*
FUNCTION_NAME: FUN_068a0d04
ENTRY_POINT: 068a0d04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_068a0d04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 068a0d08 to 069a0d0f has its CatchHandler @ 068a0e94 */
  if ((DAT_07559092 & 1) == 0) {
    FUN_03188a78(OVRManager_<>c_TypeInfo);
                    /* try { // try from 068a0d30 to 069a0d33 has its CatchHandler @ 068a0d4c */
    FUN_03188a78(OVRManager_CompositionMethod_TypeInfo);
                    /* try { // try from 068a0d38 to 069a0d3b has its CatchHandler @ 068a0d48 */
                    /* try { // try from 068a0d40 to 069a0d43 has its CatchHandler @ 068a0d4c */
    FUN_03188a78(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo);
                    /* try { // try from 068a0d44 to 069a0d67 has its CatchHandler @ 068a09b4 */
                    /* catch() { ... } // from try @ 068a0d38 with catch @ 068a0d48 */
                    /* catch() { ... } // from try @ 068a0d30 with catch @ 068a0d4c
                       catch() { ... } // from try @ 068a0d40 with catch @ 068a0d4c */
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16LiftedToNull_TypeInfo
                );
    FUN_03188a78(OVRManager_EventListener_TypeInfo);
    DAT_07559092 = 1;
  }
  puVar1 = 
  System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16LiftedToNull_TypeInfo;
                    /* try { // try from 068a0d68 to 069a0d7b has its CatchHandler @ 068a0dfc */
  FUN_06892ba8(param_1,0);
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (lVar3 = FUN_050718a8(*(long *)(param_1 + 0x90),
                           *(undefined8 *)OVRManager_EventListener_TypeInfo), lVar3 == 0)) {
    puVar2 = OVRManager_<>c_TypeInfo;
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRManager_CompositionMethod_TypeInfo);
    *(undefined2 *)(lVar3 + 0x10) = 0x101;
    *(undefined1 *)(lVar3 + 0x12) = 1;
    FUN_05971910(lVar3,0);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_068a0e28(uVar4,lVar3);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
  }
  puVar2 = System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_04fd75c0(param_1 + 0xb0,*(undefined8 *)puVar2);
  return;
}


