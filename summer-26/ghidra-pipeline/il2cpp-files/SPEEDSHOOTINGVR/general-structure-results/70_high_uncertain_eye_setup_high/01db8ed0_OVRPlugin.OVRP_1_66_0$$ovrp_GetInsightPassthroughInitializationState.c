/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 01db8ed0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    *(undefined1 *)(unaff_x20 + 0xa3f) = 1;
  }
  if ((*(long *)(param_2 + 0x30) != 0) && (uVar2 = FUN_01db71b8(param_2), (uVar2 >> 2 & 1) != 0)) {
    if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = FUN_01db71b8();
    puVar1 = PTR_DAT_0234bca8;
    if ((uVar2 >> 3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0234bca8 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if (DAT_0247d10e == '\0') {
        FUN_00fdc2e4(PTR_DAT_0234bca8);
        DAT_0247d10e = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar3 = *(long *)puVar1;
      }
      plVar4 = (long *)FUN_00fdc2fc(lVar3);
      if (*plVar4 == *(long *)(param_2 + 0x30)) {
        uVar2 = *(uint *)(param_2 + 0x38);
        thunk_FUN_00ffe618();
        thunk_FUN_00ffe618();
        *(uint *)(param_2 + 0x38) = uVar2 | 0x80000;
      }
    }
  }
  return;
}


