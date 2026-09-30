/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 0531ff44
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
OVRPlugin__get_fixedFoveatedRenderingSupported
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  float *unaff_x22;
  undefined8 *unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack000000000000000c;
  float fStack000000000000001c;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  uStack000000000000003c = uStack000000000000005c;
  uStack0000000000000040 = fStack0000000000000058;
  fVar18 = fStack0000000000000058;
  fStack0000000000000034 = (float)FUN_0531ee78();
  fVar16 = fVar18;
  fStack000000000000002c = param_3;
  fVar6 = (float)FUN_0531f0e8();
  fStack000000000000000c = unaff_x22[2];
  fVar20 = unaff_x22[3];
  fVar22 = *unaff_x22;
  fVar23 = unaff_x22[1];
  fVar21 = unaff_x22[4];
  fVar19 = unaff_x22[5];
  fVar7 = (float)FUN_0531ef30();
  fVar10 = *unaff_x22;
  fStack000000000000001c = unaff_x22[3];
  uVar11 = *(undefined8 *)(unaff_x22 + 1);
  uVar12 = *(undefined8 *)(unaff_x22 + 4);
  lVar2 = FUN_02f0880c(*unaff_x23,1);
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (lVar2 != 0) {
    iVar3 = (int)*(ulong *)(lVar2 + 0x18);
    if (iVar3 != 0) {
      fVar8 = param_3 * fVar19 + fVar6 * fVar20 + fVar16 * fVar21;
      fVar14 = 1.0 / (fVar8 * fVar8 + -1.0);
      fVar17 = param_3 * (fStack000000000000002c - fStack000000000000000c) +
               fVar6 * (fStack0000000000000034 - fVar22) + fVar16 * (fVar18 - fVar23);
      fVar19 = (fStack000000000000002c - fStack000000000000000c) * fVar19 +
               (fStack0000000000000034 - fVar22) * fVar20 + (fVar18 - fVar23) * fVar21;
      fVar20 = (fVar17 * fVar8 - fVar19) * fVar14;
      fVar14 = (fVar17 - fVar8 * fVar19) * fVar14;
      fVar10 = fVar10 + fStack000000000000001c * fVar20;
      fVar19 = (float)uVar11 + (float)uVar12 * fVar20;
      fVar20 = (float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * fVar20;
      uVar13 = CONCAT44(fVar20,fVar19);
      fVar6 = (fStack0000000000000034 + fVar6 * fVar14) - fVar10;
      fVar16 = (fVar18 + fVar16 * fVar14) - fVar19;
      fVar18 = (fStack000000000000002c + param_3 * fVar14) - fVar20;
      fVar16 = SQRT(fVar18 * fVar18 + fVar6 * fVar6 + fVar16 * fVar16) - fVar7;
      *(float *)(lVar2 + 0x20) = fVar16;
      puVar1 = PTR_DAT_067c9790;
      if (1 < iVar3) {
        lVar4 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar2 + 0x24);
        do {
          fVar18 = *pfVar5;
          if (*pfVar5 <= fVar16) {
            fVar18 = fVar16;
          }
          fVar16 = fVar18;
          lVar4 = lVar4 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar4 != 0);
      }
      if (fVar16 < fVar7) {
        fVar16 = SQRT(fVar7 * fVar7 - fVar16 * fVar16);
        fVar10 = fVar10 - fVar16 * unaff_x22[3];
        uVar13 = CONCAT44(fVar20 - (float)((ulong)*(undefined8 *)(unaff_x22 + 4) >> 0x20) * fVar16,
                          fVar19 - (float)*(undefined8 *)(unaff_x22 + 4) * fVar16);
      }
      uVar15 = (undefined4)(uVar13 >> 0x20);
      uVar9 = FUN_0531f9e8(fVar10,uVar13,uVar13 >> 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fda18(uVar9,uVar13 & 0xffffffff,uVar15,uStack00000000000000cc,uStack00000000000000c8,
                   uStack0000000000000040,uStack000000000000003c,&stack0x00000060,0);
      FUN_053201f8((undefined1 *)((long)&stack0x00000040 + 4));
      unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *unaff_x19 = uStack0000000000000044;
      *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000005c,fStack0000000000000058);
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


