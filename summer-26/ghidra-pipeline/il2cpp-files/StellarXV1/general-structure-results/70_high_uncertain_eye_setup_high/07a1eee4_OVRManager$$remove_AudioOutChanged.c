/*
FUNCTION_NAME: OVRManager$$remove_AudioOutChanged
ENTRY_POINT: 07a1eee4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_AudioOutChanged(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar4;
  float fVar5;
  
  lVar2 = thunk_FUN_0897216c();
  if ((lVar2 != 0) && (unaff_x20 != 0)) {
    uVar1 = *(int *)(lVar2 + 0x18) - 1;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar4 = FUN_08971d14(unaff_x20 + (long)(int)uVar1 * 0x1c + 0x20,0);
    lVar2 = *(long *)(unaff_x21 + 0x48);
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar4;
    if (lVar2 != 0) {
      uVar4 = (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      lVar2 = *(long *)(unaff_x21 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x30) = uVar4;
      *(undefined4 *)(unaff_x19 + 0x34) = 0;
      if (lVar2 != 0) {
        uVar4 = *(undefined4 *)(unaff_x19 + 0x28);
        *(undefined4 *)(lVar2 + 0xb0) = 0;
        *(undefined1 *)(lVar2 + 0xa8) = 0;
        *(undefined4 *)(lVar2 + 0xac) = uVar4;
        FUN_07a1e94c();
        if (*(float *)(unaff_x19 + 0x2c) <= *(float *)(unaff_x19 + 0x34)) {
          if ((unaff_x21 != 0) && (lVar2 = *(long *)(unaff_x21 + 0x20), lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xb0) = 0;
            *(undefined1 *)(lVar2 + 0xa8) = 0;
            FUN_07a1e94c();
            return 0;
          }
        }
        else if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x38) != 0)) {
          lVar2 = *(long *)(unaff_x21 + 0x20);
          uVar4 = FUN_089720bc(*(long *)(unaff_x21 + 0x38),0);
          if (lVar2 != 0) {
            lVar3 = *(long *)(unaff_x21 + 0x20);
            *(undefined4 *)(lVar2 + 0xb0) = uVar4;
            if (lVar3 != 0) {
              lVar2 = *(long *)(unaff_x21 + 0x48);
              *(bool *)(lVar3 + 0xa8) = DAT_01aebcac < *(float *)(unaff_x21 + 0x50);
              if (lVar2 != 0) {
                fVar5 = (float)(**(code **)(lVar2 + 0x18))
                                         (*(undefined8 *)(lVar2 + 0x40),
                                          *(undefined8 *)(lVar2 + 0x28));
                lVar2 = *(long *)(unaff_x21 + 0x20);
                *(float *)(unaff_x19 + 0x34) = fVar5 - *(float *)(unaff_x19 + 0x30);
                if (lVar2 != 0) {
                  FUN_07a1e94c();
                  *(undefined8 *)(unaff_x19 + 0x18) = 0;
                  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x18),0);
                  *(undefined4 *)(unaff_x19 + 0x10) = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


