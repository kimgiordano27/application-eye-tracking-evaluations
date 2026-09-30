/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_SetInsightPassthroughStyle
ENTRY_POINT: 02c54000
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_63_0__ovrp_SetInsightPassthroughStyle(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int in_w8;
  int in_w9;
  
  iVar1 = in_w8 + -1;
  *(int *)(param_1 + 0x38) = iVar1;
  *(int *)(param_1 + 0x3c) = in_w9 + 1;
  if (-1 < iVar1) {
    if (iVar1 != 0x7fffffff) {
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar2 = FUN_02a4b568(*(long *)(param_1 + 0x30),in_w9 + 1,0);
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  return 0;
}


