/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_QuerySpaces
ENTRY_POINT: 076e8290
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_QuerySpaces(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float fVar18;
  float unaff_s10;
  undefined4 uVar19;
  float unaff_s14;
  float unaff_s15;
  float fVar20;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  lVar4 = FUN_085849e0();
  if (lVar4 != 0) {
    fVar10 = (float)FUN_0859aca0(lVar4,0);
    fVar10 = ABS(unaff_s9) - unaff_s8 * fVar10;
    if (fVar10 <= 0.0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar11 = (float)FUN_08596b20();
    puVar2 = PTR_DAT_08f65580;
    uVar19 = *(undefined4 *)(unaff_x19 + 0x160);
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    iVar3 = FUN_074e60cc(uVar19,0);
    if (*(long *)(unaff_x19 + 0x128) != 0) {
      fVar12 = (float)iVar3;
      param_3 = param_3 * fVar12;
      param_2 = param_2 * fVar12;
      fVar17 = fVar10 * param_3;
      fVar18 = fVar10 * param_2;
      fVar13 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x128),0);
      if (DAT_09539e16 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539e16 = '\x01';
      }
      puVar1 = PTR_DAT_08f65568;
      fVar17 = unaff_s14 + fVar17;
      fVar18 = unaff_s15 + fVar18;
      fVar11 = unaff_s10 + fVar10 * fVar11 * fVar12;
      lVar4 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar10 = *(float *)(lVar4 + 0x18);
      fVar20 = *(float *)(lVar4 + 0x1c);
      fVar12 = *(float *)(lVar4 + 0x20);
      if (DAT_09539f9f == '\0') {
        FUN_0403162c(PTR_DAT_08f67c68);
        DAT_09539f9f = '\x01';
      }
      fVar13 = fVar11 - fVar13;
      param_3 = fVar18 - param_3;
      param_2 = fVar17 - param_2;
      fVar14 = fVar12 * fVar12 + fVar10 * fVar10 + fVar20 * fVar20;
      if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar14) {
        fVar15 = param_2 * fVar12 + fVar13 * fVar10 + param_3 * fVar20;
        fVar13 = fVar13 - (fVar10 * fVar15) / fVar14;
        param_3 = param_3 - (fVar20 * fVar15) / fVar14;
        param_2 = param_2 - (fVar12 * fVar15) / fVar14;
      }
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar10 = SQRT(param_2 * param_2 + fVar13 * fVar13 + param_3 * param_3);
      if (fVar10 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar13 = *pfVar6;
        param_3 = pfVar6[1];
        param_2 = pfVar6[2];
      }
      else {
        fVar13 = fVar13 / fVar10;
        param_3 = param_3 / fVar10;
        param_2 = param_2 / fVar10;
      }
      if (DAT_09539e16 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539e16 = '\x01';
      }
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar16 = *(undefined4 *)(lVar4 + 0x18);
      uVar19 = FUN_08575d1c(fVar13,param_3,param_2,uVar16,*(undefined4 *)(lVar4 + 0x1c),
                            *(undefined4 *)(lVar4 + 0x20),0);
      plVar9 = *(long **)(unaff_x19 + 0x138);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_08596724(fVar11,fVar18,fVar17,uVar19,param_3,param_2,uVar16,&stack0x00000020,0);
      uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
      uStack0000000000000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fabd18) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_076e85bc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fabd18,2);
LAB_076e85bc:
        (*(code *)*puVar5)(&stack0x00000000 + 4,plVar9,&stack0x00000040,puVar5[1]);
        *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000._4_8_;
        *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
        *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


