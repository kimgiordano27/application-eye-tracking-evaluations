/*
FUNCTION_NAME: OVRManager$$remove_DisplayRefreshRateChanged
ENTRY_POINT: 06aa8204
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_DisplayRefreshRateChanged(void)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  undefined1 unaff_w22;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  *(undefined1 *)(unaff_x21 + 0x118) = unaff_w22;
  *unaff_x19 = 0xffffffff;
  lVar3 = *(long *)(unaff_x20 + 0x38);
  if (lVar3 == 0) {
LAB_06aa82b8:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    uVar4 = 0xffffffff;
    fVar7 = INFINITY;
    do {
      if (*(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20) == 0) goto LAB_06aa82b8;
      fVar6 = (float)FUN_06aa82c0();
      if (fVar6 < fVar7) {
        *unaff_x19 = uVar5;
        uVar4 = uVar5;
        fVar7 = fVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
    if (uVar4 != 0xffffffff) {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
      goto LAB_06aa82a0;
    }
  }
  if (*(int *)(DAT_083ce548 + 0xe0) == 0) {
    FUN_033b9870();
  }
  puVar2 = *(undefined8 **)(DAT_083ce548 + 0xb8);
LAB_06aa82a0:
  return *puVar2;
}


