/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 0531fed0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRPlugin__get_foveatedRenderingSupported
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
          float *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  float fVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack000000000000000c;
  float fStack000000000000001c;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  
  puVar1 = PTR_DAT_067cc450;
  if ((DAT_06bbb250 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9790);
    FUN_02f08768(PTR_DAT_067cc450);
    DAT_06bbb250 = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  FUN_0531e794(&stack0x00000040 + 4,param_4,param_7);
  fVar2 = fStack0000000000000058;
  in_stack_000000c8 = uStack0000000000000054;
  uStack00000000000000cc = uStack0000000000000050;
  uStack000000000000003c = uStack000000000000005c;
  fVar19 = fStack0000000000000058;
  fStack0000000000000034 = (float)FUN_0531ee78(param_4,param_7);
  fVar17 = fVar19;
  fStack000000000000002c = param_3;
  fVar7 = (float)FUN_0531f0e8(param_4,param_7);
  fStack000000000000000c = param_5[2];
  fVar21 = param_5[3];
  fVar23 = *param_5;
  fVar24 = param_5[1];
  fVar22 = param_5[4];
  fVar20 = param_5[5];
  fVar8 = (float)FUN_0531ef30(param_4,param_7);
  fVar11 = *param_5;
  fStack000000000000001c = param_5[3];
  uVar12 = *(undefined8 *)(param_5 + 1);
  uVar13 = *(undefined8 *)(param_5 + 4);
  lVar3 = FUN_02f0880c(*(undefined8 *)puVar1,1);
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (lVar3 != 0) {
    iVar4 = (int)*(ulong *)(lVar3 + 0x18);
    if (iVar4 != 0) {
      fVar9 = param_3 * fVar20 + fVar7 * fVar21 + fVar17 * fVar22;
      fVar15 = 1.0 / (fVar9 * fVar9 + -1.0);
      fVar18 = param_3 * (fStack000000000000002c - fStack000000000000000c) +
               fVar7 * (fStack0000000000000034 - fVar23) + fVar17 * (fVar19 - fVar24);
      fVar20 = (fStack000000000000002c - fStack000000000000000c) * fVar20 +
               (fStack0000000000000034 - fVar23) * fVar21 + (fVar19 - fVar24) * fVar22;
      fVar21 = (fVar18 * fVar9 - fVar20) * fVar15;
      fVar15 = (fVar18 - fVar9 * fVar20) * fVar15;
      fVar11 = fVar11 + fStack000000000000001c * fVar21;
      fVar20 = (float)uVar12 + (float)uVar13 * fVar21;
      fVar21 = (float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar13 >> 0x20) * fVar21;
      uVar14 = CONCAT44(fVar21,fVar20);
      fVar7 = (fStack0000000000000034 + fVar7 * fVar15) - fVar11;
      fVar17 = (fVar19 + fVar17 * fVar15) - fVar20;
      fVar19 = (fStack000000000000002c + param_3 * fVar15) - fVar21;
      fVar17 = SQRT(fVar19 * fVar19 + fVar7 * fVar7 + fVar17 * fVar17) - fVar8;
      *(float *)(lVar3 + 0x20) = fVar17;
      puVar1 = PTR_DAT_067c9790;
      if (1 < iVar4) {
        lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar6 = (float *)(lVar3 + 0x24);
        do {
          fVar19 = *pfVar6;
          if (*pfVar6 <= fVar17) {
            fVar19 = fVar17;
          }
          fVar17 = fVar19;
          lVar5 = lVar5 + -1;
          pfVar6 = pfVar6 + 1;
        } while (lVar5 != 0);
      }
      if (fVar17 < fVar8) {
        fVar17 = SQRT(fVar8 * fVar8 - fVar17 * fVar17);
        fVar11 = fVar11 - fVar17 * param_5[3];
        uVar14 = CONCAT44(fVar21 - (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) * fVar17,
                          fVar20 - (float)*(undefined8 *)(param_5 + 4) * fVar17);
      }
      uVar16 = (undefined4)(uVar14 >> 0x20);
      uVar10 = FUN_0531f9e8(fVar11,uVar14,uVar14 >> 0x20,param_4,param_7);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fda18(uVar10,uVar14 & 0xffffffff,uVar16,uStack00000000000000cc,in_stack_000000c8,fVar2,
                   uStack000000000000003c,&stack0x00000060,0);
      FUN_053201f8(&stack0x00000040 + 4,param_4,&stack0x00000060,param_7);
      param_6[1] = CONCAT44(uStack0000000000000050,in_stack_00000040._12_4_);
      *param_6 = in_stack_00000040._4_8_;
      *(ulong *)((long)param_6 + 0x14) = CONCAT44(uStack000000000000005c,fStack0000000000000058);
      *(ulong *)((long)param_6 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


