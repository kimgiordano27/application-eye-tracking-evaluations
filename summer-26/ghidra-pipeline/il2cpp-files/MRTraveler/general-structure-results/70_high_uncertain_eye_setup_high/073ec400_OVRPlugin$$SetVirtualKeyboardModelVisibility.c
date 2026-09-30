/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 073ec400
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetVirtualKeyboardModelVisibility(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long lVar1;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(in_x11 + 0x28);
  lVar1 = 0;
  uVar3 = param_2._0_8_;
  fVar4 = *(float *)(in_x11 + 0x20);
  while( true ) {
    if ((in_x9 & 0xffffffff) * 8 + -8 == lVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38(uVar3,param_2._0_4_,fVar4);
    }
    lVar2 = *(long *)(in_x10 + 0x28 + lVar1);
    if (lVar2 == 0) break;
    if (fVar5 < *(float *)(lVar2 + 0x28)) {
      uVar3 = CONCAT44((param_2._4_4_ + (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20)) * 0.5
                       ,(param_2._0_4_ + (float)*(undefined8 *)(lVar2 + 0x18)) * 0.5);
      fVar4 = (*(float *)(in_x11 + 0x20) + *(float *)(lVar2 + 0x20)) * 0.5;
      fVar5 = *(float *)(lVar2 + 0x28);
    }
    lVar1 = lVar1 + 8;
    if (lVar1 == 0x20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


