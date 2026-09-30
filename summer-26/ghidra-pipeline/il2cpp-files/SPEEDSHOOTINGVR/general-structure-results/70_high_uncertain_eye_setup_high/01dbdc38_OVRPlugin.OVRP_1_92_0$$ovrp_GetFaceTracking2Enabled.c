/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Enabled
ENTRY_POINT: 01dbdc38
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Enabled(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  int unaff_w23;
  
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02350790);
    FUN_0131039c(lVar3,uVar4,*(undefined8 *)PTR_DAT_0235a8f0,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    lVar1 = thunk_FUN_0106e12c(plVar2,lVar3);
  }
  lVar1 = FUN_01dbde94(lVar1,lVar3,*(undefined8 *)(unaff_x19 + 0x18),
                       *(undefined8 *)(unaff_x19 + 0x20));
  if (unaff_w23 != 0) {
    FUN_01dbd1a8(lVar1,0);
    return;
  }
  if (lVar1 != 0) {
    FUN_01db7f40(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


