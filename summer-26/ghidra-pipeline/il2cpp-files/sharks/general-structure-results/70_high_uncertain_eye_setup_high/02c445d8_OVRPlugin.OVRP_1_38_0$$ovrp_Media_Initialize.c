/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 02c445d8
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


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  undefined8 uVar5;
  
  uVar1 = FUN_02c40bec();
  lVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380be80);
  FUN_02c31520(lVar2,uVar1 & 1,0);
  thunk_FUN_0181f594();
  lVar3 = FUN_01818258();
  if (lVar3 == 0) {
    if (((uVar1 & 1) == 0) && (uVar4 = FUN_02c40bec(), (uVar4 & 1) != 0)) {
      if (lVar2 == 0) goto LAB_02c4466c;
      FUN_02c31860(lVar2,0);
    }
  }
  else {
    if (lVar2 == 0) {
LAB_02c4466c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02c320ac(lVar2,0);
  }
  uVar5 = *unaff_x19;
  thunk_FUN_0181f594();
  return uVar5;
}


