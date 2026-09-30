/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice
ENTRY_POINT: 027d65e8
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


int OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  
  while( true ) {
    uVar5 = (unaff_x22 & 0xffffffff) * (ulong)unaff_w26;
    uVar1 = (unaff_x22 >> 0x20) * in_x9 + (uVar5 >> 0x20);
    unaff_x23 = (uVar1 >> 0x20) + (ulong)unaff_w26 * (unaff_x23 & 0xffffffff);
    if (unaff_x23 >> 0x20 != 0) {
      return unaff_w19;
    }
    unaff_x22 = uVar5 & 0xffffffff | uVar1 << 0x20;
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
      unaff_w26 = *(uint *)(lVar4 + lVar2 * 4 + 0x20);
    }
    else {
      unaff_w26 = 1000000000;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_x9 = (ulong)unaff_w26;
    unaff_x25 = lVar2;
  }
  if ((uint)unaff_x23 != unaff_w21) {
    if ((uint)unaff_x23 < unaff_w21) {
      return -unaff_w19;
    }
    return unaff_w19;
  }
  if (unaff_x22 == unaff_x20) {
    return 0;
  }
  if (unaff_x22 < unaff_x20) {
    return -unaff_w19;
  }
  return unaff_w19;
}


