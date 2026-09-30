/*
FUNCTION_NAME: OVRManager$$SetDepthSubmission
ENTRY_POINT: 033ab380
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRManager__SetDepthSubmission(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  uint in_w8;
  long *unaff_x19;
  bool bVar5;
  long *unaff_x20;
  uint uVar6;
  
  do {
    if (in_w8 != 2) goto LAB_033ab3e4;
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x1b8))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1c0));
    if (unaff_x20 == (long *)0x0) goto LAB_033ab3a0;
    uVar2 = FUN_033ab490(unaff_x20);
    uVar1 = (**(code **)(*unaff_x20 + 0x4a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x4b0));
    in_w8 = uVar1 & 7;
  } while ((uVar2 & 1) != 0);
  if (in_w8 == 1) {
    uVar2 = (**(code **)(*unaff_x19 + 0x3a8))();
    if (((uVar2 & 1) != 0) && (uVar2 = (**(code **)(*unaff_x19 + 0x3b8))(), (uVar2 & 1) == 0)) {
      lVar3 = (**(code **)(*unaff_x19 + 0x458))();
      if (lVar3 == 0) {
LAB_033ab3a0:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      bVar5 = 0 < (int)uVar1;
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (*(long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20) == 0) goto LAB_033ab3a0;
          uVar2 = FUN_033ab2f8();
          if ((uVar2 & 1) == 0) break;
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar6 = uVar6 + 1;
          bVar5 = (int)uVar6 < (int)uVar1;
        } while ((int)uVar6 < (int)uVar1);
      }
      return bVar5 ^ 1;
    }
    bVar4 = 1;
  }
  else {
LAB_033ab3e4:
    bVar4 = 0;
  }
  return bVar4;
}


