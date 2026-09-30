/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 07a3a044
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose
               (float param_1,float param_2,float param_3,float param_4)

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
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 uStack00000000000000cc;
  
  fStack0000000000000054 = param_1;
  fStack0000000000000058 = param_2;
  fStack000000000000005c = param_3;
  uVar8 = FUN_07a38e28();
  fVar4 = (float)FUN_07a38b94();
  uStack00000000000000cc = *unaff_x22;
  fVar10 = (float)unaff_x22[1];
  uVar21 = *(undefined8 *)(unaff_x22 + 3);
  fVar11 = (float)unaff_x22[2];
  uVar13 = *(undefined8 *)(unaff_x22 + 5);
  fVar9 = unaff_s11;
  fVar14 = unaff_s8;
  fVar12 = unaff_s10;
  fVar5 = (float)FUN_089b8e60(unaff_s9,0);
  uVar22 = NEON_ext(uVar13,uVar21,4,1);
  uVar15 = NEON_rev64(CONCAT44(fVar9,fVar14),4);
  fVar17 = (float)uVar15;
  fVar18 = (float)((ulong)uVar15 >> 0x20);
  uVar15 = NEON_rev64(uVar21,4);
  uVar19 = NEON_ext(CONCAT44(fVar5,fVar17),CONCAT44(fVar18,fVar12),4,1);
  uVar16 = NEON_ext(uVar21,uVar13,4,1);
  fVar24 = (float)((ulong)uVar13 >> 0x20);
  uVar23 = NEON_rev64(uVar16,4);
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  fVar6 = ((float)uVar21 * fVar12 + (float)uVar13 * fVar17 + (float)uVar22 * fVar14) -
          (float)uVar16 * (float)uVar19;
  fVar9 = ((float)((ulong)uVar21 >> 0x20) * fVar18 +
          fVar24 * fVar5 + (float)((ulong)uVar22 >> 0x20) * fVar9) -
          (float)((ulong)uVar16 >> 0x20) * fVar20;
  fVar12 = (fVar12 * fVar24 + (float)uVar15 * fVar17 + (float)uVar23 * (float)uVar19) -
           (float)uVar21 * fVar14;
  fVar14 = ((fVar17 * fVar24 - (float)((ulong)uVar15 >> 0x20) * fVar5) -
           (float)((ulong)uVar23 >> 0x20) * fVar20) - (float)uVar13 * fVar14;
  fVar17 = (float)uVar8;
  uVar15 = NEON_ext(CONCAT44(fVar14,fVar12),CONCAT44(fVar9,fVar6),4,1);
  uVar8 = NEON_ext(CONCAT44(param_3,param_4),uVar8,4,1);
  uVar13 = NEON_ext(CONCAT44(fVar9,fVar6),CONCAT44(fVar14,fVar12),4,1);
  fVar5 = (param_2 * fVar9 + param_3 * fVar14 + param_4 * (float)((ulong)uVar15 >> 0x20)) -
          (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar13 >> 0x20);
  uVar8 = CONCAT44(fVar5,(fVar17 * fVar6 + param_4 * fVar12 + param_2 * (float)uVar15) -
                         (float)uVar8 * (float)uVar13);
  if (DAT_098854ec == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854ec = '\x01';
  }
  puVar1 = PTR_DAT_09285d60;
  lVar2 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
  fVar14 = (float)FUN_089b9694((param_3 * fVar12 + fVar17 * fVar14 + param_4 * fVar9) -
                               param_2 * fVar6,uVar8,fVar5,
                               ((param_4 * fVar14 - fVar17 * fVar9) - param_2 * fVar12) -
                               param_3 * fVar6,*(undefined4 *)(lVar2 + 0x48),
                               *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  fVar9 = (float)uVar8;
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  fVar12 = fStack000000000000005c * fStack000000000000005c +
           fStack0000000000000054 * fStack0000000000000054 +
           fStack0000000000000058 * fStack0000000000000058;
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar12) {
    fVar6 = fStack000000000000005c * fVar5 +
            fStack0000000000000054 * fVar14 + fStack0000000000000058 * fVar9;
    fVar14 = fVar14 - (fStack0000000000000054 * fVar6) / fVar12;
    fVar9 = fVar9 - (fStack0000000000000058 * fVar6) / fVar12;
    fVar5 = fVar5 - (fStack000000000000005c * fVar6) / fVar12;
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar12 = SQRT(fVar5 * fVar5 + fVar14 * fVar14 + fVar9 * fVar9);
  if (fVar12 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  else {
    fVar14 = fVar14 / fVar12;
    fVar9 = fVar9 / fVar12;
    fVar5 = fVar5 / fVar12;
  }
  fVar12 = (float)FUN_07a39234(uStack00000000000000cc,fVar10,fVar11);
  fVar14 = fVar4 * fVar14;
  fVar10 = fVar4 * fVar9 + fVar10;
  fVar11 = fVar4 * fVar5 + fVar11;
  uVar7 = FUN_07a396b8(fVar14 + fVar12,fVar10,fVar11);
  fVar9 = fVar10;
  fVar12 = fVar11;
  fVar4 = (float)FUN_07a3a448();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_089d99f0(uVar7,fVar10,fVar11,
               (unaff_s8 * fVar9 + unaff_s9 * fVar14 + unaff_s11 * fVar4) - unaff_s10 * fVar12,
               (unaff_s9 * fVar12 + unaff_s10 * fVar14 + unaff_s11 * fVar9) - unaff_s8 * fVar4,
               (unaff_s10 * fVar4 + unaff_s8 * fVar14 + unaff_s11 * fVar12) - unaff_s9 * fVar9,
               ((unaff_s11 * fVar14 - unaff_s9 * fVar4) - unaff_s10 * fVar9) - unaff_s8 * fVar12);
  return;
}


