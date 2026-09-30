/*
FUNCTION_NAME: FUN_02787f34
ENTRY_POINT: 02787f34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02787f34(long param_1)

{
  if ((DAT_03788680 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Span<Vector2Int>__ctor__);
    thunk_FUN_00d48444(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    thunk_FUN_00d48444(IronMaidenSnowGlobeController_<SnowGlobeSequence>d__11_TypeInfo);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
                      );
    DAT_03788680 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_01342a94((long *)(param_1 + 0x20),
                 *(undefined8 *)Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_01342a94((long *)(param_1 + 0x30),*(undefined8 *)Method_System_Span<Vector2Int>__ctor__);
    return;
  }
  return;
}


