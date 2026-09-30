/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 04f944ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000078;
  
  fVar12 = *(float *)(in_x9 + 0x18);
  fVar13 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0xc);
  fVar9 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(in_x9 + 0x10);
  fVar7 = *(float *)(in_x9 + 0x14);
  uStack0000000000000004 = param_3;
  fStack0000000000000008 = fVar7;
  fStack000000000000000c = fVar5;
  uStack0000000000000078 = param_2;
  FUN_05c7b504();
  uVar3 = FUN_05c7bd38(0);
  fVar6 = fStack000000000000000c;
  fVar8 = fStack0000000000000008;
  fVar4 = (float)FUN_05c7b504(uStack0000000000000078,fStack000000000000000c,fStack0000000000000008,
                              fVar12,0);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uVar1 = FUN_05c99d80(uVar3,fVar5,fVar7,
                       (fVar13 * fVar6 + fVar10 * fVar12 + fVar11 * fVar4) - fVar9 * fVar8,
                       (fVar10 * fVar8 + fVar9 * fVar12 + fVar11 * fVar6) - fVar13 * fVar4,
                       (fVar9 * fVar4 + fVar13 * fVar12 + fVar11 * fVar8) - fVar10 * fVar6,
                       ((fVar11 * fVar12 - fVar10 * fVar4) - fVar9 * fVar6) - fVar13 * fVar8,
                       &stack0x00000010,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)unaff_w21 * 0x1c;
    *(undefined4 *)(lVar2 + 0x38) = in_stack_00000028;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000020;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000010;
    FUN_04f948ec(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


