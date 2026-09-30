/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetCurrentInteractionProfileName
ENTRY_POINT: 01dbede8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0__ovrp_GetCurrentInteractionProfileName(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (unaff_w24 == 0) {
    if (unaff_x21 == 0) goto LAB_01dbee7c;
  }
  else {
    lVar1 = thunk_FUN_0103ffe0();
    if (lVar1 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar2 = thunk_FUN_010400dc();
      uVar3 = thunk_FUN_010303a8(PTR_DAT_0235a9c8);
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a9d0);
      FUN_01c5e198(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_010303a8(PTR_DAT_0235a9d8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar2,uVar3);
    }
    if (unaff_x21 == 0) {
LAB_01dbee7c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_018987d4();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_01dbf024();
    return;
  }
  return;
}


