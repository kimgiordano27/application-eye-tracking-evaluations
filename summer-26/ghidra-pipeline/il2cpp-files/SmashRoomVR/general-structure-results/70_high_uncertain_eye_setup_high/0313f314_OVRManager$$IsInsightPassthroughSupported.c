/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 0313f314
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__IsInsightPassthroughSupported(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar3;
  long *unaff_x22;
  long unaff_x23;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x608));
  *(undefined1 *)(unaff_x23 + 0xf1a) = 1;
  uVar2 = *(undefined8 *)(unaff_x21 + 0xf0);
  *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)(unaff_x21 + 0xf8);
  *unaff_x20 = uVar2;
  uVar4 = *(undefined4 *)(unaff_x21 + 0x104);
  *unaff_x19 = *(undefined8 *)(unaff_x21 + 0xfc);
  *(undefined4 *)(unaff_x19 + 1) = uVar4;
  if (**(float **)(*unaff_x22 + 0xb8) <= *(float *)(unaff_x21 + 0x58)) {
    fVar14 = unaff_s8 - *(float *)(unaff_x21 + 0x58);
    uVar2 = FUN_0313f4b0(fVar14);
    puVar1 = PTR_DAT_03d7fa08;
    uVar3 = (uint)((ulong)uVar2 >> 0x20);
    if (-1 < (int)((uint)uVar2 | uVar3)) {
      if (*(long *)(unaff_x21 + 0x130) != 0) {
        FUN_02c43204(&stack0x00000018,*(long *)(unaff_x21 + 0x130),uVar2,
                     *(undefined8 *)PTR_DAT_03d7fa08);
        fVar15 = fStack000000000000004c;
        uVar6 = uStack0000000000000040;
        uVar4 = in_stack_00000030._12_4_;
        uVar2 = in_stack_00000030._4_8_;
        if (*(long *)(unaff_x21 + 0x130) != 0) {
          uVar10 = (ulong)uStack0000000000000048;
          uStack000000000000000c = uStack0000000000000044;
          FUN_02c43204(&stack0x00000018,*(long *)(unaff_x21 + 0x130),uVar3,*(undefined8 *)puVar1);
          uVar9 = uStack0000000000000040;
          uVar11 = (ulong)uStack0000000000000048;
          fVar16 = (float)uVar2;
          fVar17 = SUB84(uVar2,4);
          uVar8 = (ulong)uStack0000000000000044;
          fVar15 = (fVar14 - fVar15) / (fStack000000000000004c - fVar15);
          fVar14 = fVar15;
          if (1.0 < fVar15) {
            fVar14 = 1.0;
          }
          uVar12 = (ulong)(uint)fVar14;
          if (fVar15 < 0.0) {
            fVar14 = 0.0;
          }
          fStack0000000000000014 =
               (float)uVar4 + ((float)in_stack_00000030._12_4_ - (float)uVar4) * fVar14;
          uVar7 = (ulong)uStack000000000000000c;
          uVar2 = OVRManager__IsPassthroughRecommended(uVar6);
          uVar13 = uVar12;
          uVar5 = OVRManager__IsPassthroughRecommended(uVar9,uVar8,uVar11);
          FUN_039142e8(uVar2,uVar7,uVar10,uVar12,uVar5,uVar8,uVar11,uVar13,0);
          uVar9 = (undefined4)uVar10;
          uVar6 = (undefined4)uVar7;
          uVar4 = FUN_0313f738();
          *unaff_x20 = CONCAT44(fVar17 + (SUB84(in_stack_00000030._4_8_,4) - fVar17) * fVar14,
                                fVar16 + ((float)in_stack_00000030._4_8_ - fVar16) * fVar14);
          *(float *)(unaff_x20 + 1) = fStack0000000000000014;
          *(undefined4 *)unaff_x19 = uVar4;
          *(undefined4 *)((long)unaff_x19 + 4) = uVar6;
          *(undefined4 *)(unaff_x19 + 1) = uVar9;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


