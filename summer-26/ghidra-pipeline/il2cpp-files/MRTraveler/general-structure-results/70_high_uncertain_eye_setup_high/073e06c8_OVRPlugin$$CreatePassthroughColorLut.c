/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 073e06c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__CreatePassthroughColorLut
          (ulong param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x23;
  float fVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  ulong uVar12;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e78410);
    FUN_03c8f898(PTR_DAT_08e6abb8);
    *(undefined1 *)(unaff_x23 + 0x74a) = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  fVar7 = (float)FUN_073e01a4(param_5);
  uVar15 = *param_6;
  fVar17 = *(float *)(param_6 + 1);
  uVar14 = *(undefined8 *)((long)param_6 + 0xc);
  fVar16 = *(float *)((long)param_6 + 0x14);
  if (DAT_0941112a == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_0941112a = '\x01';
  }
  puVar1 = PTR_DAT_08e6abb8;
  fVar11 = (float)uVar14;
  fVar13 = (float)((ulong)uVar14 >> 0x20);
  fVar8 = fVar16 * fVar16 + fVar11 * fVar11 + fVar13 * fVar13;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar8) {
    fVar17 = (param_4 - fVar17) * fVar16 +
             (fVar7 - (float)uVar15) * fVar11 + (param_3 - (float)((ulong)uVar15 >> 0x20)) * fVar13;
    uVar14 = CONCAT44((fVar13 * fVar17) / fVar8,(fVar11 * fVar17) / fVar8);
    fVar8 = (fVar16 * fVar17) / fVar8;
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    uVar14 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
  }
  uVar15 = *param_6;
  fVar17 = *(float *)(param_6 + 1);
  fVar16 = (float)FUN_073e0200(param_5);
  lVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,1);
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (lVar3 != 0) {
    iVar4 = (int)*(ulong *)(lVar3 + 0x18);
    if (iVar4 != 0) {
      fVar11 = (float)uVar14 + (float)uVar15;
      fVar13 = (float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar15 >> 0x20);
      uVar12 = CONCAT44(fVar13,fVar11);
      fVar8 = fVar8 + fVar17;
      fVar7 = SQRT((param_4 - fVar8) * (param_4 - fVar8) +
                   (fVar7 - fVar11) * (fVar7 - fVar11) + (param_3 - fVar13) * (param_3 - fVar13)) -
              fVar16;
      *(float *)(lVar3 + 0x20) = fVar7;
      puVar1 = PTR_DAT_08e78410;
      if (1 < iVar4) {
        lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar6 = (float *)(lVar3 + 0x24);
        do {
          fVar17 = *pfVar6;
          if (*pfVar6 <= fVar7) {
            fVar17 = fVar7;
          }
          fVar7 = fVar17;
          lVar5 = lVar5 + -1;
          pfVar6 = pfVar6 + 1;
        } while (lVar5 != 0);
      }
      if (fVar7 < fVar16) {
        fVar7 = SQRT(fVar16 * fVar16 - fVar7 * fVar7);
        uVar12 = CONCAT44(fVar13 - (float)((ulong)*(undefined8 *)((long)param_6 + 0xc) >> 0x20) *
                                   fVar7,
                          fVar11 - (float)*(undefined8 *)((long)param_6 + 0xc) * fVar7);
        fVar8 = fVar8 - fVar7 * *(float *)((long)param_6 + 0x14);
      }
      uVar10 = (ulong)(uint)fVar8;
      FUN_073e012c(&stack0x00000040,param_5);
      uVar2 = uStack0000000000000050;
      uVar9 = uVar12 >> 0x20;
      uVar14 = FUN_073e09d8(uVar12,uVar9,uVar10,param_5);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085e9668(uVar14,uVar9,uVar10,uStack000000000000004c,uVar2,
                   uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,&stack0x00000060
                   ,0);
      FUN_073e0b08(&stack0x00000020,param_5,&stack0x00000060);
      param_7[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *param_7 = in_stack_00000020;
      *(undefined8 *)((long)param_7 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)param_7 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


