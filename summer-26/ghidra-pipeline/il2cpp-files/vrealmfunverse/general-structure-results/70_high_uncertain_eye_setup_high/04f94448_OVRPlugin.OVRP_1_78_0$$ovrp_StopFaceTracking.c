/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopFaceTracking
ENTRY_POINT: 04f94448
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopFaceTracking(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint unaff_w19;
  long *unaff_x20;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000078;
  uint uStack000000000000007c;
  
  uStack000000000000007c = 0;
  uVar1 = FUN_04f948a8();
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*unaff_x20 + 0x178))();
    if ((uVar1 & 1) == 0) {
      lVar3 = unaff_x20[5];
      if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_05c9a2f0(&stack0x00000010,0);
      if (lVar3 == 0) goto LAB_04f94654;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_04f94650;
      lVar3 = lVar3 + (long)(int)unaff_w19 * 0x1c;
    }
    else {
      lVar3 = unaff_x20[3];
      if (lVar3 == 0) {
LAB_04f94654:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((*(uint *)(lVar3 + 0x18) <= unaff_w19) ||
         (*(uint *)(lVar3 + 0x18) <= uStack000000000000007c)) {
LAB_04f94650:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar4 = lVar3 + 0x20 + (long)(int)uStack000000000000007c * 0x1c;
      lVar3 = lVar3 + 0x20 + (long)(int)unaff_w19 * 0x1c;
      in_stack_00000078 = *(undefined4 *)(lVar4 + 0xc);
      fVar14 = *(float *)(lVar4 + 0x18);
      fVar15 = *(float *)(lVar3 + 0x14);
      fVar13 = *(float *)(lVar3 + 0x18);
      fVar12 = *(float *)(lVar3 + 0xc);
      fVar11 = *(float *)(lVar3 + 0x10);
      fVar7 = *(float *)(lVar4 + 0x10);
      fVar9 = *(float *)(lVar4 + 0x14);
      fVar8 = fVar7;
      fVar10 = fVar9;
      FUN_05c7b504(0);
      uVar5 = FUN_05c7bd38(0);
      fVar6 = (float)FUN_05c7b504(in_stack_00000078,fVar7,fVar9,fVar14,0);
      lVar3 = unaff_x20[5];
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      uVar2 = FUN_05c99d80(uVar5,fVar8,fVar10,
                           (fVar15 * fVar7 + fVar12 * fVar14 + fVar13 * fVar6) - fVar11 * fVar9,
                           (fVar12 * fVar9 + fVar11 * fVar14 + fVar13 * fVar7) - fVar15 * fVar6,
                           (fVar11 * fVar6 + fVar15 * fVar14 + fVar13 * fVar9) - fVar12 * fVar7,
                           ((fVar13 * fVar14 - fVar12 * fVar6) - fVar11 * fVar7) - fVar15 * fVar9,
                           &stack0x00000010,0);
      if (lVar3 == 0) goto LAB_04f94654;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_04f94650;
      lVar3 = lVar3 + (long)(int)unaff_w19 * 0x1c;
    }
    *(undefined4 *)(lVar3 + 0x38) = in_stack_00000028;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000020;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000010;
    FUN_04f948ec(uVar2,unaff_w19,unaff_x20[8]);
  }
  return;
}


