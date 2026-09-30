/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 076e9768
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  ulong uVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 in_stack_00000010 [16];
  float in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  
  plVar5 = *(long **)(unaff_x21 + 0x528);
  plVar3 = *(long **)(unaff_x20 + 0x598);
  FUN_076e7624(&stack0x00000010 + 4);
  in_stack_00000038 = (float)in_stack_00000010._12_4_;
  _fStack0000000000000030 = in_stack_00000010._4_8_;
  uStack0000000000000044 = in_stack_00000028;
  fStack000000000000003c = in_stack_00000020;
  fVar19 = in_stack_00000020;
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar6 = (float)FUN_08596ab0(&stack0x00000030,0);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  fVar17 = param_3;
  fVar9 = fVar19;
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_0858816c(uVar4,0,0);
  fVar13 = in_stack_00000038;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_076e9a5c;
    fVar19 = fStack0000000000000034;
    fVar6 = fStack0000000000000030;
    fVar7 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
    fVar16 = fVar17;
    fVar20 = fVar9;
    if (*(int *)(*plVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = (float)FUN_08596b90(&stack0x00000030,0);
    if (DAT_09539f9f == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    fVar6 = fVar6 - fVar7;
    fVar19 = fVar19 - fVar9;
    param_3 = fVar13 - fVar17;
    fVar9 = fVar16 * fVar16 + fVar8 * fVar8 + fVar20 * fVar20;
    fVar17 = fVar13;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar9) {
      fVar13 = param_3 * fVar16 + fVar6 * fVar8 + fVar19 * fVar20;
      fVar17 = (fVar8 * fVar13) / fVar9;
      fVar6 = fVar6 - fVar17;
      fVar19 = fVar19 - (fVar20 * fVar13) / fVar9;
      param_3 = param_3 - (fVar16 * fVar13) / fVar9;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar9 = SQRT(param_3 * param_3 + fVar6 * fVar6 + fVar19 * fVar19);
    if (fVar9 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar6 = *pfVar2;
      fVar19 = pfVar2[1];
      param_3 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar9;
      fVar19 = fVar19 / fVar9;
      param_3 = param_3 / fVar9;
    }
  }
  fVar9 = fStack0000000000000030;
  fVar13 = fStack0000000000000034;
  fVar20 = *(float *)(unaff_x19 + 0x94);
  fVar16 = fStack0000000000000030;
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar10 = (float)FUN_08596b90(&stack0x00000030,0);
  fVar18 = *(float *)(unaff_x19 + 0x90);
  fVar7 = fVar17;
  fVar14 = fVar16;
  uVar11 = FUN_08596b90(&stack0x00000030,0);
  fVar8 = param_3;
  fVar15 = fVar19;
  uVar12 = FUN_08575d1c(fVar6,fVar19,param_3,uVar11,fVar14,fVar7,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_085995ac((fVar9 - fVar6 * fVar20) + fVar10 * fVar18,
                 (fVar13 - fVar19 * fVar20) + fVar16 * fVar18,
                 (in_stack_00000038 - param_3 * fVar20) + fVar17 * fVar18,uVar12,fVar15,fVar8,uVar11
                 ,*(long *)(unaff_x19 + 0x48),0);
    return;
  }
LAB_076e9a5c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


