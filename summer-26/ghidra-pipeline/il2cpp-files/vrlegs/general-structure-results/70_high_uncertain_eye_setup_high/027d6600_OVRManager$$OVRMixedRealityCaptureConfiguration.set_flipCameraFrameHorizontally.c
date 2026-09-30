/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally
ENTRY_POINT: 027d6600
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  uint uVar5;
  
  while( true ) {
    if (unaff_x23 >> 0x20 != 0) {
      return unaff_w19;
    }
    uVar1 = param_1 & 0xffffffff | in_x9 << 0x20;
    lVar2 = unaff_x25 + -9;
    if (lVar2 == 0 || unaff_x25 < 9) break;
    lVar3 = *unaff_x24;
    if (lVar2 < 9) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x24;
      }
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar5 = *(uint *)(lVar4 + lVar2 * 4 + 0x20);
    }
    else {
      uVar5 = 1000000000;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    param_1 = (param_1 & 0xffffffff) * (ulong)uVar5;
    in_x9 = (in_x9 & 0xffffffff) * (ulong)uVar5 + (param_1 >> 0x20);
    unaff_x23 = (in_x9 >> 0x20) + (ulong)uVar5 * (unaff_x23 & 0xffffffff);
    unaff_x25 = lVar2;
  }
  if ((uint)unaff_x23 != unaff_w21) {
    if ((uint)unaff_x23 < unaff_w21) {
      return -unaff_w19;
    }
    return unaff_w19;
  }
  if (uVar1 == unaff_x20) {
    return 0;
  }
  if (uVar1 < unaff_x20) {
    return -unaff_w19;
  }
  return unaff_w19;
}


