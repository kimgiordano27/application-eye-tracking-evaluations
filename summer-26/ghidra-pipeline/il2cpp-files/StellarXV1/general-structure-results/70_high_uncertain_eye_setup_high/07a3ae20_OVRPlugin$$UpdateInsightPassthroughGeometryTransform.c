/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 07a3ae20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__UpdateInsightPassthroughGeometryTransform
          (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *unaff_x19;
  float *unaff_x22;
  long unaff_x23;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  FUN_04077588(PTR_DAT_092b7110);
  FUN_04077588(PTR_DAT_09286860);
  *(undefined1 *)(unaff_x23 + 0x286) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  fVar10 = (float)FUN_07a3a8e8();
  fVar18 = *unaff_x22;
  uVar19 = *(undefined8 *)(unaff_x22 + 1);
  fVar17 = unaff_x22[3];
  uVar15 = *(undefined8 *)(unaff_x22 + 4);
  if (DAT_09885780 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_09885780 = '\x01';
  }
  puVar1 = PTR_DAT_09286860;
  fVar14 = (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar11 = fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14;
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar11) {
    fVar18 = (param_3 - (float)((ulong)uVar19 >> 0x20)) * fVar16 +
             (fVar10 - fVar18) * fVar17 + (param_2 - (float)uVar19) * fVar14;
    fVar17 = (fVar17 * fVar18) / fVar11;
    uVar15 = CONCAT44((fVar16 * fVar18) / fVar11,(fVar14 * fVar18) / fVar11);
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    fVar17 = **(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    uVar15 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  }
  fVar11 = *unaff_x22;
  uVar19 = *(undefined8 *)(unaff_x22 + 1);
  fVar18 = (float)FUN_07a3a944();
  lVar6 = FUN_04077674(*(undefined8 *)puVar1,1);
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (lVar6 != 0) {
    iVar7 = (int)*(ulong *)(lVar6 + 0x18);
    if (iVar7 != 0) {
      fVar17 = fVar17 + fVar11;
      fVar14 = (float)uVar15 + (float)uVar19;
      fVar11 = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar19 >> 0x20);
      fVar10 = SQRT((param_3 - fVar11) * (param_3 - fVar11) +
                    (fVar10 - fVar17) * (fVar10 - fVar17) + (param_2 - fVar14) * (param_2 - fVar14))
               - fVar18;
      *(float *)(lVar6 + 0x20) = fVar10;
      puVar1 = PTR_DAT_092b7110;
      if (1 < iVar7) {
        lVar8 = (*(ulong *)(lVar6 + 0x18) & 0xffffffff) - 1;
        pfVar9 = (float *)(lVar6 + 0x24);
        do {
          fVar16 = *pfVar9;
          if (*pfVar9 <= fVar10) {
            fVar16 = fVar10;
          }
          fVar10 = fVar16;
          lVar8 = lVar8 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar8 != 0);
      }
      if (fVar10 < fVar18) {
        fVar10 = SQRT(fVar18 * fVar18 - fVar10 * fVar10);
        fVar17 = fVar17 - fVar10 * unaff_x22[3];
        fVar14 = fVar14 - (float)*(undefined8 *)(unaff_x22 + 4) * fVar10;
        fVar11 = fVar11 - (float)((ulong)*(undefined8 *)(unaff_x22 + 4) >> 0x20) * fVar10;
      }
      uVar13 = CONCAT44(fVar11,fVar14);
      FUN_07a3a870(&stack0x00000020 + 4);
      uVar5 = uStack000000000000003c;
      uVar4 = uStack0000000000000038;
      uVar3 = uStack0000000000000034;
      uVar2 = uStack0000000000000030;
      uVar12 = FUN_07a3b114(fVar17,uVar13,fVar11);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_089d99f0(uVar12,uVar13 & 0xffffffff,fVar11,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
      FUN_07a3b23c(&stack0x00000020 + 4);
      unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      *unaff_x19 = in_stack_00000020._4_8_;
      *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


