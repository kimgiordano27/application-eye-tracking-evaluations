/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$BeginInvoke
ENTRY_POINT: 019c8428
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


void OVR_OpenVR_IVRCompositor__PostPresentHandoff__BeginInvoke
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  puVar1 = StringLiteral_8514;
  if (*(long *)(unaff_x21 + 0x130) != 0) {
    FUN_0132138c(*(long *)(unaff_x21 + 0x130),param_2,&stack0x00000018,
                 *(undefined8 *)StringLiteral_8514);
    fVar9 = fStack000000000000004c;
    uVar2 = uStack0000000000000044;
    uVar3 = in_stack_00000030._12_4_;
    uVar4 = in_stack_00000030._4_8_;
    if (*(long *)(unaff_x21 + 0x130) != 0) {
      uVar11 = (ulong)uStack0000000000000048;
      uStack000000000000000c = uStack0000000000000040;
      FUN_0132138c(*(long *)(unaff_x21 + 0x130),unaff_w22,&stack0x00000018,*(undefined8 *)puVar1);
      uVar6 = uStack0000000000000040;
      uVar12 = (ulong)uStack0000000000000048;
      fVar15 = (unaff_s8 - fVar9) / (fStack000000000000004c - fVar9);
      fVar9 = fVar15;
      if (1.0 < fVar15) {
        fVar9 = 1.0;
      }
      uVar13 = (ulong)(uint)fVar9;
      fVar16 = (float)uVar4;
      fVar17 = SUB84(uVar4,4);
      if (fVar15 < 0.0) {
        fVar9 = 0.0;
      }
      fStack0000000000000014 =
           (float)uVar3 + ((float)in_stack_00000030._12_4_ - (float)uVar3) * fVar9;
      uVar7 = (ulong)uVar2;
      uVar4 = FUN_019c86e4(uStack000000000000000c);
      uVar8 = (ulong)uStack0000000000000044;
      uVar14 = uVar13;
      uVar5 = FUN_019c86e4(uVar6,uVar8,uVar12);
      FUN_026988f0(uVar4,uVar7,uVar11,uVar13,uVar5,uVar8,uVar12,uVar14,0);
      uVar10 = (undefined4)uVar11;
      uVar6 = (undefined4)uVar7;
      uVar3 = OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining___ctor();
      *unaff_x20 = CONCAT44(fVar17 + (SUB84(in_stack_00000030._4_8_,4) - fVar17) * fVar9,
                            fVar16 + ((float)in_stack_00000030._4_8_ - fVar16) * fVar9);
      *(float *)(unaff_x20 + 1) = fStack0000000000000014;
      *unaff_x19 = uVar3;
      unaff_x19[1] = uVar6;
      unaff_x19[2] = uVar10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


