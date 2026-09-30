/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically
ENTRY_POINT: 027d6614
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


int OVRManager__OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(void)

{
  ulong uVar1;
  int iVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  uint uVar6;
  
  while( true ) {
    if ((bool)in_ZR || in_NG != in_OV) {
      if ((uint)unaff_x23 == unaff_w21) {
        if (unaff_x22 == unaff_x20) {
          iVar2 = 0;
        }
        else {
          iVar2 = -unaff_w19;
          if (unaff_x20 <= unaff_x22) {
            iVar2 = unaff_w19;
          }
        }
      }
      else {
        iVar2 = -unaff_w19;
        if (unaff_w21 <= (uint)unaff_x23) {
          iVar2 = unaff_w19;
        }
      }
      return iVar2;
    }
    lVar3 = *unaff_x24;
    if (unaff_x25 < 9) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x24;
      }
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar6 = *(uint *)(lVar4 + unaff_x25 * 4 + 0x20);
    }
    else {
      uVar6 = 1000000000;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = (unaff_x22 & 0xffffffff) * (ulong)uVar6;
    uVar1 = (unaff_x22 >> 0x20) * (ulong)uVar6 + (uVar5 >> 0x20);
    unaff_x23 = (uVar1 >> 0x20) + (ulong)uVar6 * (unaff_x23 & 0xffffffff);
    if (unaff_x23 >> 0x20 != 0) break;
    unaff_x22 = uVar5 & 0xffffffff | uVar1 << 0x20;
    in_OV = SBORROW8(unaff_x25,9);
    unaff_x25 = unaff_x25 + -9;
    in_NG = unaff_x25 < 0;
    in_ZR = unaff_x25 == 0;
  }
  return unaff_w19;
}


