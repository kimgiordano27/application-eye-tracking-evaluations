/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking2
ENTRY_POINT: 07484418
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopFaceTracking2
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  long lVar1;
  long in_x9;
  long in_x10;
  float in_w11;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  uVar4 = param_4._0_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    if (in_x9 + -8 == lVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550(uVar3,param_2._0_4_,uVar4);
    }
    lVar2 = *(long *)(in_x10 + 0x28 + lVar1);
    if (lVar2 == 0) break;
    if (in_w11 < *(float *)(lVar2 + 0x18)) {
      uVar3 = CONCAT44((param_2._4_4_ + (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20)) * 0.5
                       ,(param_2._0_4_ + (float)*(undefined8 *)(lVar2 + 0x20)) * 0.5);
      uVar4 = (ulong)(uint)((param_4._0_4_ + *(float *)(lVar2 + 0x28)) * 0.5);
      in_w11 = *(float *)(lVar2 + 0x18);
    }
    lVar1 = lVar1 + 8;
    if (lVar1 == 0x20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


