/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$Invoke
ENTRY_POINT: 019c8414
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRCompositor__PostPresentHandoff__Invoke(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float unaff_s8;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  uVar3 = FUN_019c8560();
  puVar1 = StringLiteral_8514;
  uVar4 = (uint)((ulong)uVar3 >> 0x20);
  if ((int)((uint)uVar3 | uVar4) < 0) {
    return;
  }
  if (*(long *)(unaff_x21 + 0x130) != 0) {
    FUN_0132138c(*(long *)(unaff_x21 + 0x130),uVar3,&stack0x00000018,
                 *(undefined8 *)StringLiteral_8514);
    fVar10 = fStack000000000000004c;
    uVar2 = uStack0000000000000044;
    uVar5 = in_stack_00000030._12_4_;
    uVar3 = in_stack_00000030._4_8_;
    if (*(long *)(unaff_x21 + 0x130) != 0) {
      uVar12 = (ulong)uStack0000000000000048;
      uStack000000000000000c = uStack0000000000000040;
      FUN_0132138c(*(long *)(unaff_x21 + 0x130),uVar4,&stack0x00000018,*(undefined8 *)puVar1);
      uVar7 = uStack0000000000000040;
      uVar13 = (ulong)uStack0000000000000048;
      fVar16 = (unaff_s8 - fVar10) / (fStack000000000000004c - fVar10);
      fVar10 = fVar16;
      if (1.0 < fVar16) {
        fVar10 = 1.0;
      }
      uVar14 = (ulong)(uint)fVar10;
      fVar17 = (float)uVar3;
      fVar18 = SUB84(uVar3,4);
      if (fVar16 < 0.0) {
        fVar10 = 0.0;
      }
      fStack0000000000000014 =
           (float)uVar5 + ((float)in_stack_00000030._12_4_ - (float)uVar5) * fVar10;
      uVar8 = (ulong)uVar2;
      uVar3 = FUN_019c86e4(uStack000000000000000c);
      uVar9 = (ulong)uStack0000000000000044;
      uVar15 = uVar14;
      uVar6 = FUN_019c86e4(uVar7,uVar9,uVar13);
      FUN_026988f0(uVar3,uVar8,uVar12,uVar14,uVar6,uVar9,uVar13,uVar15,0);
      uVar11 = (undefined4)uVar12;
      uVar7 = (undefined4)uVar8;
      uVar5 = OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining___ctor();
      *unaff_x20 = CONCAT44(fVar18 + (SUB84(in_stack_00000030._4_8_,4) - fVar18) * fVar10,
                            fVar17 + ((float)in_stack_00000030._4_8_ - fVar17) * fVar10);
      *(float *)(unaff_x20 + 1) = fStack0000000000000014;
      *unaff_x19 = uVar5;
      unaff_x19[1] = uVar7;
      unaff_x19[2] = uVar11;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


