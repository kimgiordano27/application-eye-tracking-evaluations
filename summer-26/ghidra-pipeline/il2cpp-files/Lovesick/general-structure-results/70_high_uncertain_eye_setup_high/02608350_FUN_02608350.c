/*
FUNCTION_NAME: FUN_02608350
ENTRY_POINT: 02608350
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02608350(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_037833c4 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
    DAT_037833c4 = 1;
  }
  uVar2 = FUN_0268fd10(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = thunk_FUN_00d6225c(uVar3,*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                            );
  *(undefined8 *)(param_1 + 0x28) = uVar2;
                    /* try { // try from 026083cc to 027083f3 has its CatchHandler @ 0260851c */
  thunk_FUN_00d6225c(uVar3,*(undefined8 *)puVar1);
  return;
}


