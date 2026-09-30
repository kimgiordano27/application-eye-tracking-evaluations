/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 05320394
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  undefined4 *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 uStack00000000000000cc;
  
  fVar4 = (float)FUN_0531ef30();
  uStack00000000000000cc = *unaff_x22;
  fVar9 = (float)unaff_x22[1];
  uVar20 = *(undefined8 *)(unaff_x22 + 3);
  fVar10 = (float)unaff_x22[2];
  uVar12 = *(undefined8 *)(unaff_x22 + 5);
  fVar8 = unaff_s11;
  fVar13 = unaff_s8;
  fVar11 = unaff_s10;
  fVar5 = (float)FUN_060df2e4(unaff_s9,0);
  uVar21 = NEON_ext(uVar12,uVar20,4,1);
  uVar14 = NEON_rev64(CONCAT44(fVar8,fVar13),4);
  fVar16 = (float)uVar14;
  fVar17 = (float)((ulong)uVar14 >> 0x20);
  uVar14 = NEON_rev64(uVar20,4);
  uVar18 = NEON_ext(CONCAT44(fVar5,fVar16),CONCAT44(fVar17,fVar11),4,1);
  uVar15 = NEON_ext(uVar20,uVar12,4,1);
  fVar23 = (float)((ulong)uVar12 >> 0x20);
  uVar22 = NEON_rev64(uVar15,4);
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar6 = ((float)uVar20 * fVar11 + (float)uVar12 * fVar16 + (float)uVar21 * fVar13) -
          (float)uVar15 * (float)uVar18;
  fVar8 = ((float)((ulong)uVar20 >> 0x20) * fVar17 +
          fVar23 * fVar5 + (float)((ulong)uVar21 >> 0x20) * fVar8) -
          (float)((ulong)uVar15 >> 0x20) * fVar19;
  fVar11 = (fVar11 * fVar23 + (float)uVar14 * fVar16 + (float)uVar22 * (float)uVar18) -
           (float)uVar20 * fVar13;
  fVar13 = ((fVar16 * fVar23 - (float)((ulong)uVar14 >> 0x20) * fVar5) -
           (float)((ulong)uVar22 >> 0x20) * fVar19) - (float)uVar12 * fVar13;
  fVar16 = (float)in_stack_00000040;
  uVar12 = NEON_ext(CONCAT44(fVar13,fVar11),CONCAT44(fVar8,fVar6),4,1);
  uVar14 = NEON_ext(CONCAT44(in_stack_00000030,in_stack_00000010),in_stack_00000040,4,1);
  uVar15 = NEON_ext(CONCAT44(fVar8,fVar6),CONCAT44(fVar13,fVar11),4,1);
  fVar5 = (in_stack_00000020 * fVar8 +
          in_stack_00000030 * fVar13 + in_stack_00000010 * (float)((ulong)uVar12 >> 0x20)) -
          (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
  uVar14 = CONCAT44(fVar5,(fVar16 * fVar6 +
                          in_stack_00000010 * fVar11 + in_stack_00000020 * (float)uVar12) -
                          (float)uVar14 * (float)uVar15);
  if (DAT_06bb42c5 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c5 = '\x01';
  }
  puVar1 = PTR_DAT_067c8f78;
  lVar2 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar13 = (float)FUN_060dfb18((in_stack_00000030 * fVar11 +
                               fVar16 * fVar13 + in_stack_00000010 * fVar8) -
                               in_stack_00000020 * fVar6,uVar14,fVar5,
                               ((in_stack_00000010 * fVar13 - fVar16 * fVar8) -
                               in_stack_00000020 * fVar11) - in_stack_00000030 * fVar6,
                               *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
                               *(undefined4 *)(lVar2 + 0x50),0);
  fVar8 = (float)uVar14;
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fVar11 = fStack000000000000005c * fStack000000000000005c +
           in_stack_00000050._4_4_ * in_stack_00000050._4_4_ +
           fStack0000000000000058 * fStack0000000000000058;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar11) {
    fVar6 = fStack000000000000005c * fVar5 +
            in_stack_00000050._4_4_ * fVar13 + fStack0000000000000058 * fVar8;
    fVar13 = fVar13 - (in_stack_00000050._4_4_ * fVar6) / fVar11;
    fVar8 = fVar8 - (fStack0000000000000058 * fVar6) / fVar11;
    fVar5 = fVar5 - (fStack000000000000005c * fVar6) / fVar11;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar11 = SQRT(fVar5 * fVar5 + fVar13 * fVar13 + fVar8 * fVar8);
  if (fVar11 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar13 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  else {
    fVar13 = fVar13 / fVar11;
    fVar8 = fVar8 / fVar11;
    fVar5 = fVar5 / fVar11;
  }
  fVar11 = (float)FUN_0531f5c0(uStack00000000000000cc,fVar9,fVar10);
  fVar13 = fVar4 * fVar13;
  fVar9 = fVar4 * fVar8 + fVar9;
  fVar10 = fVar4 * fVar5 + fVar10;
  uVar7 = FUN_0531f9e8(fVar13 + fVar11,fVar9,fVar10);
  fVar8 = fVar9;
  fVar11 = fVar10;
  fVar4 = (float)FUN_05320778();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(uVar7,fVar9,fVar10,
               (unaff_s8 * fVar8 + unaff_s9 * fVar13 + unaff_s11 * fVar4) - unaff_s10 * fVar11,
               (unaff_s9 * fVar11 + unaff_s10 * fVar13 + unaff_s11 * fVar8) - unaff_s8 * fVar4,
               (unaff_s10 * fVar4 + unaff_s8 * fVar13 + unaff_s11 * fVar11) - unaff_s9 * fVar8,
               ((unaff_s11 * fVar13 - unaff_s9 * fVar4) - unaff_s10 * fVar8) - unaff_s8 * fVar11);
  return;
}


