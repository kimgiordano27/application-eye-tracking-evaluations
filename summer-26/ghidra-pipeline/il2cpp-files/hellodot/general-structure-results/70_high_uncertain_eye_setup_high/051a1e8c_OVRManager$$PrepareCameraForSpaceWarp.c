/*
FUNCTION_NAME: OVRManager$$PrepareCameraForSpaceWarp
ENTRY_POINT: 051a1e8c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__PrepareCameraForSpaceWarp(void)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x24;
  float fVar9;
  float unaff_s12;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000068;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = FUN_05ef6d7c(unaff_x20 + 0x50,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*unaff_x24);
  }
  uVar2 = FUN_05f4d6b0(unaff_s12 + in_stack_00000068._4_4_,&stack0x00000008,uVar7,uVar1,0);
  fVar9 = 0.0;
  if (0 < (int)uVar2) {
    uVar3 = FUN_04db9688(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) {
LAB_051a1fdc:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_051a1fe0:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar6 = lVar6 + 0x20;
LAB_051a1f98:
      fVar9 = (float)FUN_05f5043c(lVar6,0);
      fVar9 = (unaff_s12 + in_stack_00000068._4_4_) - fVar9;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      uVar7 = 1;
      goto LAB_051a1fb0;
    }
    uVar3 = 0;
    lVar8 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) goto LAB_051a1fdc;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_051a1fe0;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar6 = FUN_05f50360(lVar6 + lVar8,0);
      if (lVar6 == 0) goto LAB_051a1fdc;
      uVar4 = FUN_05ef3598(lVar6,0);
      uVar5 = FUN_04db8dd0(uVar7,uVar4,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x58);
        if (lVar6 == 0) goto LAB_051a1fdc;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar3) goto LAB_051a1fe0;
        lVar6 = lVar6 + lVar8;
        goto LAB_051a1f98;
      }
      uVar3 = uVar3 + 1;
      lVar8 = lVar8 + 0x2c;
    } while (uVar2 != uVar3);
  }
  uVar7 = 0;
LAB_051a1fb0:
  *unaff_x19 = fVar9;
  return uVar7;
}


