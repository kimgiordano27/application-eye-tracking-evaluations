/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers
ENTRY_POINT: 027d658c
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


int OVRManager__OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(void)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int in_w9;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long lVar7;
  uint uVar8;
  
  lVar7 = (long)in_w9;
  while( true ) {
    lVar4 = *unaff_x24;
    if (lVar7 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x24;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar8 = *(uint *)(lVar5 + lVar7 * 4 + 0x20);
    }
    else {
      uVar8 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = (unaff_x22 & 0xffffffff) * (ulong)uVar8;
    uVar2 = (unaff_x22 >> 0x20) * (ulong)uVar8 + (uVar6 >> 0x20);
    unaff_x23 = (uVar2 >> 0x20) + (ulong)uVar8 * (unaff_x23 & 0xffffffff);
    if (unaff_x23 >> 0x20 != 0) break;
    unaff_x22 = uVar6 & 0xffffffff | uVar2 << 0x20;
    lVar4 = lVar7 + -9;
    bVar1 = lVar7 < 9;
    lVar7 = lVar4;
    if (lVar4 == 0 || bVar1) {
      if ((uint)unaff_x23 == unaff_w21) {
        if (unaff_x22 == unaff_x20) {
          iVar3 = 0;
        }
        else {
          iVar3 = -unaff_w19;
          if (unaff_x20 <= unaff_x22) {
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
  }
  return unaff_w19;
}


