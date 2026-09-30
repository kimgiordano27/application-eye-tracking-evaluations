/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 0366f4e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsMultimodalHandsControllersSupported(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  FUN_03227960(param_1,param_2,*unaff_x23);
  fVar7 = fStack000000000000004c;
  uVar4 = uStack0000000000000040;
  uVar1 = in_stack_00000030._12_4_;
  uVar2 = in_stack_00000030._4_8_;
  if (*(long *)(unaff_x21 + 0x130) != 0) {
    uVar9 = (ulong)uStack0000000000000048;
    uStack000000000000000c = uStack0000000000000044;
    FUN_03227960(&stack0x00000018,*(long *)(unaff_x21 + 0x130),unaff_w22,*unaff_x23);
    uVar8 = uStack0000000000000040;
    uVar10 = (ulong)uStack0000000000000048;
    fVar14 = (float)uVar2;
    fVar15 = SUB84(uVar2,4);
    uVar6 = (ulong)uStack0000000000000044;
    fVar13 = (unaff_s8 - fVar7) / (fStack000000000000004c - fVar7);
    fVar7 = fVar13;
    if (1.0 < fVar13) {
      fVar7 = 1.0;
    }
    uVar11 = (ulong)(uint)fVar7;
    if (fVar13 < 0.0) {
      fVar7 = 0.0;
    }
    fStack0000000000000014 = (float)uVar1 + ((float)in_stack_00000030._12_4_ - (float)uVar1) * fVar7
    ;
    uVar5 = (ulong)uStack000000000000000c;
    uVar2 = FUN_0366f774(uVar4);
    uVar12 = uVar11;
    uVar3 = FUN_0366f774(uVar8,uVar6,uVar10);
    FUN_04067050(uVar2,uVar5,uVar9,uVar11,uVar3,uVar6,uVar10,uVar12,0);
    uVar8 = (undefined4)uVar9;
    uVar4 = (undefined4)uVar5;
    uVar1 = FUN_0366f884();
    *unaff_x20 = CONCAT44(fVar15 + (SUB84(in_stack_00000030._4_8_,4) - fVar15) * fVar7,
                          fVar14 + ((float)in_stack_00000030._4_8_ - fVar14) * fVar7);
    *(float *)(unaff_x20 + 1) = fStack0000000000000014;
    *unaff_x19 = uVar1;
    unaff_x19[1] = uVar4;
    unaff_x19[2] = uVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


