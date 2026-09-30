/*
FUNCTION_NAME: OVRManager$$PassthroughInitializedOrPending
ENTRY_POINT: 0366f4d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PassthroughInitializedOrPending(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  puVar1 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_104__;
  if (param_1 != 0) {
    FUN_03227960(&stack0x00000018,param_1,param_2,
                 *(undefined8 *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_104__);
    fVar8 = fStack000000000000004c;
    uVar5 = uStack0000000000000040;
    uVar2 = in_stack_00000030._12_4_;
    uVar3 = in_stack_00000030._4_8_;
    if (*(long *)(unaff_x21 + 0x130) != 0) {
      uVar10 = (ulong)uStack0000000000000048;
      uStack000000000000000c = uStack0000000000000044;
      FUN_03227960(&stack0x00000018,*(long *)(unaff_x21 + 0x130),unaff_w22,*(undefined8 *)puVar1);
      uVar9 = uStack0000000000000040;
      uVar11 = (ulong)uStack0000000000000048;
      fVar15 = (float)uVar3;
      fVar16 = SUB84(uVar3,4);
      uVar7 = (ulong)uStack0000000000000044;
      fVar14 = (unaff_s8 - fVar8) / (fStack000000000000004c - fVar8);
      fVar8 = fVar14;
      if (1.0 < fVar14) {
        fVar8 = 1.0;
      }
      uVar12 = (ulong)(uint)fVar8;
      if (fVar14 < 0.0) {
        fVar8 = 0.0;
      }
      fStack0000000000000014 =
           (float)uVar2 + ((float)in_stack_00000030._12_4_ - (float)uVar2) * fVar8;
      uVar6 = (ulong)uStack000000000000000c;
      uVar3 = FUN_0366f774(uVar5);
      uVar13 = uVar12;
      uVar4 = FUN_0366f774(uVar9,uVar7,uVar11);
      FUN_04067050(uVar3,uVar6,uVar10,uVar12,uVar4,uVar7,uVar11,uVar13,0);
      uVar9 = (undefined4)uVar10;
      uVar5 = (undefined4)uVar6;
      uVar2 = FUN_0366f884();
      *unaff_x20 = CONCAT44(fVar16 + (SUB84(in_stack_00000030._4_8_,4) - fVar16) * fVar8,
                            fVar15 + ((float)in_stack_00000030._4_8_ - fVar15) * fVar8);
      *(float *)(unaff_x20 + 1) = fStack0000000000000014;
      *unaff_x19 = uVar2;
      unaff_x19[1] = uVar5;
      unaff_x19[2] = uVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


