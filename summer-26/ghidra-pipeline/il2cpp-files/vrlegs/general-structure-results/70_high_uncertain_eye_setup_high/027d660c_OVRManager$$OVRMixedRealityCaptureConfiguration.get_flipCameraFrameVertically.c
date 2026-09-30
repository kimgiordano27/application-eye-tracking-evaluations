/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically
ENTRY_POINT: 027d660c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  uint uVar7;
  
  while( true ) {
    lVar2 = unaff_x25 + -9;
    if (lVar2 == 0 || unaff_x25 < 9) {
      if ((uint)unaff_x23 == unaff_w21) {
        if (param_1 == unaff_x20) {
          iVar3 = 0;
        }
        else {
          iVar3 = -unaff_w19;
          if (unaff_x20 <= param_1) {
            iVar3 = unaff_w19;
          }
        }
      }
      else {
        iVar3 = -unaff_w19;
        if (unaff_w21 <= (uint)unaff_x23) {
          iVar3 = unaff_w19;
        }
      }
      return iVar3;
    }
    lVar4 = *unaff_x24;
    if (lVar2 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x24;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar7 = *(uint *)(lVar5 + lVar2 * 4 + 0x20);
    }
    else {
      uVar7 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = (param_1 & 0xffffffff) * (ulong)uVar7;
    uVar1 = (param_1 >> 0x20) * (ulong)uVar7 + (uVar6 >> 0x20);
    unaff_x23 = (uVar1 >> 0x20) + (ulong)uVar7 * (unaff_x23 & 0xffffffff);
    if (unaff_x23 >> 0x20 != 0) break;
    param_1 = uVar6 & 0xffffffff | uVar1 << 0x20;
    unaff_x25 = lVar2;
  }
  return unaff_w19;
}


