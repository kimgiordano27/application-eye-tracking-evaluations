/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 01d713c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticUpdateMixedRealityCapture(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x9;
  uint unaff_w23;
  undefined4 uStack000000000000000c;
  
  if (*(long *)(in_x9 + -8) != param_1) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14(param_1);
  }
  uVar3 = FUN_01d7811c(param_2,0,0);
  lVar2 = 0;
  if ((uVar3 & 1) == 0) {
    lVar2 = param_2;
  }
  if ((uVar3 & 1) == 0) {
    uStack000000000000000c = 1;
    if (lVar2 != 0) {
      uVar1 = unaff_w23 | 0x214;
      if ((unaff_w23 & 0xff) != 0) {
        uVar1 = unaff_w23;
      }
      FUN_01d862d8(lVar2,uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar4 = thunk_FUN_010303a8(PTR_DAT_02353b28);
  uVar4 = FUN_01d75474(uVar4,0);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar5 = thunk_FUN_010400dc();
  uVar6 = thunk_FUN_010303a8(PTR_DAT_023527d0);
  FUN_01c5e198(uVar5,uVar4,uVar6,0);
  uVar4 = thunk_FUN_010303a8(PTR_DAT_02358c88);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,uVar4);
}


