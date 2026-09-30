/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_SetClientColorDesc
ENTRY_POINT: 07caa750
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc(undefined1 param_1 [16],float param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float unaff_s8;
  
  param_2 = unaff_s8 + param_2;
  if (param_2 < *(float *)(unaff_x19 + 0x2c) - *(float *)(unaff_x19 + 0x34)) {
    return;
  }
  lVar1 = FUN_0952a094();
  if (lVar1 != 0) {
    FUN_0953a23c(lVar1,0);
    if (*(float *)(unaff_x19 + 0x2c) + *(float *)(unaff_x19 + 0x34) < unaff_s8 + param_2) {
      return;
    }
    lVar1 = FUN_0952a094();
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      FUN_0953b770(unaff_s8 * *(float *)(lVar2 + 0x18),unaff_s8 * *(float *)(lVar2 + 0x1c),
                   unaff_s8 * *(float *)(lVar2 + 0x20),lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


