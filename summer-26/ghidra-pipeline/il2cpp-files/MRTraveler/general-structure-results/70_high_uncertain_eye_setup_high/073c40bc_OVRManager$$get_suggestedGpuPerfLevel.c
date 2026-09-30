/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 073c40bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_suggestedGpuPerfLevel(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar4;
  float fVar5;
  
  if (in_w8 == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x21 == 0) goto LAB_073c4238;
  }
  else {
    if (in_w8 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x38) == 0)) goto LAB_073c4238;
    lVar2 = FUN_0859c774(*(long *)(unaff_x21 + 0x38),0);
    if ((*(long *)(unaff_x21 + 0x38) == 0) ||
       ((lVar3 = FUN_0859c774(*(long *)(unaff_x21 + 0x38),0), lVar3 == 0 || (lVar2 == 0))))
    goto LAB_073c4238;
    uVar1 = *(int *)(lVar3 + 0x18) - 1;
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar4 = UnityEngine_UI_Image__CalculateLayoutInputVertical
                      (lVar2 + (long)(int)uVar1 * 0x1c + 0x20,0);
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar4;
    lVar2 = *(long *)(unaff_x21 + 0x48);
    if (lVar2 == 0) goto LAB_073c4238;
    uVar4 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    *(undefined4 *)(unaff_x19 + 0x30) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if (lVar2 == 0) goto LAB_073c4238;
    *(undefined4 *)(lVar2 + 0xb0) = 0;
    uVar4 = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(lVar2 + 0xa8) = 0;
    *(undefined4 *)(lVar2 + 0xac) = uVar4;
    FUN_073c3b5c();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if (*(float *)(unaff_x19 + 0x34) < *(float *)(unaff_x19 + 0x2c)) {
    if ((*(long *)(unaff_x21 + 0x38) != 0) &&
       (uVar4 = FUN_0859c728(*(long *)(unaff_x21 + 0x38),0), lVar2 != 0)) {
      *(undefined4 *)(lVar2 + 0xb0) = uVar4;
      if (*(long *)(unaff_x21 + 0x20) != 0) {
        *(bool *)(*(long *)(unaff_x21 + 0x20) + 0xa8) = DAT_018b012c < *(float *)(unaff_x21 + 0x50);
        lVar2 = *(long *)(unaff_x21 + 0x48);
        if (lVar2 != 0) {
          fVar5 = (float)(**(code **)(lVar2 + 0x18))
                                   (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          *(float *)(unaff_x19 + 0x34) = fVar5 - *(float *)(unaff_x19 + 0x30);
          if (*(long *)(unaff_x21 + 0x20) != 0) {
            FUN_073c3b5c();
            *(undefined8 *)(unaff_x19 + 0x18) = 0;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),0);
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
        }
      }
    }
  }
  else if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0xac) = 0;
    *(undefined4 *)(lVar2 + 0xb0) = 0;
    *(undefined1 *)(lVar2 + 0xa8) = 0;
    FUN_073c3b5c(lVar2);
    return 0;
  }
LAB_073c4238:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


