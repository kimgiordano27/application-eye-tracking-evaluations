/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_compositionMethod
ENTRY_POINT: 027d65b0
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


int OVRManager__OVRMixedRealityCaptureConfiguration_set_compositionMethod(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  uint uVar5;
  
  do {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x24;
    do {
      lVar3 = **(long **)(lVar2 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar5 = *(uint *)(lVar3 + unaff_x25 * 4 + 0x20);
      lVar3 = unaff_x25;
      while( true ) {
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = (unaff_x22 & 0xffffffff) * (ulong)uVar5;
        uVar1 = (unaff_x22 >> 0x20) * (ulong)uVar5 + (uVar4 >> 0x20);
        unaff_x23 = (uVar1 >> 0x20) + (ulong)uVar5 * (unaff_x23 & 0xffffffff);
        if (unaff_x23 >> 0x20 != 0) {
          return unaff_w19;
        }
        unaff_x22 = uVar4 & 0xffffffff | uVar1 << 0x20;
        unaff_x25 = lVar3 + -9;
        if (unaff_x25 == 0 || lVar3 < 9) {
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
        lVar2 = *unaff_x24;
        if (unaff_x25 < 9) break;
        uVar5 = 1000000000;
        lVar3 = unaff_x25;
      }
    } while (*(int *)(lVar2 + 0xe0) != 0);
  } while( true );
}


