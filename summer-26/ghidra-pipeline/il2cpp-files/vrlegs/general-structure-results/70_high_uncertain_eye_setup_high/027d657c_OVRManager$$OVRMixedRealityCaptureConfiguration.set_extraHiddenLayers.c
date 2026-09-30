/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers
ENTRY_POINT: 027d657c
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


int OVRManager__OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(void)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int in_w9;
  ulong in_x10;
  int unaff_w19;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long lVar8;
  uint uVar9;
  
  puVar4 = PTR_DAT_03cfca30;
  lVar8 = (long)in_w9;
  while( true ) {
    lVar5 = *(long *)puVar4;
    if (lVar8 < 9) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar4;
      }
      lVar6 = **(long **)(lVar5 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar6 + 0x18) <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar9 = *(uint *)(lVar6 + lVar8 * 4 + 0x20);
    }
    else {
      uVar9 = 1000000000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = (in_x10 & 0xffffffff) * (ulong)uVar9;
    uVar2 = (in_x10 >> 0x20) * (ulong)uVar9 + (uVar7 >> 0x20);
    unaff_x23 = (uVar2 >> 0x20) + (ulong)uVar9 * (unaff_x23 & 0xffffffff);
    if (unaff_x23 >> 0x20 != 0) break;
    in_x10 = uVar7 & 0xffffffff | uVar2 << 0x20;
    lVar5 = lVar8 + -9;
    bVar1 = lVar8 < 9;
    lVar8 = lVar5;
    if (lVar5 == 0 || bVar1) {
      if ((uint)unaff_x23 == unaff_w21) {
        if (in_x10 == unaff_x22) {
          iVar3 = 0;
        }
        else {
          iVar3 = -unaff_w19;
          if (unaff_x22 <= in_x10) {
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


