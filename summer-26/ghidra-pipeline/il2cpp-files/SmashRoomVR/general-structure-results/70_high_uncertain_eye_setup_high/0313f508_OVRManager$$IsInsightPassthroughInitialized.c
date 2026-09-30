/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitialized
ENTRY_POINT: 0313f508
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__IsInsightPassthroughInitialized(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float unaff_s8;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  *(undefined1 *)(unaff_x20 + 0xf1c) = 1;
  puVar3 = PTR_DAT_03d7fa10;
  puVar2 = PTR_DAT_03d7fa08;
  iVar10 = *(int *)(unaff_x19 + 0x138);
  if (iVar10 < 0) {
    uVar6 = *(undefined8 *)PTR_DAT_03d7fa10;
    iVar9 = -1;
    iVar7 = -1;
LAB_0313f600:
    in_stack_00000058 = 0;
    FUN_022744bc(&stack0x00000058,iVar9,iVar7,uVar6);
    return in_stack_00000058;
  }
  lVar5 = *(long *)(unaff_x19 + 0x130);
  if (lVar5 != 0) {
    iVar12 = *(int *)(lVar5 + 0x18);
    iVar1 = iVar12 + -1;
    if (iVar12 < 1) {
      iVar7 = -1;
      iVar9 = -1;
LAB_0313f5ec:
      uVar6 = *(undefined8 *)puVar3;
      goto LAB_0313f600;
    }
    if (iVar10 < 0) {
      iVar10 = iVar1;
    }
    iVar13 = iVar10 + -1;
    iVar7 = -1;
    iVar11 = iVar13;
    if (iVar13 < 0) {
      iVar11 = iVar1;
    }
    iVar8 = -1;
    do {
      FUN_02c43204(&stack0x00000008,lVar5,iVar10,*(undefined8 *)puVar2);
      fVar4 = in_stack_00000038._4_4_;
      if (*(long *)(unaff_x19 + 0x130) == 0) break;
      FUN_02c43204(&stack0x00000008,*(long *)(unaff_x19 + 0x130),iVar11,*(undefined8 *)puVar2);
      iVar9 = iVar11;
      if (fVar4 <= unaff_s8 || unaff_s8 <= in_stack_00000038._4_4_) {
        iVar9 = iVar8;
        iVar10 = iVar7;
      }
      iVar7 = iVar10;
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) goto LAB_0313f5ec;
      lVar5 = *(long *)(unaff_x19 + 0x130);
      iVar10 = iVar13;
      if (iVar13 < 0) {
        iVar10 = iVar1;
      }
      iVar13 = iVar10 + -1;
      iVar11 = iVar13;
      if (iVar13 < 0) {
        iVar11 = iVar1;
      }
      iVar8 = iVar9;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


