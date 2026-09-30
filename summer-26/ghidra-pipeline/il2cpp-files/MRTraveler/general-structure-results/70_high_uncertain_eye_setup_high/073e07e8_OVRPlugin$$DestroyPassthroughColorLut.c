/*
FUNCTION_NAME: OVRPlugin$$DestroyPassthroughColorLut
ENTRY_POINT: 073e07e8
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
OVRPlugin__DestroyPassthroughColorLut
          (float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar14;
  float unaff_s8;
  float fVar15;
  undefined8 uVar16;
  float in_stack_00000000;
  float in_stack_00000010;
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
  ulong uVar13;
  
  uVar16 = *unaff_x22;
  fVar15 = *(float *)(unaff_x22 + 1);
  fVar8 = (float)FUN_073e0200();
  lVar4 = FUN_03c8f97c(*unaff_x23,1);
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (lVar4 != 0) {
    iVar5 = (int)*(ulong *)(lVar4 + 0x18);
    if (iVar5 != 0) {
      fVar12 = (float)param_3 / (float)param_4 + (float)uVar16;
      fVar14 = (float)((ulong)param_3 >> 0x20) / (float)((ulong)param_4 >> 0x20) +
               (float)((ulong)uVar16 >> 0x20);
      uVar13 = CONCAT44(fVar14,fVar12);
      fVar15 = param_2 / param_1 + fVar15;
      fVar9 = SQRT((unaff_s8 - fVar15) * (unaff_s8 - fVar15) +
                   (in_stack_00000000 - fVar12) * (in_stack_00000000 - fVar12) +
                   (in_stack_00000010 - fVar14) * (in_stack_00000010 - fVar14)) - fVar8;
      *(float *)(lVar4 + 0x20) = fVar9;
      puVar1 = PTR_DAT_08e78410;
      if (1 < iVar5) {
        lVar6 = (*(ulong *)(lVar4 + 0x18) & 0xffffffff) - 1;
        pfVar7 = (float *)(lVar4 + 0x24);
        do {
          fVar3 = *pfVar7;
          if (*pfVar7 <= fVar9) {
            fVar3 = fVar9;
          }
          fVar9 = fVar3;
          lVar6 = lVar6 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 != 0);
      }
      if (fVar9 < fVar8) {
        fVar8 = SQRT(fVar8 * fVar8 - fVar9 * fVar9);
        uVar13 = CONCAT44(fVar14 - (float)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20) *
                                   fVar8,
                          fVar12 - (float)*(undefined8 *)((long)unaff_x22 + 0xc) * fVar8);
        fVar15 = fVar15 - fVar8 * *(float *)((long)unaff_x22 + 0x14);
      }
      uVar11 = (ulong)(uint)fVar15;
      FUN_073e012c(&stack0x00000040);
      uVar2 = uStack0000000000000050;
      uVar10 = uVar13 >> 0x20;
      uVar16 = FUN_073e09d8(uVar13,uVar10,uVar11);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085e9668(uVar16,uVar10,uVar11,uStack000000000000004c,uVar2,
                   uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,&stack0x00000060
                   ,0);
      FUN_073e0b08(&stack0x00000020);
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


